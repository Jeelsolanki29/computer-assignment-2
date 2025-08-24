#include <stdio.h>
int main ()
{
    
    printf("Enter the marks of the three subjects : ");
    float m1,m2,m3;
    scanf("%f %f %f",&m1,&m2,&m3);
    float avg;
    avg=(m1+m2+m3)/3;
    printf("The average marks is : %f",avg);
    if (avg>=70){
        printf("The student is in distinction. \n");

    }
    else{
        if (avg>=60){
            printf("The student is in first class. \n");
        }
        else{
            if (avg>=50){
                printf("The student is in second class. \n");
            }
            else{
                if (avg>=35){
                    printf("The student is in third class. \n");

                }
                else{
                    printf("The student is in fail. \n");
                }
                return 0;
            }   
        }
    }
    return 0;

}   
