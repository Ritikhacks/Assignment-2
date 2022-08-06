#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:\t");
    scanf("%d", &n);

    printf("Unit digit of entered number is:  %d\n", n%10);
    return 0;
}