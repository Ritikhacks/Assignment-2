#include <stdio.h>
int main()
{
    float INR;
    printf("Enter amount in INR: ");
    scanf("%f",&INR);

    float USD = (1/76.23) * INR;
    printf("Required amount in USD: %f\n",USD);
    return 0;
}