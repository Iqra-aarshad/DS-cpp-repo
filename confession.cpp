#include <stdio.h>

#define DAYS 7
#define MINUTES_IN_HOUR 60

int calculateTotalTime(int readingTime, int writingTime);
void roastFeedback(int dailyTotal);
void weeklySummary(int totalWeeklyTime);

int main() {
    int readingTime[DAYS], writingTime[DAYS];
    int dailyTotal[DAYS], totalWeeklyTime = 0;

    for (int i = 0; i < DAYS; i++) {
        printf("Enter time spent reading confessions on day %d in min: ", i + 1);
        scanf("%d", &readingTime[i]);
        printf("Enter time spent writing confessions on day %d in min: ", i + 1);
        scanf("%d", &writingTime[i]);

        dailyTotal[i] = calculateTotalTime(readingTime[i], writingTime[i]);
        totalWeeklyTime += dailyTotal[i];

        roastFeedback(dailyTotal[i]);
    }

    weeklySummary(totalWeeklyTime);

    return 0;
}

int calculateTotalTime(int readingTime, int writingTime) {
    return readingTime + writingTime;
}

void roastFeedback(int dailyTotal) {
    if (dailyTotal > 120) {
        printf("Oh bhai, 2 ghante confessions mein laga diye?! Kya NASA mein job lagne wali hai is se?  Acha hota yehi time kisi kaam ki cheez pe lagate. Zindagi mein kuch bara karna hai ya bas yahan hi phasna hai?\n");
    } else if (dailyTotal > 60 && dailyTotal <= 120) {
        printf("Vah, lagta hai ya sirf confession scroll karne ka irada tha. 1 se 2 ghante waste karke samajhte ho tumhari life set ho jayegi? Thora focus apne real goals pe bhi rakho, shayad kuch ban jao.\n");
    } else if (dailyTotal <= 60) {
        printf("Chalo, kam az kam tumne apni zindagi ke 1 ghante se kam hi barbaad kiye.Isi tarah control mein raho aur asli zindagi mein bhi kuch kar dikhane ka irada rakho!\n");
    }
}

void weeklySummary(int totalWeeklyTime) {
    printf("\nWeekly Summary:\n");
    if (totalWeeklyTime > 600) {
        printf("Kya baat hai, 10 ghante se zyada confessions mein ghusa hua hai?jawan admi ho ya waqt barbaad karne ki machine?kuch productive cheez socho, warna ye confessions tumhari CV mein nahi likhe jayenge!\n");
    } else {
        printf("Wah bhai, lagta hai thoda waqt manage karna seekh rahe ho!Isi tarah apne goals par focus karo, warna ye confession wali duniya tumhe kabhi aagay nahi le jaayegi. Shabash, sahi raho!\n");
    }
}