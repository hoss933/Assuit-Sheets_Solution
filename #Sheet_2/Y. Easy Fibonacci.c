#include<stdio.h>

int main()
{
    int N ;
    scanf("%d",&N);
   
   int fib1=0; int fib2=1;

   if(N >= 1)
   {
       printf("%d",fib1);
   }
   if(N >= 2)
   {
        printf(" %d",fib2);
   }

   for(int i=3; i<=N; i++)
   {
        int nextfib = fib1+fib2;
        printf(" %d",nextfib);

        fib1=fib2;
        fib2=nextfib;
   }
    return 0;
}