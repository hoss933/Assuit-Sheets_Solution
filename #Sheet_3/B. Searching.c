#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N,X,i=0,Index=0;
    scanf("%d",&N);
    int A[N];

    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
     scanf("%d",&X);

    for(int j=0; j<N; j++)
    {
       
        if(X == A[j])
        {
            Index =j;
            break;
        }else
        {
            Index =-1;
        }
    }
    printf("%d\n",Index);
    return 0;
}