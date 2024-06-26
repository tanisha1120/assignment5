#include <stdio.h>

int main(){
  int n; 
  printf("Enter the number ");
  scanf("%d",&n);
  
  int i = 1,sum =0;
  while(n >= i ){
      sum = sum + i;
      i++;
      
  }
  printf("The sum of the numbers is %d",sum);

}
