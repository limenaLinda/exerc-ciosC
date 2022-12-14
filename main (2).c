#include <stdio.h>

int main() {
  int n, x = 1;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (i > 8 ||  i<0) {
        printf("%d ", i+1);
      }
      else{
        printf("0%d ", i+1);
      }
      // x++;
    }
    printf("\n");
  }
  printf("\n");
   for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      if (j > 8 ||  j<0) {
        printf("%d ", j+1);
        
      }
      else{
        printf("0%d ", j+1);
        
      }
      // x++;
    }
    printf("\n");
  }
  return 0;
}