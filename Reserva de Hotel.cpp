#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>


struct Cliente {
	int id;
	char nome[50];
	int CPF;
	int telefone;
	bool cadastrado;
}cliente[100];



struct Quarto{
	
    int id;
    bool disponiveis;
    char classe[9];
    int valor;
    char status[10]; 
    int valorF;
	    
 }quartos[10];

struct reservar{
	
	int idReserva;
	char classe[10];
	char nome[10];
	int dias;
	int valorF;
	
}reservas[100];

int contResevas = 0;
int contQuartos = 0;
int contador = 0;

void head(), cadastraCliente(), listaCliente(); 
int menu();




int main() {
	
	setlocale(LC_ALL, "Portuguese");

		
	int escolha;	
	
	do {
		head();
		
		escolha = menu();
		
		system("cls");
	} while(escolha);
	
	return 0;
}

void head() {
	
	printf("\t\t\tSistema de Reserva de Hotel");
	
}

int menu() { 
	
	int escolha;
	
	head();
	
	do{
		system("cls");
		
		printf("\n\n--- MENU --\n"); 
		printf("1 - Cadastrar Cliente\n");
		printf("2 - Buscar Cliente\n");
		printf("3 - Sair do Sistema\n");
		printf("Escolha uma opção: ");
		scanf("%d", &escolha); 
		
		system("cls");

			
		system("cls");

	
		switch(escolha) {
			case 1:
				printf("--- CADASTRAR Cliente --\n"); 
				
				cadastraCliente();
				system("pause");
				
				break;
			case 2:
				printf("--- Lista de Cliente --\n"); 
				
				
				listaCliente();
				system("pause");
				
				
				
				break;
			case 3:
				printf("Sistema encerrado.\n");
				system("pause");
				
				break;
			default:
				printf("Opção inválida.\n");
		}

	}while(escolha != 3);
	
	return 0;

}

void cadastraCliente() {
	
	
	fflush(stdin);
	printf("Informe o nome do cliente: ");
	gets(cliente[contador].nome);
	
	fflush(stdin);
	printf("\nCPF: ");
	scanf("%d", &cliente[contador].CPF);

	fflush(stdin);
	printf("\nNúmero de telefone: ");
	scanf("%d", &cliente[contador].telefone);
	
	cliente[contador].id = contador;
	
	contador++;
	
	printf("\nCadastro realizado com sucesso!!!\n\n");	
}

void listaCliente(){
	char opcao;
	int codCliente;
	
	for(int i = 0; i < contador; i++){
		printf("%d - %s\n", cliente[i].id, cliente[i].nome);
	}
	
	fflush(stdin);
	printf("Deseja obter mais detalhes? (s/n): ");
	scanf("%c", &opcao);
	
	system("cls");
	
	if(toupper(opcao) == 'S') {
		for(int i = 0; i < contador; i++){
		printf("%d - %s\n", cliente[i].id, cliente[i].nome);
		}
		
		printf("\nInforme o código do cliente: ");
		scanf("%d", &codCliente);
		
		system("cls");
		
		printf("%s\n",cliente[codCliente].nome);
		printf("CPF: %d", cliente[codCliente].CPF);
		printf("\nTelefone: %d\n", cliente[codCliente].telefone);
		
				
	}
}



