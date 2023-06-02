#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int code = 0;

void quartos_casal();
void quartos_solteiro();
void menu_de_quartos_solteiro();
void menu_de_quartos_casal();
void menu_de_quartos_escolha();

void menu_de_quartos_escolha() {
    int op1;
    printf("Bom dia, escolha uma das opções abaixo para qual deseja:\n");
    printf("[1] > Quartos De Solteiro\n");
    printf("[2] > Quarto De Casal\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &op1);
    fflush(stdin);

    switch (op1) {
        case 1:
            system("cls");
            menu_de_quartos_solteiro();
            break;
        case 2:
            system("cls");
            menu_de_quartos_casal();
            break;
        default:
            printf("Opção inválida\n");
            system("pause");
            break;
    }
}

void menu_de_quartos_solteiro() {
    int op2;
    printf("Bom dia, escolha uma das opções abaixo para qual deseja:\n");
    printf("[1] > Quarto Completo - (Banheira, TV, Som e frigobar)\n");
    printf("[2] > Quarto Simples - (TV e frigobar)\n");
    printf("<<OBS: Todas as TV são smart>>\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &op2);

    switch (op2) {
        case 1:
            system("cls");
            printf("Você escolheu a opção Quarto Completo\n\n");
            quartos_solteiro();
            menu_de_quartos_solteiro();
            break;
        case 2:
            system("cls");
            printf("Você escolheu a opção Quarto Simples\n\n");
            quartos_solteiro();
            menu_de_quartos_solteiro();
            break;
        default:
            printf("Opção inválida\n");
            system("pause");
            break;
    }
}

void menu_de_quartos_casal() {
    int op;
    printf("Bom dia, escolha uma das opções abaixo para qual deseja:\n");
    printf("[1] > Quarto Completo - (Banheira, TV, Som e frigobar)\n");
    printf("[2] > Quarto Simples - (TV e frigobar)\n");
    printf("[3] > Quarto VIP - (Vista Privilegiada, Estacionamento Exclusivo, Hidromassagem Dupla, Pacote de 'ALL INCLUSIVE' Do Hotel)\n");
    printf("<<OBS: Todas as TV são smart>>\n");
    printf("Escolha uma das opções: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            system("cls");
            printf("Você escolheu a opção Quarto Completo\n\n");
            quartos_casal();
            menu_de_quartos_casal();
            break;
        case 2:
            system("cls");
            printf("Você escolheu a opção Quarto Simples\n\n");
            quartos_casal();
            menu_de_quartos_casal();
            break;
        case 3:
            system("cls");
            printf("Você escolheu a opção Quarto VIP\n\n");
            quartos_casal();
            menu_de_quartos_casal();
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}

void quartos_casal() {
    struct information_double {
        int disponivel_double[50];
    };

    struct information_double information_d[50];
    printf("Escolha qual quarto você deseja para o seu lazer (0-50): ");
    fflush(stdin);
    scanf("%d", &information_d[code].disponivel_double);

	system("cls");
    code++;
}

void quartos_solteiro() {
    struct information_solo {
        int disponivel_solteiro[50];
        int qntd_de_pessoa;
    };

    struct information_solo information_s[50];
    printf("Escolha qual quarto você deseja para o seu lazer (0-50): ");
    fflush(stdin);
    scanf("%d", &information_s[code].disponivel_solteiro);

    printf("Digite a quantidade de pessoas que vão estar no quarto de solteiro: ");
    fflush(stdin);
    scanf("%d", &information_s[code].qntd_de_pessoa);
	
	system("cls");
    code++;
}

int main() {
	
	setlocale(LC_ALL, "portuguese");
    menu_de_quartos_escolha();
    return 0;
}

