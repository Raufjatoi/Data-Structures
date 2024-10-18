#include <stdio.h>
#include <conio.h>

int add(int num1 , int num2 ){
    return num1 + num2;
}
int sub(int num1 , int num2 ){
    return num1 - num2;
}
int mul(int num1 , int num2 ){
    return num1 * num2;
}
int div(int num1 , int num2 ){
    return num1 / num2;
}

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

    int result = 0;

    if (op == '+'){
        result = (add(num1,num2));
    }
    else if (op == '-'){
        result = (sub(num1,num2));
    }
    else if (op == 'x'){
        result = (mul(num1 , num2));
    }
    else if (op == '/'){
        result = (div(num1,num2));
    }
    printf("The result of %d %c %d is: %d\n", num1, op, num2, result);
    
}