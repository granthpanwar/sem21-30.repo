//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() 
{
    int n, prd= 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2, count = 0; count < n; i += 2)
    {
        prd = prd*i; 
        count++;  
    }

    printf("The product of the first %.2d even numbers is: %.2d\n", n, prd);

    return 0;
}