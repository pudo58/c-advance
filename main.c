#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CALCULATOR_LIST "+-*/"
#define ERROR_CODE 0xFFA
typedef struct Expression {
    double value_1;
    double value_2;
    char calculator[1];
    double result;
} Expression;
static int option_format;

void calc();

void option();

void option() {
    puts("Please choose option");
    scanf("%d", &option_format);
}

void calc() {
    Expression *expression = (Expression *) malloc(sizeof(Expression));
    puts("Enter number 1\n");
    scanf("%lf", &expression->value_1);
    getchar();
    puts("Enter number 2\n");
    scanf("%lf", &expression->value_2);
    getchar();
    puts("Enter calculation 2\n");
    scanf("%s", &expression->calculator);
    getchar();
    if (!strstr(CALCULATOR_LIST, &expression->calculator)) {
        puts("incorrect calculation");
    }
    if (strcmp("+", expression->calculator) == 0) {
        expression->result = expression->value_1 + expression->value_2;
    }
    if (strcmp("-", expression->calculator) == 0) {
        expression->result = expression->value_1 - expression->value_2;
    }
    if (strcmp("*", expression->calculator) == 0) {
        expression->result = expression->value_1 * expression->value_2;
    }
    if (strcmp("/", expression->calculator) == 0) {
        if (expression->value_2 == 0) {
            perror("no, value2 is not equals zero number");
            exit(ERROR_CODE);
        }
        expression->result = (double) expression->value_1 / expression->value_2;
    }
    option();
    if (option_format == 1) {
        int temp, reverse_num = 0;
        int original_num = (int) expression->result;
        while (original_num != 0) {
            temp = original_num % 10;
            reverse_num = reverse_num * 10 + temp;
            original_num /= 10;
        }
        printf("Result reverse: %d", reverse_num);
    } else {
        printf("Result = %lf", expression->result);
    }

}

int main() {
    calc();
    return 0;
}
