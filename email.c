#include <stdio.h>

int main(void) {
  int m,n,i,y=0,tam=0,x;
  int tamgeral=0;
  int j =0;
  int tabela [10000];
  char nometodo [10000];
  char primeironome[1000];
  char ultimonome[1000];
    
  scanf("%[^\n]s",nometodo);
  //tabela ascii ,numeors maisculos sao de 65 a 90 e os correspondentes de 97 a 122
  // vou pedir como double e mostrar como char
   i =0;
  while(nometodo[i]!='\0'){
    tabela[i]=nometodo[i];
    if(tabela[i]>=65 && tabela[i]<=90){
      tabela[i]=tabela[i]+32;
      
    }
      i++;
  }
  
     i =0;
    while(nometodo[i]!='\0')
    {
        if(nometodo[i]== ' '){
            for(int j=0;j<i;j++){
              
              primeironome[j]=tabela[j];
              
              printf("%c",tabela[j]);
            }
  break;
        }
      i++;
    }
  m= 0;
    while(nometodo[m] != '\0')
    {
        m++;
        tam ++;
    }
   tamgeral=tam;
   for(int n =tam;n>0;n--){
      if(nometodo[n]== ' '){
          x=n;
        for(int j=tam;j>n;j--){
           
          ultimonome[y]=tabela[x+1];
              
           printf("%c",ultimonome[y]);
        x++;
          y++;
            }
        break;
        }
    }
  printf("@unb.br");
  return 0;
}