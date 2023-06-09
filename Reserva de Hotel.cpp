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

int menu(Cliente *cliente) { // tipo void pois a função não precisa de retorno
	
	int escolha;
	
	head();
	
	do{
		system("cls");
		
		printf("\n\n--- MENU --\n"); //exibe menu
		printf("1 - Cadastrar Cliente\n");
		printf("2 - Buscar Cliente\n");
		printf("3 - Sair do Sistema\n");
		printf("Escolha uma opção: ");
		scanf("%d", &escolha); // obtem o numero informado pelo usuario e armazena na variável escolha
		
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
			default: // opção padrão para se os case anteriores forem falsos
				printf("Opção inválida.\n");
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
	
	printf("Informe o código do cliente: ");
	scanf("%d", &codCliente);
}
void listarReservados(){
	
	for(int i = 0; i < contQuartos; i++){
		if(cliente[i].cadastrado == false and quartos[i].disponiveis == false)
			{
				
				printf("Id do Quarto:%d \n", quartos[i].id);
				printf("Este quarto está reservado pelo cliente - %s\n", cliente[i].nome);
				printf("Classe:%s \n", quartos[i].classe);
				printf("status do quarto:%s\n" ,quartos[i].status);
				
			}
	}	
}
void listaReservasEmAberto(){
		
	for(int x = 0; x < contResevas; x++){
		
		printf("Id do Quarto:%d \n", quartos[x].id);
		printf("Este quarto está reservado pelo cliente - %s\n", cliente[x].nome);
		printf("Classe:%s \n", quartos[x].classe);
		printf("Quantidade de Dias:%d\n", reservas[x].dias);
		printf("Valor da reserva:R$%d\n\n\n", reservas[x].valorF);
		
	}
}



