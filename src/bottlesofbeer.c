#include <stdio.h>
#include <stdlib.h>

//If zero or undefined, the unsigned long long integer representing "bottles of beer" will neither underflow nor appear to underflow during loop execution; otherwise, the unsigned long long integer representing "bottles of beer" will not underflow during loop execution, but will appear to.
#define BOTTLESOFBEER_UNDERFLOW 0

int main(int argc, char **argv)
{
    switch(argc)
    {
        case 2:
            for(register unsigned long long i = strtoull(argv [1], NULL, 10);;) //Uses for-loop to declare and define a variable within a switch statement
            {
                for(; i > 1ULL; i--) //Nested for-loop using definitional fallthrough from the outer loop
                {
                    printf("%llu bottles of beer on the wall;\n%llu bottles of beer;\nTake one down, pass it around;\n%llu bottles of beer on the wall;\n\n", i, i, i - 1);
                }
                if(1ULL == i--) //Nested if-then statement using a Yoda conditional, allowing i to be checked and decremented in the same line, and following a nested for-loop, allowing a conditional message to be printed with O(1), rather than O(n), time complexity
                {
                    fputs("1 bottle of beer on the wall;\n1 bottle of beer;\nTake one down, pass it around;\n0 bottles of beer on the wall;\n\n", stdout);
                }
                break; //Break statement
            }
            #if defined(BOTTLESOFBEER_UNDERFLOW) && BOTTLESOFBEER_UNDERFLOW != 0 //If zero or undefined, the unsigned long long integer representing "bottles of beer" will neither underflow nor appear to underflow during loop execution; otherwise, the unsigned long long integer representing "bottles of beer" will not underflow during loop execution, but will appear to.
                printf("0 bottles of beer on the wall;\n0 bottles of beer;\nTake one down, pass it around;\n%llu bottles of beer on the wall;\n\n", (unsigned long long) -1);
            #endif
            exit(EXIT_SUCCESS);

        default:
            fputs("Expected argument: number of bottles\r\n", stderr);
            exit(EXIT_FAILURE);
    }
}