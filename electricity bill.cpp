#include<stdio.h>
#include<stdlib.h>

int main()
{
    float unit;
    float total;
    float sum;
    int i;
    printf("enter the number of units:");
    scanf("%f",&unit);
    if (unit <= 20)
    {
        total = 80;
        
    }
    else if (unit <= 80 && unit>20)
    {
        unit = unit - 20;
        total = 80 + (unit *7.5);
        
    }
     else if (unit <=100 && unit>80)
    {
        unit = unit - (20 + 80);
        total = 80 +(80 * 7.5) + (unit * 8.5);
    }
    else
    {
        unit = unit - (20+80+100);
        total = 80 + (80 *7.5)+(100*8.5) + ( unit * 9.5);
    }
    
    printf("\n sum = %f",total);

    sum = total + total *15/100;

    printf("\namount with 15% TAX is:%f",sum);
    
    return 0;
    
}
