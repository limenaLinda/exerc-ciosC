#include <stdio.h>

int main(void) {
  int n;
  scanf("%i",&n);
       for(int i =1;i<=n;i++){
         if(i%2!=0){
    printf("THUMS THUMS THUMS\n");
           }
         if(i%2==0){
    printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
           }
         }
  
  return 0;
}