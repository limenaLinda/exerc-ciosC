#include <stdio.h>

int main(){

    int escolhaparticipanteA,n1j1,n2j1,escolhapC, n1j2,n2j2,escolhapAB,n1j3,n2j3,soma;
    char v1,v2,v3;
    char pa='A';
    char pb= 'B';
    char pc ='C';
    char pd = 'D';


    scanf("%i %i %i",&escolhaparticipanteA, &n1j1,  &n2j1);
    scanf("%i %i %i",&escolhapC, &n1j2,  &n2j2);
    scanf("%i %i %i",&escolhapAB, &n1j3,  &n2j3);

    soma= n1j1+n2j1;
    if((soma%2 )!= 0){
        if(escolhaparticipanteA==1){
            v1=pa;
        } else {
            v1=pb;
        }
    } else{
        if(escolhaparticipanteA==1){
            v1= pb;
        } else {
            v1= pa;
        }
    }
    soma=n1j2+n2j2;
     if((soma%2 )!= 0){
        if(escolhapC==1){
            v2= pc;
        } else {
            v2= pd;
        }
    } else{
        if(escolhapC==1){
            v2= pd;
        } else {
            v2= pc;
        }
    }


    //printf("%c %c\n", v1, v2);

    //return 0;

    soma= n1j3+n2j3;
    if((soma%2 )!= 0){
        if(escolhapAB==1){
            v3=v1;
        } else {
            v3=v2;
        }
    }else{
        if(escolhapAB==1)
        v3=v2;
        else{
            v3=v1;
        }
    }

    //printf("%c %c %c\n", v1, v2,v3);
    printf("%c\n",v3);
    
    return 0 ;
}