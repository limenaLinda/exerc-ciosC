#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%i %i %i",&a ,&b, &c);

    if (a==b && b==c){
        printf("empate");
        return 0;
    }
    if(a>b && a>c){
        printf("A");
      //  return 0;
    }
    if(c>b && c>a){
        printf("C");
      //  return 0;
    }
    if(b>a && b>c){
        printf("B");
        //return 0;
    }if(a<b && a<c){
        printf("A");
        //return 0;
    }
    if(c<b && c<a){
        printf("C");
      //  return 0;
    }
    if(b<a && b<c){
        printf("B");
       // return 0;
    }


    return 0;
}