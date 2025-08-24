#include <stdio.h>
int main()
{
    int num;
    printf("To check the divisibility of the given number by 7, enter the number: \n");
    printf("Enter the number: ");
    int n;
    scanf("%d", &n);
    if (n % 7 == 0)
    {
        printf("%d is divisible by 7\n", n);
    }
    else
    {
        printf("%d is not divisible by 7\n", n);
    }
    
}
