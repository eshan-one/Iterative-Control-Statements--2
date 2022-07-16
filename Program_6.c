#include <stdio.h>
int main(){
  
  int x=2,n;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  n*=2;
  
  printf("The First N Even natural numbers are:");
  
  while(x<=n){
  printf(" \n%d", x);
  x+=2;
    
  }
  return 0;
  }


