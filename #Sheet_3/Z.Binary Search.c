#include<stdio.h>

void Swap_Two_Numbers(unsigned int *ptr1, unsigned int *ptr2);
void perform_Bubble_Sort(int Array[], int Arr_Length);
int Binary_Search (int arr[], int size, int value);
int main()
{
    int N=0, Q=0, X=0;
    scanf("%d %d",&N, &Q);

    int A[N];
    
    for(int i=0; i<N; i++)
    {
        scanf("%d", &A[i]);
        perform_Bubble_Sort(A,N);
    }
    for(int j=0; j<Q; j++)
    {
        scanf("%d", &X);

        if(Binary_Search(A, N, X))
        {
            printf("found\n");
        }else
        {
            printf("not found\n");
        }
      
    }
    return 0;
}
void Swap_Two_Numbers(unsigned int *ptr1, unsigned int *ptr2)
{
    unsigned int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2  = temp;
}

void perform_Bubble_Sort(int Array[], int Arr_Length)
{
    for(int i=0; i<Arr_Length-1; i++)
    {
        for(int j=0; j<Arr_Length-i-1; j++)
        {
            if(Array[j] > Array[j+1])
            {
                Swap_Two_Numbers(&Array[j],&Array[j+1]);
            }
        }
    }
}

int Binary_Search (int arr[], int size, int value)
{
    int Start_Index =0;
    int End_Index =size-1;

    while(Start_Index <= End_Index)
    {
        int mid = Start_Index + (End_Index-Start_Index)/2;

        if(value==arr[mid])
        return 1;

        if(value > arr[mid])
        Start_Index = mid+1;

        else
        End_Index = mid-1;

    }
    
    return 0;

}