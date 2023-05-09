#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,sum;
    double temp= 0.0;
    double power = 0.5;
    double p= 0.0,area = 0.0;
    printf("enter the first side of traingle:");
    scanf("%lf",&a);
    printf("enter the second side of traingle:");
    scanf("%lf",&b);
    printf("enter the third side of traingle:");
    scanf("%lf",&c);

    if (a+b >= c && b+c >= a && a+c>=b);
    {
             p = (a+b+c)/2;
            temp = p*(p-a)*(p-b)*(p-c);
            printf("temp = %lf",temp);
            area = pow(temp , power);
            printf("area = %lf",area);
    }
    return 0;

}
