#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100000];
    int tam=0 ,i;

    
    scanf("%s",palavra);

    i = 0;
    while(palavra[i] != '\0')
    {
        i++;
        tam ++;
    }
    printf("\n %d", tam);
}