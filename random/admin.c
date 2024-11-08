#include <stdio.h>
#include <conio.h>

int main() {
	int maths, science, percentage;
	printf("Enter your maths percentage:");
	scanf("%d", &maths);
	printf("Enter your science percentage:");
	scanf("%d", &science);
	percentage=maths+science;
	if(percentage>=50){
		printf("You are eligible for admission");
		if(percentage>=80){
			printf("You are qualified for a scholarship");
		}
	}
	else{
		printf("You are not eligible for admission");
	}	
	getch();
}