#include <stdio.h>
int main()
{
    int p,q;
    int sum, sub, mul, mod;
    float div;

    printf("Enter two integers: \n");
    scanf("%d%d", &p, &q);

    sum = p + q;
    sub = p - q;
    mul = p * q;
    mod = p % q;
    div = p / q;

     printf("\n");
    printf("SUM        %d + %d = %d\n", p, q, sum);
    printf("DIFFERENCE %d - %d = %d\n", p, q, sub);
    printf("PRODUCT    %d * %d = %d\n", p, q, mul);
    printf("QUOTIENT   %d / %d = %f\n", p, q, div);
    printf("MODULUS    %d %% %d = %d\n", p, q, mod);

    return 0;

}





