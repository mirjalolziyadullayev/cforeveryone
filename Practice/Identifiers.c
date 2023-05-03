// Identifiers

// int main ()
// main - Identifier
// int - keyword

// id ::= {letter|underscore} 1

// {letter|
// underscore|
// Digit} 0+

// K
// _printF
// two_words
// two Words
// my_dna23

// but not

// #me
// or 
// me#

// _x
// 23my_dna

// good id's - dcument 
//           - readable
// main 
// printf
// sqrt
// superman
// radius
// i

// bad

// grx33
// _pp_25
// i_am_fourWords

// good or bad

// data
// mxyzptlk
// x
// y
// g

// here is the simple program for example

/*Circle and area*/

#include<stdio.h>
#define PI 3.14159

int main() 
{
        double area = 0.0, radius = 0.0;
        printf("Enter Radius bro: ");
        scanf("%lf", &radius);
        area = PI * radius * radius;
        printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);
        return 0;
}
