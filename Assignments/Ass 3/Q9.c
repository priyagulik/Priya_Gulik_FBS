#include <stdio.h>

void main() 
{
    int n = 656, rev = 0, rem, temp;

    temp = n;   

    while (n > 0) 
    {
        rem = n % 10;           
        rev = (rev * 10) + rem; 
        n = n / 10;             
    }

    if (temp == rev) 
    {
        printf("Number is Palindrome");
    } 
    else 
    {
        printf("Number is not Palindrome");
    }
}
