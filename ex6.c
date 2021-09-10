#include <stdio.h>

double r = 1;

/**
 * @brief Função que calcula a raiz quadrada de n.
 * 
 * @param n um numero real qualquer.
 * @return a raiz quadrada de n. 
 */
double raiz(double n);

/**
 * @brief Valor absoluto de um numero qualquer.
 * 
 * @param n n um número real qualquer.
 * @return o valor absoluto de n. 
 */
double absoluto(double n);

int main(){
    double n, epedido, e, raizn;
    scanf("%lf %lf", &n, &epedido);
    while (1){
        raizn = raiz(n);
        e = absoluto (n-(raizn*raizn));
        printf("r: %.9lf, err: %.9lf\n", raizn, e);
        if (epedido >= e) break;
    }
    return 0;
}

double raiz(double n){
    r = (r+(n/r))/2;
    return r;
}

double absoluto(double n){
    if (n<0){
        n *= -1;
    }
    return n;
}