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

int menu(Cliente *cliente) { // tipo void pois a fun��o n�o precisa de retorno
	
	int escolha;
	
	head();
	
	do{
		system("cls");
		
		printf("\n\n--- MENU --\n"); //exibe menu
		printf("1 - Cadastrar Cliente\n");
		printf("2 - Buscar Cliente\n");
		printf("3 - Sair do Sistema\n");
		printf("Escolha uma op��o: ");
		scanf("%d", &escolha); // obtem o numero informado pelo usuario e armazena na vari�vel escolha
		
		system("cls");
//		system("pause");
			
		system("cls");

	
		switch(escolha) {
			case 1:
				printf("--- CADASTRAR Cliente --\n"); //exibe CADASTRAR PRODUTO
				
				cadastra(cliente);
				system("pause");
				
				break;
			case 2:
				printf("--- Lista de Cliente --\n"); //exibe BUSCAR PRODUTO
				system("pause");
				
				//	void lista(cliente);
				
				break;
			case 3:
				printf("Sistema encerrado.\n");
				system("pause");
				
				break;
			default: // op��o padr�o para se os case anteriores forem falsos
				printf("Op��o inv�lida.\n");
		}

	}while(escolha != 3);
	
	return 0;

}

void cadastra(Cliente *cliente) {
	char op;
	
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
	
	printf("Informe o c�digo do cliente: ");
	scanf("%d", &codCliente);
}



