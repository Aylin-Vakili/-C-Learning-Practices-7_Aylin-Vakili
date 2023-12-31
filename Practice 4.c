#include<stdio.h>

int main()
{
 int temp,a[1000];
 printf("Enter the input numbers:\n");
 int con = 0;
 while (1)
 {
     scanf("%d",&temp);
     if ((temp<0) || (temp>1000)){
        printf("The input numbers should be natural numbers between 0 and 1000\n");
        printf("Enter another number:\n");
        continue;
     }
     if (temp == 0) break;
     a[con++] = temp;
     if (con > 999){
        printf("The maximum number of allowed input numbers is reached.\n");
        break;
     }
 }
 printf("The input numbers in the reversed order are:\n");
 for (int i = con-1; i >= 0; i--){
    printf("%d\n",a[i]);
 }
 return 0;
}
 //Made by Aylin Vakili - Student number : 14025141115 - Practice 4
