#include <stdio.h>
#include <conio.h>

int main(){
    int num1 , num2;
    char op;

    printf("num1 : ");
    scanf("%d", &num1);

    printf("num2 : ");
    scanf("%d", &num2);

    printf("operator : ");
    op = getch();
    printf("\n");

    if (op == '+'){
        printf("addition of num1 and num2 is %d.\n", num1+num2);
    }
    else if (op == '-'){
        printf("subtraction of num1 and num2 is %d.\n", num1-num2);
    }
    else if (op == 'x'){
        printf("multiplication of num1 and num2 is %d.\n", num1*num2);
    }
    else if (op == '%'){
        printf("division of num1 and num2 is %d.\n", num1%num2);
        if (num2 == 0){
            printf("cant divide by 0");
            return 1;
        }
    }
    else {
        printf("invalid operator");
    }
}