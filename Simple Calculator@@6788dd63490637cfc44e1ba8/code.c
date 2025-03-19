#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    scanf("%lf %lf %c", &num1,&num2,&operator);
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d\n", result);
            } else {
                printf("error\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
