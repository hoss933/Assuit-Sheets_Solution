#include<stdio.h>
#include<string.h>

int main() {
    int N, T;
    scanf("%d", &N);
    char str_T[20];

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &T);
        sprintf(str_T, "%d", T);
        int length = strlen(str_T);

        for(int j = length - 1; j >= 0; j--)
        {
            printf("%c", str_T[j]);
            if(j != 0)
            { 
                printf(" "); 
            }
        }
        printf("\n");
    }
  
    return 0;
}
