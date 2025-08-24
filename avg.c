#include <stdio.h>
int main()
{
    printf("To find the average marks of the three subjects \n");
    printf("Enter the marks of three subjects :");
    float p,c,m,s;
    scanf("%f %f %f",&p,&c,&m);
    s=(p+c+m)/3;
    printf("Average marks is : %f\n",s);
}