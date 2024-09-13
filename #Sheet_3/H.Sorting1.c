#include<stdio.h>
#include<string.h>

void perform_Insertion_Sorting(int My_Array[], int Array_len);

int main()
{
    int N,i=0;
    scanf("%d",&N);
    int A[N];
    
    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }

    perform_Insertion_Sorting(A,N);
    
    for(int j=0; j<N; j++)
    {
        printf("%d ",A[j]);
    }
    return 0;
}
void perform_Insertion_Sorting(int My_Array[], int Array_len)
{
    int IS_Iterator=0, Compare_Item_Index=0;
    int inserted_Item=0;
    
    for(IS_Iterator=1; IS_Iterator<Array_len; IS_Iterator++)
    {
        inserted_Item = My_Array[IS_Iterator];
        Compare_Item_Index = IS_Iterator-1;

        while(inserted_Item < My_Array[Compare_Item_Index] && Compare_Item_Index >=0)
        {
            My_Array[Compare_Item_Index+1] = My_Array[Compare_Item_Index];
            Compare_Item_Index--;
        }
        My_Array[Compare_Item_Index+1]=inserted_Item;
    }
}