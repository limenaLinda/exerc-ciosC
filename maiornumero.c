#include <stdio.h>
#include <limits.h>

int main(void) {
  int x,num;
  int menor=INT_MIN;
  scanf("%i",&x);

  for(int i =0;i<x;i++){
    scanf("%i",&num);
  if(num>menor){
    menor=num;
  }
  }
    printf("%i",menor);
  return 0;
}