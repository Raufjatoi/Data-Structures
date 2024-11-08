#include <stdio.h>
#include <conio.h>

int main() {
	int number;
	printf("Enter an number(1/7):");
	scanf("%d", &number);
	if (number==1) {
		printf("Monday");
	}else if(number==2){
		printf("Tuesday");
	}else if(number==3){
		printf("Wednesday");
	}else if(number==4){
		printf("Thursday");
	}else if(number==5){
		printf("Friday");
	}else if(number==6){
		printf("Saturday");
	}else if(number==7){
		printf("Sunday");
	}else{
		printf("Invalid Input");
	}
	getch();
	return 0;
}