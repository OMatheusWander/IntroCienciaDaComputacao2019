/*
Questão 2.
Crie um programa que solicite duas massas, m1 e m2, em quilos, a distância entre elas, d,
em metros, e a aceleração gravitacional g, em metros por segundo ao quadrado. Exiba na tela a força de
atração entre as massas m1 e m2 considerando o cálculo de força de atração abaixo (1,5 pontos)
(Obrigatória)
Força de atração= g (em m/s2) x m1 (em kg) x m2 (em kg) / d2 (em metros)*/
#include<stdio.h>
    int main() {
    float m1;
    float m2;
    float d;
    float g;
    printf("Qual a massa m1(em quilogramas)?");
        scanf("%f", &m1);
    printf("Qual a massa m2(em quilogramas)?");
        scanf("%f", &m2);
    printf("Qual a distancia entre m1 e m2(em metros)?");
        scanf("%f", &d);
    printf("Qual a gravidade(em metros por segundo ao quadrado)?");
        scanf("%f", &g);
    float Ft = (g * m1 * m2) /  ( d * d ) ;
    printf("A Forca de atracao eh : %.2f J(joules)", Ft);
}

