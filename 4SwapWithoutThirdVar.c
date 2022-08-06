#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    a = a + b;
    b = a - b; // a + b - b = a
    a = a - b; // (a+b)-((a+b)-b) = b
    printf("Swapped value is:\na = %d \t b = %d\n",a,b);
}