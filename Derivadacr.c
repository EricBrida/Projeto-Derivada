#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Eric Bueno Corrêa Brida
// Kaue Eduardo Frezzato
// João Victor de Araújo Martins
// Rubia Vitoria Moreira
// Rogério Augusto

//Calculadora Derivadas

int menu, resp;
float x, k;

void menu1(){

    menu1:

    system("cls || clear");

    printf("Digite o valor de k para a construção da função desejada: \n");
    scanf("%f", &k);

    printf("Digite o valor de x desejado: \n");
    scanf("%f", &x);

    printf("\n\n\nO valor da derivada para a função e valor escolhido eh: %.4f\n\n\n", k * pow(x, k - 1));

    system("pause");

    system("cls || clear");

}

void menu2(){

    menu2:

    system("cls || clear");

    printf("Digite o valor de k para a construção da função desejada: \n");
    scanf("%f", &k);

    if(k == 1 || x == 0){

        printf("Não é possível realizar esta conta");

        goto menu2:

    }

    printf("Digite o valor de x desejado: \n");
    scanf("%f", &x);

    printf("\n\n\nO valor da derivada para a função e valor escolhido eh: %.4f\n\n\n", 1 / (x * log(k)));

    system("pause");

    system("cls || clear");

}

void menu3(){

    menu3:

    system("cls || clear");

    printf("Digite o valor de k para a construção da função desejada: \n");
    scanf("%f", &k);

    if(k == 1){

        printf("Não é possível realizar este cálculo");

        goto menu3;

    }

    printf("Digite o valor de x desejado: \n");
    scanf("%f", &x);

    printf("\n\n\nO valor da derivada para a função e valor escolhido eh: %.4f\n\n\n", pow(k, x) * log(k));

    system("pause");

    system("cls || clear");

}

void menu4(){

    menu4:

    system("cls || clear");

    printf("Digite o valor de x desejado: \n");
    scanf("%f", &x);

    if(cos(x) > -1e-5 && cos(x) < 1e-5){

       printf("Impossivel calcular a divisao com cosseno de 90 ou Pi/2... \n");

       system("pause");

       goto menu4;

    }

    x = 1 / cos (x);

    printf("\n\n\nO valor da derivada para a função e valor escolhido eh: %.4f\n\n\n", pow(x, 2));

    system("pause");

    system("cls || clear");

}

int main(){

 setlocale(LC_ALL, "Portuguese");

 menu:

 system("cls || clear");

 printf("MENU \n\n");

 printf("1- f(x) = x^k\n");
 printf("2- f(x) = log_k(x)\n");
 printf("3- f(x) = k^x\n");
 printf("4- f(x) = tg(x)\n");
 printf("5- SAIR\n");
 scanf("%d", &menu);

    switch(menu){

    case 1:
        menu1();

        printf("Deseja continuar calculando?? SIM (1) || NAO (0)\n");
        scanf("%d", &resp);

        if(resp == 1){

        goto menu;

        }

        return 0;
        break;

    case 2:
        menu2();

        printf("Deseja continuar calculando?? SIM (1) || NAO (0)\n");
        scanf("%d", &resp);

        if(resp == 1){

        goto menu;

        }

        return 0;
        break;

    case 3:
        menu3();

        printf("Deseja continuar calculando?? SIM (1) || NAO (0)\n");
        scanf("%d", &resp);

        if(resp == 1){

        goto menu;

        }

        return 0;
        break;

    case 4:
        menu4();

        printf("Deseja continuar calculando?? SIM (1) || NAO (0)\n");
        scanf("%d", &resp);

        if(resp == 1){

        goto menu;

        }

        return 0;
        break;

    default:
        break;

    }

}
