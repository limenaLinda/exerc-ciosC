#include <stdio.h>
int main (){
    
    int tamvetor;
    
    scanf("%i",&tamvetor);
    
    int vetorx[tamvetor];
    int vetory[tamvetor];
    int vetorz[tamvetor];
    int i=0;
    int j=0;
    for(int i =0 ; i< tamvetor ; i++)
    {
        scanf("%i",&vetorx[i]);
    }
    printf("\n");
    for(int j =0 ; j< tamvetor ; j++)
    {
        scanf("%i",&vetory[j]);
    }
    for(int z =0 ;z<tamvetor;z++){
        vetorz[z]=vetorx[i] + vetory[j];
    i++;
    j++;
    printf("%i ",vetorz[z]);
     
    }
    
    return 0;
}