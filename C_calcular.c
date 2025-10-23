#include <stdio.h>

int soma(int n1, int n2){
    return n1 + n2;};

int subtrair(int n1, int n2){
    return n1 - n2;};

int multiplicar(int n1, int n2){
    return n1 * n2;};

int main(){

    int n1, n2;
    int resultado;
    printf("Insira dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
 
    printf("A soma de %d e %d e: %d\n", n1, n2,soma(n1, n2));
    printf("A subtracao de %d e %d e: %d\n", n1, n2, subtrair(n1, n2));
    printf("A multiplicacao de %d e %d e: %d\n", n1, n2, multiplicar(n1, n2));
}