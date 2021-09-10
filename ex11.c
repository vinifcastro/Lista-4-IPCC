#include <stdio.h>

/**
 * @brief Função capaz de calcular a quantidade de notas de 100, 50, 10 e moedas de 1, para formar um valor n em reais.
 * 
 * @param n Valor em reais.
 * @param ncem QTD Notas de 100;
 * @param ncinq QTD Notas de 50.
 * @param ndez QTD Notas de 10.
 * @param m QTD Moedas de 1.
 */
void converteEmNotasMoedas(int n, int * ncem, int * ncinq, int * ndez, int *m);

int main(){
    int n, ncem, ncinq, ndez, m;
    scanf("%d", &n);
    converteEmNotasMoedas(n, &ncem, &ncinq, &ndez, &m);
    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", ncem, ncinq, ndez, m);
    return 0;
}

void converteEmNotasMoedas(int n, int * ncem, int * ncinq, int * ndez, int *m){ 
    *ncem = n/100;
    *ncinq = (n%100)/50;
    *ndez = ((n%100)%50)/10;
    *m = ((n%100)%50)%10;
}