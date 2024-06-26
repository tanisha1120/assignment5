#include <stdio.h>

int main(){
  int n,i,sum; 
  printf("Enter the number ");
  scanf("%d",&n);
   
  while(i<=n){
      if(i%2 !=0){
          sum = sum +i;
      }
    i++;
  }
 
  printf("The sum of the numbers is %d",sum);

}
