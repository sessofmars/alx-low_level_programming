
#include <stdio.h>
#include "isupper"

int _isupper(int ch) 
{
    // functions that checks if C is a capital
    void check(char ch)

 
    if (ch >= 'A' && ch <= 'Z')
        printf("\n%c is an UpperCase character",
               ch);
    return 1;
 
    else if (ch >= 'a' && ch <= 'z')
        printf("\n%c is an LowerCase character",
               ch);
    return 0;
 
    else
        printf("\n%c is not an aplhabetic character",
               ch);
    return 0;
}
