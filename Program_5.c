#include <stdio.h>
int main(){
  
  int x,n;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  n*=2;
  x=(n-1);
  printf("The First N odd natural numbers in reverse order are:");
  
  while(x>=1){
  printf(" \n%d", x);
  x-=2;
    
  }
  return 0;
  }
