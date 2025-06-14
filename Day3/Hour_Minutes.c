#include <stdio.h>
int isValidTime(int hour, int minute) {
    if (hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59)
        return 1;
    else
        return 0;
}

int main() {
    int hour, minute;

    printf("Enter time (HH:MM): ");
    scanf("%d:%d", &hour, &minute);

    if (isValidTime(hour, minute))
        printf("Valid Time\n");
    else
        printf("Invalid Time\n");

    return 0;
}
