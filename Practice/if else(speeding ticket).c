/*
 * If and Relations and flow control
 * by Person and professor Ira Pohl
 * Apr 11, 2023
 */

#include<stdio.h>

int main()
{
        int speed;

        printf("\nEnter your speed as an integer:");
        scanf("%d", &speed);

        if (speed < 65)
                printf("\nNo speeding ticket");
        else
                printf("\nSpeeding ticket");
        return 0;
}
