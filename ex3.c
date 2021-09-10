#include <stdio.h>

/**
 * @brief Essa função é capaz de separar os digitos de um número n.
 * 
 * @param g Número que será dividido em dígitos.
 * @param d1 Digito da Centena.
 * @param d2 Digito da Dezena.
 * @param d3 Digito da Unidade.
 */
void separaDigitos(int g, int * d1, int * d2, int * d3);

/**
 * @brief Função que cria um número invertido a partir de cada dígito.
 * 
 * @param a dígito da unidade.
 * @param b dígito da dezena.
 * @param c dígito da centena.
 * @param z é o ponteiro que ira armazenar o novo valor de n, no endereço de n.
 * @return Retorna o número invertido.
 */
int numeroInvertido(int a, int b, int c);

int main(){
    int n, d1, d2, d3;
    scanf("%d", &n);
    separaDigitos(n, &d1, &d2, &d3);
    printf("%d\n", numeroInvertido(d1, d2, d3));
    return 0;
}

void separaDigitos(int g, int * d1, int * d2, int * d3){
    *d1 = g/100;
    *d2 = (g%100)/10;
    *d3 = g%10;
}

int numeroInvertido(int a, int b, int c){
    int z;
    z = c*100 + b*10 + a;
    return z;
}