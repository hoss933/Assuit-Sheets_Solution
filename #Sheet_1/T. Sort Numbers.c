#include<stdio.h>

int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int orgA = A;
    int orgB = B;
    int orgC = C;

    if(A > B)
    {
        int temp = A; // swap
        A = B;
        B = temp;
    }
    if(A > C)
    {
        int temp = A;
        A = C;
        C = temp;
    }
    if(B > C)
    {
        int temp = B;
        B = C;
        C = temp;
    }
    // printf the ascending data
    printf("%d\n%d\n%d\n",A,B,C);
   //blank line
    printf("\n");
   // orignal values
    printf("%d\n%d\n%d\n",orgA,orgB,orgC);

    return 0;
}