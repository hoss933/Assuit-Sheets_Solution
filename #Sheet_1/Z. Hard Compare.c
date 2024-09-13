#include <stdio.h>
#include<math.h>

int main()
{
    unsigned long long A,B,C,D;
    scanf("%llu %llu %llu %llu",&A,&B,&C,&D);

    double Left_Side = (B * log(A));
    double Right_Side = (D * log(C));
    if(Left_Side > Right_Side) 
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    return 0;
}