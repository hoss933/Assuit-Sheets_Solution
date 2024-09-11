#include <stdio.h>
#include <stdlib.h>

char message[100];
int main()
{
    printf("please enter your Name: ");
    gets(message);
    printf("Hello, %s" ,message);
    return 0;
}