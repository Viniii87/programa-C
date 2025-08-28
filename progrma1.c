#include <stdio.h>

int main(void) {
    float peso, altura, imc;

    printf("Digite o peso em KG (ex: 70.5): ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    if (peso <= 0 || altura <= 0) {
        printf("Peso e altura com valores inválidos!n");
        return 1;
    }

    imc = peso / (altura * altura);

    printf("\nSeu IMC é: %.2f\n", imc);zzzzzzzzzzzzzzzzzzzzz
    printf("Classificação: ");

    if (imc < 18.5) {
        printf("\033[34mAbaixo do peso\033[0m\n"); 
    } else if (imc < 25.0) {
        printf("\033[32mPeso Normal\033[0m\n");  
    } else if (imc < 30.0) {
        printf("\033[33mSobrepeso\033[0m\n");    
    } else if (imc < 35.0) {
        printf("\033[35mObesidade Grau I\033[0m\n");
    } else if (imc < 40.0) {
        printf("\033[36mobesidade Gray II (Severa)\033[0m\n"); 
    } else {
        printf("\033[31mobesidade Grau III (mórbida)\033[0m \n");
    }

    return 0;
}