#include<stdio.h>

int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    int A;
    int freq[M+1];

    /*freq array intialize with zero */
    for(int i=0; i<=M; i++)
    {
        freq[i]=0;
    }
    /*check the apperance of each number from (1 to M) in array elements*/
   for(int i=0; i<N; i++)
   {
       scanf("%d",&A);
       freq[A]++;
   }
   /* print the number of each number apperance */
   for(int j=1; j<=M; j++)
   {
       printf("%d\n",freq[j]);
   }
    return 0;
}