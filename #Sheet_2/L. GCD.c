#include<stdio.h>

int main()
{
    int A,B,i=0,j=0,Max1,Max2,Max;
    scanf("%d %d",&A,&B);

    for(i=1; i<=A; i++)
    {
        for(j=1; j<=B; j++)
        {
            if(A % j == 0)
            {
                Max1 = j;
            }if(B % j == 0)
            {
                Max2 = j;
            }if(Max1 == Max2)
            {
                Max = Max1;
            }
        }
        
    }
    printf("%d\n",Max);
    return 0;
}