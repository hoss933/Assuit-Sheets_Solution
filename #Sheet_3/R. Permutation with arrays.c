#include<stdio.h>

void SwapFun (int *Pnumber1,int *pnumber2)
{
    int TempNum = *Pnumber1;
    *Pnumber1 = *pnumber2;
    *pnumber2 = TempNum;
}
void perform_Bubble_Sorting(int My_Array[], int Array_len);

int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    int B[N];
    /*Enter A array*/
    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    /*Enter B array*/
    for(int j=0; j<N; j++)
    {
        scanf("%d",&B[j]);
    }
    /*Sort A array*/
    perform_Bubble_Sorting(A,N);
    /*Sort B array*/
    perform_Bubble_Sorting(B,N);

    /*check if B is Permutation with A*/
    int Checker=1;

    for(int j=0; j<N; j++)
    {
        if(A[j] != B[j])
        {
            Checker=0;
        }else{/*Nothing*/}
    }

    if(Checker)
    {
        printf("yes\n");
    }else
    {
        printf("no\n");
    }  
    return 0;
}

void perform_Bubble_Sorting(int My_Array[], int Array_len)
{
    int BS_Iterator=0;
    int AD_Iterator=0;
    for(int BS_Iterator=0; BS_Iterator<Array_len-1; BS_Iterator++)
    {
        for(int AD_Iterator=0; AD_Iterator<Array_len-1-BS_Iterator; AD_Iterator++)
        {
            if(My_Array[AD_Iterator] > My_Array[AD_Iterator+1])
            {
                SwapFun(&(My_Array[AD_Iterator]), &(My_Array[AD_Iterator+1]));
            }else
            {/*Nothing*/}
        }
    }
}