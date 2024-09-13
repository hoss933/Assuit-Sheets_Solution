#include <stdio.h>

int main()
{
    long long int N,M;
    scanf("%lld %lld",&N,&M);
    printf("%lld\n",(N % 10) + (M % 10));
    return 0;
}