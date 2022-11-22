
#include<stdio.h>
int main(){
    int B,T,areaP,areaR,metadearear;
    scanf("%d\n ",&B);
    scanf("%d",&T);
    // para 130 e 138 = 9380
    areaP=((B+T)*70)/2;
    //area=5.600
    areaR=(70*160)/2;
    //2800
    metadearear=areaR/2;
    //
    //resto =areaR-areaP;

    if(areaR-areaP>metadearear){
        if(areaR>areaP){
         printf("2\n");
         return 0;
        }
    }
    if(areaP-areaR>metadearear){
        if(areaP>areaR){
         printf("1\n");
         return 0;
        }
    }
    if(areaP-areaR<metadearear){
        printf("0\n");
        return 0;
    }

    if(areaR-areaP<metadearear){
        printf("0\n");
        return 0;
    }
    return 0;
}