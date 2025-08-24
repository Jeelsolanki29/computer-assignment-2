#include <stdio.h>
int main()
{
    int num;
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

