#include <stdio.h>
#include <conio.h>

int main() {
	int income, loan;
	printf("Enter your income:");
	scanf("%d", &income);
	if(income<=30000){
		printf("You are not eligible for loan");
	}else{
		printf("Do you have existing loan(Yes=1/No=0)?");
		scanf("%d", &loan);
		if(loan==1){
			printf("You are not eligible for the loan due to overdue payments");
		}else{
			printf("You are eligible for the loan");
		}
	}
	getch();
}