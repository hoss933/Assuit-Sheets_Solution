#include <stdio.h>
#include <math.h>
int  main()
{
    int A,B;
    scanf("%i %i",&A,&B);
    printf("floor %d / %d = %.0lf\n", A, B, floor((double)A/B));
    printf("ceil %d / %d = %.0lf\n", A, B, ceil((double)A/B));
    printf("round %d / %d = %.0lf\n", A, B, round((double)A/B));
    return 0;
}