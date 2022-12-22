#include <stdio.h>
int main (){
    int tamvet,nveri;
    
    scanf("%i\n",&tamvet);
    
    int vetor[tamvet];
    for(int i =0 ; i< tamvet;i++)
    {
        scanf("%i ",&vetor[i]);
    }
    scanf("%i",&nveri);
    for(int i =0 ; i< tamvet;i++){
      if(nveri==vetor[i]){
        printf("pertence");
        break;
      }
      else
        printf("não pertence");
      break;
      }
    
    return 0;
}