
#include<stdio.h>
#include<stdlib.h>

#include"library.h"

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
int main(int argc, char* argv[])
{
    puts("------------------");
    puts("| codedrome.com  |");
    puts("| Static Library |");
    puts("------------------\n");

    int data[] = {11,22,33,44,55,66,77,88,99};

    int t = total(data, 9);

    printf("The total is %d\n", t);

    return EXIT_SUCCESS;
}
