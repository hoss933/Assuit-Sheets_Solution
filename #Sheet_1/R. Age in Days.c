#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int Years = (N / 365);

    int Months = (N - Years * 365)/30;
    
    int Days = (N - Years * 365 - Months * 30);
    
    printf("%d years\n%d months\n%d days\n",Years, Months, Days);
    return 0;
}