//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
    int seconds;
    printf("enter time in seconds = ");
    scanf("%d",&seconds);
    float minutes = seconds/60;
    float hours = seconds/3600;
    printf("time in minutes = %f\n",minutes);
    printf("time in hours = %f",hours);
    return 0;
}
