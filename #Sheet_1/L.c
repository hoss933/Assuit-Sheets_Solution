#include <stdio.h>
#include <string.h>
#define Data_Max_Size 100
int main()
{
    char F1[Data_Max_Size],S1[Data_Max_Size],F2[Data_Max_Size],S2[Data_Max_Size];
    
    scanf("%s %s",F1,S1);
    scanf("%s %s",F2,S2);
    if(strcmp(S1,S2) == 0)
    {
        printf("ARE Brothers\n");
    }else
    {
        printf("NOT\n");
    }
    return 0;
}