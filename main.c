#include <stdio.h>
#include <stdlib.h>

typedef struct Expression {
    double value_1;
    double value_2;
    char calculator;
    double result;
} Expression;

void calc() {
    Expression *expression = (Expression *) malloc(sizeof(Expression));
    puts("Enter number 1\n");
    scanf("%lf", &expression->value_1);
    puts("Enter number 2\n");
    scanf("%lf", &expression->value_2);
    puts("Enter calculation 2\n");
    scanf("%c", &expression->calculator);

}

int main() {
    printf("Hello, World!\n");
    return 0;
}
