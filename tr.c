#include <stdio.h>

int main(void){
    int v,i,x;
    int menor =1000;

    scanf("%i",&v);

    int vetor[v];

    for(i=0 ; i< v; i++){
        
        scanf("%i",&vetor[i]);

         if(vetor[i]<menor)
        {
            menor=vetor[i];
           
        }
    }
    for(i=0 ; i< v; i++)
    {
        if(vetor[i]==menor)
        break;
    }
    printf("%d\n",i);
    return 0 ;
}