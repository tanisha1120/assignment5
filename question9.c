#include <stdio.h>

int main(){
  int number,i=1; 
  printf("Enter the number ");
  scanf("%d",&number);
   
  while(i<=10){
      printf("%d x %d = %d \n",number,i,number*i);
      i++;
  }
 
}
