#include <stdio.h>
#include <conio.h>

int main() {
	float income, tax;
	printf("Enter your income:");
	scanf("%f", &income);
	if(income<=250000){
		printf("No tax");
		}else if(income>=250001 && income<=500000){
			tax=income*0.05;
			printf("Your tax is %.2f", tax);
		}else if(income>=500001 && income<=1000000){
			tax=income*0.10;
			printf("Your tax is %.2f", tax);
		}else if(income>1000001){
			tax=income*0.15;
			printf("Your tax is %.2f", tax);
		}

	getch();	
}