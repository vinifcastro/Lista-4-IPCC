#include <stdio.h>

/**
 * @brief Função capaz de printar o endereço de cada byte de cada variável.
 * 
 * @param end_byte Ponteiro que aponta cada endereço.
 * @param n Variável a ser destrinchada byte a byte.
 */
void print_bytes (const void * end_byte, int n);


/**
 * @brief Armazena o valor de n em variáveis diferentes.
 * 
 * @param n Número real com dupla precisão.
 * @param a Armazena n em unsigned char.
 * @param b Armazena n em unsigned short.
 * @param c Armazena n em unsigned int.
 * @param d Armazena n em float.
 * @param e Armazena n em double.
 */
void convert(double n, unsigned char * a, unsigned short * b, unsigned int * c, float * d, double * e);

int main(){
    double n, nd;
    float nf;
    unsigned char nuc;
    unsigned short nus;
    unsigned int nui;
    scanf("%lf", &n);
    convert(n, &nuc, &nus, &nui, &nf, &nd);
    print_bytes(&nuc, sizeof(unsigned char));
    print_bytes(&nus, sizeof(unsigned short));
    print_bytes(&nui, sizeof(unsigned int));
    print_bytes(&nf, sizeof(float));
    print_bytes(&nd, sizeof(double));
    return 0;
}

void print_bytes(const void * end_byte, int n){
    int i;
    char * z = (char *) end_byte;
    unsigned char l;
    for (i=0; i<n; i++){
        l = *z;
        printf("%d,", l);
        z++;
    }
    printf("\n");
}


void convert(double n, unsigned char * a, unsigned short * b, unsigned int * c, float * d, double * e){
    *a = n;
    *b = n;
    *c = n;
    *d = n;
    *e = n;
}