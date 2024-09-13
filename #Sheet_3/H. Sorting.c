#include<stdio.h>
#include<string.h>


void SwapFun (int *Pnumber1,int *pnumber2)
{
    int TempNum = *Pnumber1;
    *Pnumber1 = *pnumber2;
    *pnumber2 = TempNum;
}
void perform_Bubble_Sorting(int My_Array[], int Array_len);

int main()
{
    int N,i=0;
    scanf("%d",&N);
    int A[N];
    
    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }

    perform_Bubble_Sorting(A,N);
    
    for(int j=0; j<N; j++)
    {
        printf("%d ",A[j]);
    }
    return 0;
}
void perform_Bubble_Sorting(int My_Array[], int Array_len)
{
    int BS_Iterator=0, AD_Iterator=0;
    for(BS_Iterator=0; BS_Iterator<Array_len-1; BS_Iterator++)
    {
        for(AD_Iterator=0; AD_Iterator<Array_len-1-BS_Iterator; AD_Iterator++)
        {
            if(My_Array[AD_Iterator] > My_Array[AD_Iterator+1])
            {
                SwapFun(&(My_Array[AD_Iterator]), &(My_Array[AD_Iterator+1]));
            }
            else
            {/*Nothing*/}
        }
    }
}