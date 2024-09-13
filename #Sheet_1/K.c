#include<stdio.h>

int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
   
   int Min,Max;
   if((A <= B) && (A <= C))
   {
       Min = A;
   }else if ((B <= A) && (B <= C))
   {
       Min = B;
   }else
       Min = C;
    if ((A >= B) && (A >= C))
    {
        Max = A;
    }else if ((B >= A) && (B >= C))
    {
        Max = B; 
    }else
    {
        Max = C;
    }
        
       printf("%d %d",Min,Max);
    return 0;
}