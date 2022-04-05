#include <stdio.h>

char decodificacao (char *matriz[],int count,char resposta[])
{
    char a,b;
    int i,j;
    
    printf("digite os %d caracteres no formato #(numero)=(vezes) \n",count+1);
        for (int k=0; k<=count; k++){
            scanf(" %c%d%c%d", &a, &i, &b, &j);
            resposta[k]=matriz[i][j];
        }
}

int main ()
{
    int count=0;   
    char *matriz[10] = {"",""," abc"," def"," ghi"," jkl"," mno"," pqrs"," tuv"," wxyz"};

    printf("digite o numero de caracteres a serem decodificador ");
    scanf(" %d",&count);
    count=count-1;
    char resposta[count];

    decodificacao(matriz,count,resposta);

    printf("\n%s",resposta);

return(0);
}
