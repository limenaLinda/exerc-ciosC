#include <stdio.h>

int main(){

    int n1, n2, n3, n4;
    scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

    if(n1>=n2 && n1>=n3 && n1>=n4){
        printf("%i",n1);
        return 0;
    }
    if(n2>=n1 && n2>=n3 && n2>=n4){
        printf("%i",n2);
        return 0;
    }

    if(n3>=n2 && n3>=n1 && n3>=n4){
        printf("%i",n3);
        return 0;
    }

    if(n4>=n2 && n4>=n3 && n4>=n1){
        printf("%i",n4);
    }

    return 0 ;
}