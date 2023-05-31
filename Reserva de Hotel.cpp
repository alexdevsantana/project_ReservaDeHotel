#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>


struct Cliente {
	char nome[50];
	char CPF[14];
	int dias;
	
	
};

int contador = 0;

void head(), cadastra(Cliente *cliente), lista(Cliente *cliente); 
int menu(Cliente *cliente);




int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int escolha;
	
	Cliente *cliente = (Cliente *) malloc(3*sizeof(Cliente));
	
	do {
		head();
		
		escolha = menu(cliente);
		
		system("cls");
	} while(escolha);
	
	return 0;
}

void head() {
	
	printf("\t\t\tSistema de Reserva de Hotel");
	
}

int menu(Cliente *cliente) { 
	
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
				
				cadastra(cliente);
				system("pause");
				
				break;
			case 2:
				printf("--- Lista de Cliente --\n"); 
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

void cadastra(Cliente *cliente) {
	
	
	fflush(stdin);
	printf("Informe o nome do cliente: ");
	gets(cliente[contador].nome);
	
	fflush(stdin);
	printf("CPF: ");
	scanf("%s", &cliente[contador].CPF);

	fflush(stdin);
	printf("Dias que vai ficar no hotel: ");
	scanf("%d", &cliente[contador].dias);
	
	printf("QUARTO DE HOTEL: ");
	
	contador++;
	
	printf("\nCadastro realizado com sucesso!\n");	
}

void lista(Cliente *cliente){
	
	int codCliente;
	
	for(int i = 0; i < contador; i++){
		printf("%d - %s", i, cliente[i].nome);
	}
	
	printf("Informe o código do cliente: ");
	scanf("%d", &codCliente);
}



