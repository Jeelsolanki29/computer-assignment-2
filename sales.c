#include <stdio.h>
int main()
{
    printf("Enter the gross sales : ");
    int g,d,n;
    scanf("%d %d",&g,&d);
    if (g>20000){
        d=g*0.15;
        n=g-d;
        printf("The net sales is : %d",n);
    }
    else{
        if (g>10000){
            d=g*0.1;
            n=g-d;
            printf("The net sales is : %d",n);
        }
        else{
            d=g*0.05;
            n=g-d;
            printf("The net sales is : %d",n);
        }
    }
    return 0;

}
