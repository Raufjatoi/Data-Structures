#include <stdio.h>
#include <conio.h>

int main() {
	int age;
	char Serious_illness;
		printf("Enter your age for Health Insurance:");
		scanf("%d", &age);
		if(age>=18){
			if(age>=45){
			 printf("Do you have any serious illness (Yes=1/No=0)? ");
            scanf("%d", &Serious_illness);
            if(Serious_illness == 1){
                printf("You are not eligible for health insurance");
            }else{
                printf("You are eligible for health insurance");
            }
        }else{
            printf("You are eligible for health insurance");
        }
    }else{
        printf("You are not eligible for health insurance");
    }
    getch();
}