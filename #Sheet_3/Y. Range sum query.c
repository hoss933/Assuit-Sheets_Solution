#include<stdio.h>


int main()
{
    int N, Q, L, R;
    scanf("%d %d", &N, &Q);
    int A[N];
    /* prefix sum array*/
    long long int prefixsum[N+1];
    prefixsum[0] =0;

    /*enter array elements*/
    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
        prefixsum[i+1] = prefixsum[i] + A[i];
    }

     for(int j=1; j<=Q; j++)
    {
        scanf("%d %d", &L, &R);
        long long int Result = prefixsum[R] - prefixsum[L-1];
        printf("%lld\n",Result);
    }
    return 0;
}
