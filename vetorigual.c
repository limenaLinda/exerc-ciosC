#include <stdio.h>
int main (){
    int tamvet;
    
    scanf("%i",&tamvet);
    int vetorx[tamvet];
    int vetory[tamvet];
    
    for(int i =0 ; i< tamvet;i++)
    {
        scanf("%i ",&vetorx[i]);
    }
    for(int i =0 ; i< tamvet;i++)
    {
        scanf("%i ",&vetory[i]);
    }
    for(int i =0 ; i< tamvet;i++){
      if(vetory[i]!=vetorx[i]){
        printf("nao");
        return 0;
        }
      else
        printf("sim");
      return 0;
      }
      
    
    return 0;
}