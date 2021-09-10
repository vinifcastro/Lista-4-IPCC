#include <stdio.h>
#include <math.h>

/**
 * @brief Função que calcula a potencia de p mais próximo a n.
 * 
 * @param n valor inteiro
 * @param p valor da potencia
 * @return retorna o valor da potencia mais proxima. 
 */
int next_power(int n, int p);

int main(){
    int n, p, x;
    scanf("%d %d", &n, &p);
    x = next_power(n,p);
    x = pow(x, p);
    printf("%d -> %d^%d = %d\n", n, next_power(n,p), p, x);
    return 0;
}

int next_power(int n, int p){
    int i, x, z;
    z = x = i = 0;
    for(i=1 ; i <= n ; i++){
        x = pow(i, p);
        if (x < n){
            if (i > z) z = i;
        }
    }
    return z;
}