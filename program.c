#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000
#define null ((void *)0)

static unsigned int len_student = 0;
static unsigned int len_project = 0;

typedef struct Student {
    char name[MAX_LENGTH];
    char code[MAX_LENGTH];
} Student;

typedef struct Project {
    unsigned int id;
    char name[MAX_LENGTH];
    char teacher[MAX_LENGTH];
    unsigned int total_member;
    Student *ptrStudentList;
} Project;


Student *ptrStudent;
Project *ptrProject;

void add_student();

void print_student(Student *student);

Student *findByCode(char *code);

void add_project();

void print_project(Project *project);

Project *findByCondition(Project *project);

void add_project() {
    getchar();
    ptrProject = (Project *) calloc(len_project, sizeof(Project));
    if (ptrProject == NULL) {
        perror("Error when create array");
    }
    int i;
    for (i = 0; i < len_project; i++) {
        puts("please enter name of project\n");
        fgets(ptrProject[i].name, MAX_LENGTH, stdin);
        puts("please enter teacher of project\n");
        fgets(ptrProject[i].teacher, MAX_LENGTH, stdin);
        fflush(stdin);
        puts("please enter total member of project\n");
        scanf("%d", &ptrProject[i].total_member);
        if (ptrProject[i].total_member > len_student) {
            perror("Invalid total number\n");
        }
        ptrProject[i].ptrStudentList = (Student *) calloc(ptrProject[i].total_member, sizeof(Student));
        int j;
        for (j = 0; j < ptrProject[i].total_member; j++) {
            puts("enter student code\n");
            char code[MAX_LENGTH];
            fgets(code, MAX_LENGTH, stdin);
            Student *student = findByCode(code);
            if (student != null) {
                ptrProject[i].ptrStudentList[i] = *student;
            }
        }
    }
    print_project(ptrProject);
}

void print_project(Project *project) {
    if (project == NULL)
        return;
    int i;
    for (i = 0; i < len_project; i++) {
        printf("{name : %s, teacher : %s, total_member : %d} \n", project[i].name, project[i].teacher,
               project[i].total_member);
        print_student(ptrProject[i].ptrStudentList);
    }

}

void add_student() {
    getchar();
    int i;
    ptrStudent = (Student *) calloc(len_student, sizeof(Student));
    if (ptrStudent == NULL) {
        perror("Error when create array student \n");
        return;
    }
    for (i = 0; i < len_student; i++) {
        puts("please enter name of student\n");
        fgets(ptrStudent[i].name, MAX_LENGTH, stdin);
        puts("please enter code of student\n");
        fgets(ptrStudent[i].code, MAX_LENGTH, stdin);
        fflush(stdin);
    }
    printf("Total student : %d \n", len_student);
    print_student(ptrStudent);

}

Student *findByCode(char *code) {
    int i;
    for (i = 0; i < len_student; i++) {
        if (strcmp(code, ptrStudent[i].code) == 0)
            return &ptrStudent[i];
    }
    return NULL;
}
Project *findByCondition(Project *project){
    int i,temp = 0;
    Project *projectTemp;
    for (i = 0; i < len_project; i++) {
        if (project[i].total_member > temp)
            projectTemp = &project[i];
    }
    return projectTemp;
}
void print_student(Student *student) {
    if (student == NULL)
        return;
    int i;
    for (i = 0; i < len_student; i++) {
        printf("{name : %s, code : %s} \n", student[i].name, student[i].code);
    }
}

int main(int argc, char *argv[]) {
    puts("Please enter len_student of the array student\n");
    scanf("%d", &len_student);
    add_student();
    puts("Please enter len_project of the array student\n");
    scanf("%d", &len_project);
    add_project();
    puts("Are you want find project is greater member \n");
    int choose;
    scanf("%d",&choose);
    if (choose == 1) {
        Project *project = findByCondition(ptrProject);
        printf("%d",project->total_member);
    } else {
        // do nothing
    }
    free(ptrProject);
    free(ptrStudent);
    return 0x0;
}
