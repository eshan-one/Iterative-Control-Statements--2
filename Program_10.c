#include <stdio.h>
int main(){
  
  int x=0,n,c;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  
  c=n*10;
  
  printf("The table of n numbers is as follows:");
  
  while(x<c){
  x+=n; 
  printf(" \n%d", x);
  
    
    
  }
  return 0;
  }
  
