/*
 *Conversion of Fahrenheit to Celsius 
 *by Person and professor Ira Pohl
 *March 28, 2023
 */
#include <stdio.h>
int main(void)
{
    int fahrenheit, celsius;
    
    printf("Please enter fahrenheit as an integer bro:");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit -32)/1.8; //note conversion
    printf("\n %d fahrenheit is %d celsius.\n",
		    fahrenheit, celsius);
    return 0;
}
