#include <stdio.h>

int main(void){
    int v,i,x,veri;
  
    scanf("%i",&v);

    int vetor[v];

    for(i=0 ; i< v; i++){
        
        scanf("%i",&vetor[i]);
  
      }
  scanf("%i",&x);
  for(int j =0;j<x;j++){
  if(x==vetor[i]){
    veri=0;
  }
}
    if(veri==0){
    printf("pertence");
  
    }
  else{
        printf("não pertence");
  }
    return 0 ;
  }