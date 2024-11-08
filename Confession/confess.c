#include <stdio.h>

int total(int r, int w) {
    return r + w;
}

void reply(int total) {
    if (total >= 120) {
        printf("Oh bhai, 2 ghante confessions mein laga diye?! Kya NASA mein job lagne wali hai is se? Acha hota yehi time kisi kaam ki cheez pe lagate. Zindagi mein kuch bara karna hai ya bas yahan hi phasna hai?\n");
    } else if (total >= 60) {
        printf("Vah, lagta hai aj sirf confession scroll karne ka irada tha. 1 se 2 ghante waste karke samajhte ho tumhari life set ho jayegi? Thora focus apne real goals pe bhi rakho, shayad kuch ban jao.\n");
    } else {
        printf("Chalo, kam az kam tumne apni zindagi ke 1 ghante se kam hi barbaad kiye. Isi tarah control mein raho aur asli zindagi mein bhi kuch kar dikhane ka irada rakho!\n");
    }
}

int main() {
    int week = 0;
    int daily[7];
    
    printf("Confession Time Tracker\n\n");
    
    for (int day = 0; day < 7; day++) {
        int r, w, dayTotal;
        
        printf("Day %d:\n", day + 1);
        
        printf("Enter time spent reading confessions (in minutes): ");
        scanf("%d", &r);
        
        printf("Enter time spent writing confessions (in minutes): ");
        scanf("%d", &w);
        
        dayTotal = total(r, w);
        daily[day] = dayTotal;
        week += dayTotal;
        
        reply(dayTotal);
        printf("\n");
    }
    
    printf("Weekly Summary:\n");
    if (week > 600) {
        printf("Kya baat hai, 10 ghante se zyada confessions mein ghusa hua hai? Jawan admi ho ya waqt barbaad karne ki machine? Kuch productive cheez socho, warna ye confessions tumhari CV mein nahi likhe jayenge!\n");
    } else {
        printf("Wah bhai, lagta hai thoda waqt manage karna seekh rahe ho! Isi tarah apne goals par focus karo, warna ye confession wali duniya tumhe kabhi aagay nahi le jaayegi. Shabash, sahi raho!\n");
    }
}