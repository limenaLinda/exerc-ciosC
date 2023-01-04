#include <stdio.h>
#include <string.h>
int main(){

    char frase[10000];
    char palavra1[40];
    char palavra2[40];
    
    scanf("%[^\n]",frase);
    scanf("%s",palavra1);
    scanf("%s",palavra2);
    
    int tamanho =strlen(frase);
    int inicio[10000];
    inicio[0]=0;
    int b=1;
    int aux=0;
    for(int i =0 ; i < tamanho; i++){
        if(frase[i]==palavra1[0]){
            for(int a=1; a < strlen(palavra1); a++){
                if (frase[i+a] == palavra1[a])
                aux++;
            }
            if(aux == strlen(palavra1)-1)
                inicio[b] = i;
                b++;
                aux=0;
        }
    }
    inicio[b+1] = tamanho;

    for (int i=0; i < b+1; i++){
        printf("%d", inicio[i]);
    }
    return 0;
}