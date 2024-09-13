#include<stdio.h>
#include<string.h>
int main()
{
    int X;
    char buffer[5];
    scanf("%d",&X);
    // Convert the number to a string
    sprintf(buffer, "%d", X);

    char First_digit_Char = buffer[0];//get first char in the buffer
    int First_Digit = First_digit_Char - '0';//convert the char to digit
    
      if (First_Digit % 2 == 0) 
    {
        printf("EVEN\n");
    } else
    {
        printf("ODD\n");
    }
    return 0;
}