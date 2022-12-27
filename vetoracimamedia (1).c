#include <stdio.h>

int main(void) {
  int tamvetor,media;
  int soma=0;

  scanf("%i",&tamvetor);
  int vetor[tamvetor];
  for(int i =0;i<tamvetor;i++){
    scanf("%i",&vetor[i]);
    soma=soma+vetor[i];
  }
  media=soma/tamvetor;
  for(int j =0;j<tamvetor;j++){
    if(vetor[j]>media){
      printf("%i ",vetor[j]);
    }
  }
  return 0;
}