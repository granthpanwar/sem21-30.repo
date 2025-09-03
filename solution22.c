//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    float cp;
    float sp;
    float profit=0;
    float loss=0;
    printf("enter cost price");
    scanf("%f",&cp);
    printf("enter selling price");
    scanf("%f",&sp);
    if(cp>sp)
    {
    profit=((sp-cp)/cp)*100;
     printf("the profit percent is %.2f",profit);
    }
    else
    {
    loss=((cp-sp)/cp)*100;
     printf("the profit percent is %.2f",loss);
    }
}