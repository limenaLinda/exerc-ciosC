#include <stdio.h>
#include <string.h>
int main(){

    char str[20];
    char str1[20];

    scanf("%s", str);
    printf("%s\n %lu\n",str,strlen(str));
    
    strcpy(str1, str);
    printf("%s\n" ,str1);
    return 0;
}
