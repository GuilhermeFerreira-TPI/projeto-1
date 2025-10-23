#include <stdio.h>

int soma(int n1, int n2){
    return n1 + n2;}

int main(){

    int n1, n2;
    int resultado;
    printf("Insira dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
 
    resultado = soma(n1, n2);
    printf("A soma de %d e %d e: %d\n", n1, n2, resultado);
    return 0;
}