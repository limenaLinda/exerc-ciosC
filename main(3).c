#include <stdio.h>
#include <limits.h>

int main(void){
    int v,i,segundomenor;
    int menor =INT_MAX;
    int primeiromenor,terceiromenor;

    scanf("%i",&v);

    int vetor[v];

    for(i=0 ; i< v; i++){
        
        scanf("%i",&vetor[i]);

         if(vetor[i]<menor)
        {
            menor=vetor[i];
            primeiromenor = menor; 
        }
    }
    menor = INT_MAX;
    for(i = 0; i< v;i++)
    {
        if(vetor[i]<menor && vetor[i]>primeiromenor)
        {
            menor=vetor[i];
            segundomenor = menor; 
        }
    }
    menor = INT_MAX;
    for(i = 0; i< v;i++)
    {
        if(vetor[i]<menor && vetor[i]>primeiromenor && vetor[i]> segundomenor)
        {
            menor=vetor[i];
            terceiromenor = menor; 
        }
    }
    
    printf("%d\n%d\n",segundomenor, terceiromenor);
    return 0 ;
}