//
//  main.c
//  hist
//
//  Created by Ree on 12/12/16.
//  Copyright © 2016 Ree. All rights reserved.
//
//Histogram of pokemon cards types in original expansion pack

#include <stdio.h>
#define  SIZE   7

int main()
{
    // declare and initialize an array named n with size SIZE...
    char n[SIZE][20] = {"fire", "water", "grass","psychic","fight","normal","electric"}; //types
    int m[SIZE] = {9,12,13,8,8,11,8}; //number per type
    int i,j;
    // display the table header...
    printf("%12s%17s%17s\n","Index", "Type", "Histogram");
    // do the iteration...
    // the outer for loop, read row by row...
    for(i=0; i <= (SIZE-1); i++)
    {
        printf("%9d%20s       ", i, n[i]);
        // the inner for loop, for every row, read column by column and print the bar...
        for(j = 1; j<= m[i]; j++)
            // print the asterisk bar...repeat...
            printf("*");
        // go to new line for new row...repeats...
        printf("\n");
    }
    return   0;
}
