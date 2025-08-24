#include <stdio.h>
int main()
{
   printf("To find the largest and Smallest of three numbers:\n");
   printf("Enter three numbers: ");
   int n1,n2,n3;
   scanf("%d %d %d",&n1,&n2,&n3);
   if ((n1<n2) && (n1<n3)){
    printf("The smallest number is  %d\n",n1);

   }
   else {
    if ((n2<n1) && (n2<n3)){
        printf("The smallest number is  %d\n",n2);
    }
    else {
        printf("The smallest number is  %d\n",n3);
    }
   }
   if ((n1>n2) && (n1>n3)){
       printf("The largest number is  %d\n",n1);
   }
   else {
       if ((n2>n1) && (n2>n3)){
           printf("The largest number is  %d\n",n2);
       }
       else {
           printf("The largest number is  %d\n",n3);
       }
   }
   return 0;
}