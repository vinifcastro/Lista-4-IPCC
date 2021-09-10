#include <stdio.h>

/**
 * @brief Funcao que calcula o fatorial de um numero n
 * 
 * @param n um numero inteiro positivo
 * @return o fatorial de n
 */
unsigned long int fat (unsigned int n);

int main(){
    unsigned int n;
    scanf("%d", &n);
    printf("%d! = %lu", n, fat(n));
    return 0;
}

unsigned long int fat (unsigned int n){
    unsigned long int fat;
    fat = 1;
    while (n>1){
        fat*=n;
        n--;
    }
    return fat;
}