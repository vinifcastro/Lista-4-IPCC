#include <stdio.h>

/**
 * @brief Retorna o n-ésimo termo da sequência de Fibonacci
 * 
 * @param t1 primeiro termo da sequência
 * @param t2 segundo termo da sequência
 * @param n a posição do termo desejado da sequência6
 * @return o valor do n-ésimo termo da sequência
 */
int fibonacci(int t1, int t2, int n);

int main(){
    int t1, t2, n;
    scanf("%d %d %d", &t1, &t2, &n);
    printf("%d", fibonacci(t1, t2, n));
    return 0;
}

int fibonacci(int t1, int t2, int n){
    int fibo, i;
    if (n == 1) fibo = t1;
    if (n == 2) fibo = t2;
    else{
        for (i=3; i<=n; i++){
            fibo = t1 + t2;
            if (i%2 == 0) t2 = fibo;
            else t1 = fibo;
        }
    }
    return fibo;
}