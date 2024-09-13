#include<stdio.h>

int main()
{
    int N,i=0;
    scanf("%d",&N);
    char A[1000001];

    scanf("%s",A);
    int Sum=0;

    for(i=0; i<N; i++)
    {
        Sum+=A[i] -'0';  //convert char to integer
    }
    
    printf("%d\n",Sum);
    return 0;
}