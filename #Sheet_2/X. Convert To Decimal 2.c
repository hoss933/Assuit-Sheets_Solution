#include<stdio.h>


int main()
{
    int T;
    scanf("%d",&T);

    while(T--)
    {
        int N;
        scanf("%d",&N);
        int count=0;

        while(N > 0)
        {
            
            if(N%2 == 1)
            {
                count++;
            }
            N/=2;
        }

        int result = (1 << count)-1;
        printf("%d\n",result); // Equal 2^Count-1
    }
    return 0;
}