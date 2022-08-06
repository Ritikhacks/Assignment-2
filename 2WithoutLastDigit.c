#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:\t");
    scanf("%d",&n);

    printf("Required number without its last digit is: %d",n/10);
    return 0;
}