#include <stdio.h>

int main(void) {
  char str[1000];
  int tam=0;
  int i;
  scanf("%s",str);

  i=0;
  while(str[i]!='\0'){
    i++;
    tam ++;
  }
  for(int j =tam;j>=0;j--){
    printf("%c",str[j]);
  }
  
  return 0;
}