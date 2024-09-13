#include<stdio.h>
#include<string.h>
int main()
{
    int A,B,i=0;
     int foundLucky = 0;
    scanf("%d %d",&A,&B);
    
    for(i=A; i<=B; i++)
    {
        int number = i;
        int islucky = 1;
        while(number > 0)
        {
            int digit = number%10;
            if((digit != 4) && (digit != 7))
            {
                islucky=0;
                break;
            }
            number /= 10;
        } if(islucky)
        {
            printf("%d ",i);
            foundLucky=1;
        }
    }
     if(!foundLucky)
        {
            printf("-1\n");
        }
        return 0;
}
     
