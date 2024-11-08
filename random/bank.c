#include <stdio.h>
#include <conio.h> 

int main() {
    int account_balance, withdrawal_amount, permit;

    printf("enter your account balance: ");
    scanf("%d", &account_balance);
    printf("Enter your withdrawal amount: ");
    scanf("%d", &withdrawal_amount);

    if (account_balance < withdrawal_amount) {
        printf("You don't have enough amount\n");
    } else { 
        if (withdrawal_amount >= 10000) {
            printf("Do you have a special withdrawal permit? (Yes=1 / No=0)\n=> ");
            scanf("%d", &permit);
            if (permit == 1) {
                printf("%d withdrawal amount successfully\n", withdrawal_amount);	
            } else {
                printf("Withdrawal denied\n");
            }
        } else { 
            printf("%d successfully withdrawn\n", withdrawal_amount);
        }
    }
    getch(); 
}
