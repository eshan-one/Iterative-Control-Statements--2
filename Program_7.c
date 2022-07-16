 #include <stdio.h>
int main(){
  
  int x,n;
  printf("Enter the value of n:\n");
  scanf("%d", &n);
  n*=2;
  x=n;
  printf("The First N Even natural numbers in reverse order are:");
  
  while(x>=2){
  printf(" \n%d", x);
  x-=2;
    
  }
  return 0;
