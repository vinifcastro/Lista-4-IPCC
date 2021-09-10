#include <stdio.h>
#include <math.h>

/**
 * @brief Função capaz de retornar quantas raízes a equação do segundo grau possui, variando de nenhuma raiz até duas raízes reais.
 * 
 * @param a Fator que multiplica a icógnita que está elevada ao quadrado.
 * @param b Fator que multiplica a icógnita que está elevada ao expoente 1.
 * @param c Fator livre de icógnita.
 * @return Número de raizes reais.
 */
int raizesEq2Grau(double a, double b, double c);

/**
 * @brief Calcula as raizes de uma equação do segundo grau.
 * 
 * @param a Fator que multiplica a icógnita que está elevada ao quadrado.
 * @param b Fator que multiplica a icógnita que está elevada ao expoente 1.
 * @param c Fator livre de icógnita.
 * @param x1 Raiz menor.
 * @param x2 Raiz maior.
 */
void raizesvalor(double a, double b, double c, double * x1, double * x2);

int main(){
    double a, b, c, x1, x2;
    int j;
    scanf("%lf %lf %lf", &a, &b, &c);
    j = raizesEq2Grau(a, b, c);
    raizesvalor(a, b, c, &x1, &x2);
    if (j == 0) printf("RAIZES IMAGINARIAS\n");
    else if (j == 1) printf("RAIZ UNICA\nX1 = %.2lf\n", x1);
    else {
        printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n", x1, x2);
    }
    return 0;
}

int raizesEq2Grau(double a, double b, double c){
    double delta;
    delta = (b*b)-(4*a*c);  
    if (delta == 0) return 1;
    else if (delta > 0) return 2;
    else return 0;
}

void raizesvalor(double a, double b, double c, double * x1, double * x2){
    double delta, temp;
    delta = (b*b)-(4*a*c);
    *x1 = (-b + sqrt(delta))/(2*a);
    *x2 = (-b - sqrt(delta))/(2*a);
    if (*x2 < *x1){
        temp = *x1;
        *x1 = *x2;
        *x2 = temp;
    }
}