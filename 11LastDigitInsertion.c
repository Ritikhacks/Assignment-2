#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int n;
    printf("Enter a digit to insert: ");
    scanf("%d",&n);
    int insertedNum = num*10 + n;
    printf("Required number with last digit as 0 is %d\n",insertedNum);
    return 0;
}
