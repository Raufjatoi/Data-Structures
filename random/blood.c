#include <stdio.h>
#include <conio.h>

int main() {
	int age, weight;
	printf("Enter your age for blood donation:");
	scanf("%d", &age);
	printf("rnter your weight for blood donation");
	scanf("%d", &weight);
	if(age>=18 && age<=65){
		printf("you are eligible for blood donation");
		if(weight>=50){
			printf("your weight is eligible for blood donation\n");
		}else{
			printf("you are not eligible for blood donation\n");
		}
	}else{
		printf("you are not eligible for blood donation\n");
	}
	getch();
}