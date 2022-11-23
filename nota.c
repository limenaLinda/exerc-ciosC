#include <stdio.h>
int main(){

    int b,t;
    int ret,trap;

    ret=70*160;
    scanf("%d",&b);
    scanf("%d",&t);

    trap=((b+t)*70)/2;

    if(trap>=(ret/2)){
        printf("1\n");
        return 0;
    }
    if(trap==(ret/2)){
        printf("0\n");
         return 0;
    }
     if(trap<=(ret/2)){
        printf("2\n");
         return 0;
    }
    return 0;
}