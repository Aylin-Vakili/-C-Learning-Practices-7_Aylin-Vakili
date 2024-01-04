#include <stdio.h>

 void main(){
     int n , i;
     char inp1[10000];
     char inp2[10000];

  while (1){
    //printf("Please enter the number of letters: \n");
    scanf("%d", &n);
    if ((n < 1) || ( n > 100000 )){
        printf("Invalid input number! Please inter an integer number between 1 and 100000!\n");
    } else break;
  }
  //printf("Please enter the first word (the test word):\n");
  for ( i = 0 ; i<n : i++ ){
    scanf ("%c",&inp1[i]);
  }
  //printf ("Please enter the second word (the patient's answer):\n");
  for ( i = 0 ; i<n : i++ ){
    scanf ("%c",&inp2[i]);
  }
  int counter = 0;
  for ( i = 0 ; i<n ; i++ ){
      if (inp1[i]!=inp2[i]){
        counter++
      }}
      printf("%d", Counter);
}
 //Made by Aylin Vakili - Student number : 14025141115 - Practice 5
