#include <stdio.h>
int main(void){
    int num;

    scanf("%d",&num);
    int vetor[num],vetorpar[num],vetorimpar[num];
    int tam_par=0, tam_impar=0;

    int a=0;
    int b=0;


    for(int i =0 ;i<num;i++)
    {
        scanf("%d",&vetor[i]);
        if(vetor[i]%2==0){
            vetorpar[a]=i;
            a++;
            tam_par++;
        }
        if(vetor[i]%2!=0){
            vetorimpar[b]=i;
            b++;
            tam_impar++;
        }
    }
    for(int i =0 ;i<tam_par;i++){
        printf("%d ",vetorpar[i]);
    }
    printf("\n");
    for(int i =0 ;i<tam_impar;i++){
        printf("%d ",vetorimpar[i]);
    }

    return 0 ;
    }
