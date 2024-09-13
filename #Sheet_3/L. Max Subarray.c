#include<stdio.h>
/*Declaration functions*/
int max( int a, int b);
void Max_SubArray_Element(int My_Array[] , int Array_lenth);

int main()
{
    
    int T=0;
    /*Enter Test Cases Number*/
    scanf("%d",&T);
    /* test Cases */
    while(T--)
    {
        int N=0;
        /*Enter Number of elements in array*/
        scanf("%d",&N);
        
        int A[N];
        /*Enter Array Elements*/
        for(int i=0; i<N; i++)
        {
            scanf("%d",&A[i]);
        }
        /*printf Subarray max elements*/
        Max_SubArray_Element(A,N);

    }
    return 0;
}
int max( int a, int b)
{
    return (a > b)? a:b;
}
void Max_SubArray_Element(int My_Array[] , int Array_lenth)
{
    for(int i=0; i<Array_lenth; i++)
    {
        int Current_Max = My_Array[i];
        for(int j=i; j<Array_lenth; j++)
        {
             // Update the current max in the sub-array from i to j
            Current_Max = max(Current_Max , My_Array[j]);
            printf("%d ",Current_Max);
        }
        
    }
    printf("\n");
}