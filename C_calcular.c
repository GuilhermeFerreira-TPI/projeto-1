#include <stdio.h>

float soma(float n1, float n2){
    return n1 + n2;};

float subtrair(float n1,float n2){
    return n1 - n2;};

float multiplicar(float n1, float n2){
    return n1 * n2;};

float dividir(float n1, float n2){
    if (n2 != 0){
        return n1 / n2;} 
    else{
        printf("Erro: Divisao por zero!\n");
        return 0;}}

int main(){

    float n1, n2;
    printf("Insira dois numeros inteiros: ");
    scanf("%f %f", &n1, &n2);
 
    printf("A soma de %.2f e %.2f e: %.2f\n", n1, n2, soma(n1, n2));
    printf("A subtracao de %.2f e %.2f e: %.2f\n", n1, n2, subtrair(n1, n2));
    printf("A multiplicacao de %.2f e %.2f e: %.2f\n", n1, n2, multiplicar(n1, n2));
    printf("A divisao de %.2f e %.2f e: %.2f\n", n1, n2, dividir(n1, n2));
}