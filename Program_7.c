#include <stdio.h>
int main(){
  
  int x=1,n,c;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  
  
  printf("The squares of the first n numbers in reverse order are:");
  
  while(x<=n){
    c = x*x;
  printf(" \n%d", c);
  x++;
    
  }
  return 0;
  }
