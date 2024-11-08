#include <stdio.h>
#include <conio.h>

int main() {
	float charges, units;
	printf("Enter your units:");
	scanf("%f", &units);
	if(units<=100){
		printf("No extra charges");
	}
	else if(units>=101 && units<=200){
		charges=units*5;
		printf("your amount is %.2f", charges);
	}
	else if(units>=201 &&units<=300){
		charges=units*8;
		printf("your amount is %.2f", charges);
	}
	else if(units>300){
		charges=units*10;
		printf("your amount is %.2f", charges);
	}
	else{
		printf("enter correct information");
	}
	getch();
	return 0;
}