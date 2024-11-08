#include <stdio.h>
#include <conio.h>

int main() {
	int PF, CF, FE;
	float Average;
	printf("Enter your PF marks:");
	scanf("%d", &PF);
	printf("Enter your CF marks:");
	scanf("%d", &CF);
	printf("Enter your FE marks:");
	scanf("%d", &FE);
	Average = (PF + CF + FE) / 3.0;
    printf("Average Marks: %.2f\n", Average);
    if(Average < 50){
        printf("Status: Fail");
        printf("Grade: F");
    }else{
        printf("Status: Pass");
        if (Average > 75) {
            printf("Grade: A");
        }else{
            printf("Grade: B");
        }
    }

    getch();
}