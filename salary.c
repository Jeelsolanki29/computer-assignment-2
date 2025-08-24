#include <stdio.h>
int main()
{
    printf("To find the net salary for the given two condition ");
    printf("Enter the gross salary : ");
    float gross,a,d,s;
    scanf("%f %f %f",&gross,&a,&d);
    if (gross>10000){
      a=(gross*0.1);
      d=(gross*0.03);
      s=(gross+a)-d;
      printf("The salary is : %f",s);
    }
    else{
     if (gross>5000){
        a=(gross*0.07);
        d=(gross*0.02);
        s=(gross+a)-d;
        printf("The salary is : %f",s);
     }
     else{
        printf("Enter valid salary");
     }
    }
}