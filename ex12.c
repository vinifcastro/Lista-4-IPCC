#include <stdio.h> 


/**
 * @brief Função que calcula o valor de pi usando a série proposta por John Wallis.
 * 
 * @param n quantidade de termos da série.
 * @return o valor aproximado da constante pi.
 */
double compute_pi(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("%.12lf\n", compute_pi(n));
    return 0;
}

double compute_pi(int n){
    double d, dd, pi;
    int k, i;
    k = 1;
    d = pi = 2;
    dd = 3;
    for (i = 1 ; i < n ; i++){
        pi *= d/dd;
        if (k%2 != 0) d += 2;
        else dd += 2;
        k++;
    }
    return pi*2;
}