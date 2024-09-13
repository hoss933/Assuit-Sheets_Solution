#include <stdio.h>

int main()
{
    int A,B;
    char S;

    scanf("%d%c%d",&A,&S,&B);
    switch(S)
    {
        case '+':
        printf("%i\n",(A+B));
        break;
        
        case '-':
        printf("%i\n",(A-B));
        break;

        case '*':
        printf("%i\n",(A*B));
        break;

        case '/':
        printf("%i\n",(A/B));
        break;

        default :
        printf("invalid\n");
        break;
    } 
    return 0;
}