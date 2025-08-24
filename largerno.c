#include <stdio.h>
int main()
{
    printf("To find the largest and smallest among the numbers \n");
    printf("Enter the two numbers : ");
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("The largest number is : %d\n",a);
        printf("The smallest number is : %d\n",b);
    }
    else
    {
        printf("The largest number is : %d\n",b);
        printf("The smallest number is : %d\n",a);
    }
    
}