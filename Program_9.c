
#include <stdio.h>
int main(){
  
  int x=1,n,c;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  
  
  printf("The cubes of the first n numbers are:");
  
  while(x<=n){
    c = x*x*x;
  printf(" \n%d", c);
  x++;
    
  }
  return 0;
  }


