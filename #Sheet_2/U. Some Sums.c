#include<stdio.h>

int main()
{
    int N,A,B;
    int sum=0;
    scanf("%d %d %d",&N,&A,&B);

    for(int i=1; i<=N; i++)
    {
       int Sum_Digits =0;
       int num =i;

       while(num>0)
       {
            Sum_Digits += (num%10);
            
            num /= 10;
       }
        if (Sum_Digits >= A && Sum_Digits <= B)
        {
            sum += i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
    
