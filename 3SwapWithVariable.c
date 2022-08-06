#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\t");
    scanf("%d%d",&a,&b);

    int temp = b;
    b = a;
    a = temp;
    printf("Swapped numbers are:\t a = %d, b = %d",a,b);
    return 0;
}