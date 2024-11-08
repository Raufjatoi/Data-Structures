#include <stdio.h>
#include <conio.h>

int main() {
    float Purchased_amount, Final_amount;
    int Membership;
    printf("Enter your purchased amount: ");
    scanf("%f", &Purchased_amount);
    if (Purchased_amount > 2000) {
        printf("Do you have a membership (Yes=1 / No=0)? ");
        scanf("%d", &Membership);
        if (Membership == 1){
            // Apply 20% discount for members
            Final_amount = Purchased_amount * 0.80;
            printf("You got a 20%% discount\n");
        }else{
            Final_amount = Purchased_amount * 0.90;
            printf("You got a 10%% discount\n");
        }
    }else{
        Final_amount = Purchased_amount;
        printf("No discount applied.\n");
    }
    printf("Final amount is %.2f\n", Final_amount);

    getch();
}