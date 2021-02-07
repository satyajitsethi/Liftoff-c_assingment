#include <stdio.h>

int main()
{
    int phy,chem,bio,math,comp;
    double per;
    printf("ENTER THE PHYSICS MARKS: ");
scanf("%lf",&phy);
printf("ENTER THE CHEMISTRY MARKS: ");
scanf("%lf",&chem);
printf("ENTER THE BIOLOGY MARKS: ");
scanf("%lf",&bio);
printf("ENTER THE MATHEMATICS MARKS: ");
scanf("%lf",&math);
printf("ENTER THE COMPUTER MARKS: ");
scanf("%lf",&comp);
printf("\n");

    per = (phy+chem+bio+math+comp)/5.0;
    printf("Percentage = %.2f\n", per);

    if(per>= 90)
    {
        printf("Grade A ");
    }
    else if(per>= 80)
    {
        printf("Grade B");
    }
    else if (per>= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per>= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade f");
    }
    return 0;

}



