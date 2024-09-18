#include<stdio.h>

int main()
{
    int T; 
    scanf("%d",&T); //Enter num of test cases

    while(T--)
    {
        int N;
        scanf("%d",&N); //Enter num of array elements
        int A[N];
    
        for(int i=0; i<N; i++)
        {
            scanf("%d",&A[i]);
        }
        
        int Counter=0; //the number of sub-arrays which are non-decreasing
        for(int i=1; i<=N; i++)
        {
            
            Counter++;
            ;
            for(int j=i; j<N; j++)
            {
                
                if(A[j]>A[j-1])
                {
                   Counter++;
                }else
                {
                    break;
                }
                
            }
        }
        printf("%d\n",Counter);
    }
    return 0;
}