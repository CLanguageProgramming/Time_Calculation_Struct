#include <string.h>
#include <stdio.h>

int TwelveHourClock;
int TwentyFourHourClock;

struct thrc
{
    int hours;
    int mins;
    int sec;
    char mer;
}t[2];

struct twhrc
{
    int hours;
    int mins;
    int sec;
}tw[2];

int main()
{
    int switc;
    printf("Enter 12 for 12 Hour Clock\n");
    printf("Enter 24 for 24 Hour Clock\n");
    printf("Enter a number\n>>");
    scanf("%d", &switc);
    if(switc == 12)
    {
        TwelveHourClock();
    }
    else if(switc == 24)
    {
        TwentyFourHourClock;
    }
    else
    {
        printf("Wrong Number");
    }
    return 0;
}

int TwelveHourClock()
{
    printf("starting time\n");
    printf("Enter Hours: ");
    scanf("%d", &t1.hours);
    printf("Enter Meririan: ");
    scanf("%d", &t1.mer);
    printf("Enter Minutes: ");
    scanf("%d", &t1.mins);
    printf("Enter Seconds: ");
    scanf("%d", &t1.sec);
    
    printf("Ending time\n");
    printf("Enter Hours: ");
    scanf("%d", &t2.hours);
    printf("Enter Meririan: ");
    scanf("%d", &t2.mer);
    printf("Enter Minutes: ");
    scanf("%d", &t2.mins);
    printf("Enter Seconds: ");
    scanf("%d", &t2.sec);
    if(t1.hours || t1.mins || t1.sec >12)
    {
        printf("Invalid");
        return 0;
    }
    if(t1.hours || t1.mins || t1.sec <0)
    {
        printf("Invalid");
        return main;
    }
}


int TwentyFourHourClock()
{
    printf("starting time\n");
    printf("Enter Hours: ");
    scanf("%d", &tw1.hours);
    printf("Enter Minutes: ");
    scanf("%d", &tw1.mins);
    printf("Enter Seconds: ");
    scanf("%d", &tw1.sec);
    
    printf("Ending time\n");
    printf("Enter Hours: ");
    scanf("%d", &tw2.hours);
    printf("Enter Minutes: ");
    scanf("%d", &tw2.mins);
    printf("Enter Seconds: ");
    scanf("%d", &tw2.sec);
}
