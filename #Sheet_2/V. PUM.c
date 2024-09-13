#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        int F_Element = 4*i-3 ;
        for(int j=F_Element; j <(F_Element+3); j++)
        {
            printf("%d",j);
            printf(" ");
        }
        printf("PUM\n");
    }
    return 0;
}