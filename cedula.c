#include<stdio.h>
int main(){
    int B,T,areaP,areaR,maior,resto;
    scanf("%d %d",&B,&T);
    areaP=((B+T)*70)/2;
    areaR=(70*160)/2;
    resto =areaR-areaP;

    if(resto>areaP){
        printf("1");
    }
    if(resto<areaP){
        printf("2");
    }
    if(resto==areaP){
        printf("0");
    }
    return 0;
}