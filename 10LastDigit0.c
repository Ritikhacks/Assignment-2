#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:\t");
    scanf("%d",&n);
    int last0 = (n/10)*10 + 0;
    printf("Required number with last digit as 0 is %d\n",last0);
    return 0;
}