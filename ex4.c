#include <stdio.h>

/**
 * @brief Função capaz de realizar a soma dos divisores de um número n e printar em forma de soma eles.
 * 
 * @param n valor a ser encontrado a soma dos divisores.
 * @return retorna a soma dos divisores.
 */
int somaDivisores(int n);

int main(){
    int n, soma;
    scanf("%d", &n);
    printf("%d = ", n);
    soma = somaDivisores(n);
    printf(" = %d", soma);
    if(soma == n) printf(" (NUMERO PERFEITO)\n");
    else printf(" (NUMERO NAO E PERFEITO)\n");
    return 0;
}

int somaDivisores(int n){
    int soma, i;
    i = 1;
    soma = 0;
    for (i = 1; i<n; i++){
        if (n%i == 0 ){
            if (i != 1) printf(" + ");
            n/i;
            soma+= i;
            printf("%d", i);
        }
    }
    return soma;
}