//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()
{
    int num;
    printf("enter the month number");
    scanf("%d",&num);
    switch (num) {
        case 1:
            printf("january\n");
            printf("number of days: 31");
            break;
        case 2:
            printf("febrauary\n");
             printf("number of days: 28");
            break;
        case 3:
            printf("march\n");
             printf("number of days: 31");
            break;
        case 4:
            printf("april\n");
             printf("number of days: 30");
            break;
        case 5:
            printf("may\n");
             printf("number of days: 31");
            break;
        case 6:
            printf("june\n");
             printf("number of days: 30");
            break;
        case 7:
            printf("july\n");
             printf("number of days: 31");
            break;
        case 8:
            printf("august\n");
             printf("number of days: 31");
            break;
        case 9:
            printf("september\n");
             printf("number of days: 30");
            break;
        case 10:
            printf("october\n");
             printf("number of days: 31");
            break;
        case 11:
            printf("november\n");
             printf("number of days: 30");
            break;
        case 12:
            printf("december\n");
             printf("number of days: 31");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
