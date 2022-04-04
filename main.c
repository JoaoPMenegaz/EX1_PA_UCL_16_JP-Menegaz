#include <stdio.h>

char funcao (char *matriz[]){
    char a,b;
    int i,j;
printf("digite o codigo #(numero)=(vezes) ");
scanf(" %c%d%c%d", &a, &i, &b, &j);
printf("a letra foi %c\n",matriz[i][j]);

return matriz[i][j];
}



int main (){
    
char *matriz[10] = {"",""," abc"," def"," ghi"," jkl"," mno"," pqrs"," tuv"," wxyz"};

while(1){
funcao(matriz);
}

return(0);
}