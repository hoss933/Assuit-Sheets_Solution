#include <stdio.h>
#include <math.h>

int main()
{
    int A,B;
    char S;
    scanf("%d %c %d",&A,&S,&B);

    
    if((A < B) && (S == '<'))
    {
        printf("Right\n");
    }else if((A > B) && (S == '>'))
    {
        printf("Right\n");
    }else if((A == B) && (S == '='))
    {
        printf("Right\n");
    }else 
    {
        printf("Wrong\n");
    }
    return 0;
}
/*another solution 
    int A,S,B;
    scanf("%d %c %d",&A,&S,&B);
    
    if(S == '<')
    {
        if(A < B)
        {
            printf("Right\n");
        }else
        {
            printf("Wrong\n");
        }
    }else if (S == '>')
    {
        if(A > B)
        {
            printf("Right\n");
        }else
        {
            printf("Wrong\n");
        }
    }else if(S == '=')
    {
        if(A == B)
        {
            printf("Right\n");
        }else
        {

        }printf("Wrong\n");
    }
*/
