#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>


struct reservar{
	
	int idReserva;
	char classe[10];
	char nome[10];
	int dias;
	int valorF;
	
}reservas[100];

struct Quarto{
	
    int id;
    bool disponiveis;
    char classe[9];
    int valor;
    char status[10]; 
    int valorF;
	    
 }quartos[10];

struct Cliente {
	int id;
	char nome[50];
	int CPF;
	int telefone;
	bool cadastrado;
}cliente[100];

int contResevas = 0;
int contQuartos = 0;
int contador = 0;

void dados();

void head(), cadastraCliente(), listaCliente(), cadastrarQuartos(), listartodos(),
reservar(), litarDisponiveis(), listarReservados(), listaReservasEmAberto(), listarReservasPorPeriodo();
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
	    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< <> >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	    printf("                                             » BEM VINDO AO HOTEL CALANGO «                                             \n");
	    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< <> >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
		
		printf("\n\n<--------- MENU DO HOTEL --------->\n\n"); 
		printf("<--------------------------------->\n");
		printf("1 - Cadastrar Cliente\n");
		printf("<--------------------------------->\n");
		printf("2 - Buscar Cliente\n");
		printf("<--------------------------------->\n");
		printf("3 - Cadastra quarto\n");
		printf("<--------------------------------->\n");
		printf("4 - Reserva quarto\n");
		printf("<--------------------------------->\n");
		printf("5 - Listar todos os quartos\n");
		printf("<--------------------------------->\n");
		printf("6 - Listar quartos disponiveis\n");
		printf("<--------------------------------->\n");
		printf("7 - listar quartros reservados \n");
		printf("<--------------------------------->\n");
		printf("8 - listar reservas \n");
		printf("<--------------------------------->\n");
		printf("9 - listar reservas por Periodo \n");
		printf("<--------------------------------->\n");
		printf("0 - Sair do Sistema\n");
		printf("<--------------------------------->\n");
		printf("Escolha uma opção: ");
		scanf("%d", &escolha); 
		
		system("cls");

			
		system("cls");

	
		switch(escolha) {
			case 1:
				printf("»»»» CADASTRAR Cliente ««««\n\n"); 
				
				cadastraCliente();
				system("pause");
				
				break;
				
			case 2:
				printf("»»»»» Lista de Cliente «««««\n\n"); 
				
				
				listaCliente();
				system("pause");
				
				
				
				break;
				
			case 3:
				printf(" »»»»»»»»»»»»»»»»»» Cadastrar quarto »»»»»»»»»»»»»»»»»»\n\n");
			    cadastrarQuartos();	
				
				system("pause");
				
				break;
				
			case 4:
				printf(" »»»»» reservar quartos «««««\n\n");
			    reservar();
				
				system("pause");
				
				break;
				
			case 5:
				printf(" »»»»» listar todos os quartos ««««\n\n");
			    listartodos();	
				
				system("pause");
				
				break;
				
			case 6:
				printf(" »»»»» listar quartos disponiveis «««««\n\n");
			    litarDisponiveis();	
				
				system("pause");
				
				break;
			case 7:
				printf(" »»»»» listar quartros reservados «««««\n\n");
			    listarReservados();
				
				system("pause");
				
				break;
			case 8:
				printf(" »»»»» listar quartros reservados «««««\n\n");
			    listaReservasEmAberto();
				
				system("pause");
				
				break;
			case 9:
				printf(" »»»»» listar Reservas Por Periodo «««««\n\n");
			    listarReservasPorPeriodo();
				
				system("pause");
				break;
			case 0:
				printf("Sistema encerrado.\n");
				system("pause");
				
				break;
			default:
				printf("Opção inválida.\n");
		}

	}while(escolha != 0);
	
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
void cadastrarQuartos() {
   int teste;
   bool verifica = false; 
    
    
    
  	while(verifica == false){
  		
  		printf("<<<<<<<<<<<<<<<< >Informaçoes do quarto< >>>>>>>>>>>>>>>\n\n");
  		printf(">> Quarto basico: Cama de solteiro, ventilador\n");
  		printf(">> Valor- 70 reais\n");
  		printf("\n>> Quarto de luxo: Cama de casal, ar-condicionado, banheira\n");
  		printf(">> Valor- 200 reais\n");
	 	printf("\n<<<<<<<<<<<<<<<<<********>>>>>>>>>>>>>>>>>>\n\n");
	 	printf(" 1 - Luxo\n ");
	 	printf("2 - Básico \n");
	 	printf("\nDigite a classe do quarto que deseja cadastrar: ");
	 	
	   	scanf("%d", &teste);
	   	
	   	if(teste == 1){
	   		strcpy(quartos[contQuartos].classe, "luxo");
	   		strcpy(quartos[contQuartos].status, "disponivel");
	   		quartos[contQuartos].id = contQuartos +1;
	   		quartos[contQuartos].disponiveis = true;
	   		quartos[contQuartos].valor = 200;
	   		contQuartos++;
	   		verifica = true;
	   		printf("\n\nQuarto cadastrado com sucesso!!!!\n");
		}else if(teste == 2){
			strcpy(quartos[contQuartos].classe, "basico");
			strcpy(quartos[contQuartos].status, "disponivel");
			quartos[contQuartos].id = contQuartos +1;
			quartos[contQuartos].disponiveis = true;
			quartos[contQuartos].valor = 70;
			contQuartos++;
			verifica = true;
			printf("\n\nQuarto cadastrado com sucesso!!!!\n");
		}else{
		 	printf("Opção invalida!!!\n\n");
		}
  	}
   	
   	
}

void listartodos(){
	
	for(int i = 0; i < contQuartos; i++){
		
		printf("id:%d \n", quartos[i].id);
		printf("classe:%s \n", quartos[i].classe);
		printf("valor do quarto:%d \n", quartos[i].valor);
		printf("status do quarto:%s\n\n" ,quartos[i].status);
	}
		
}

void reservar(){
 	int id2;
 	int idCliente;
 	int comfirmar;
 	
 	for(int i = 0; i < contador; i++){
 		
		printf("%d - %s\n",cliente[i].id, cliente[i].nome);
	}
	
	printf("informe seu id: ");
	scanf("%d", &idCliente);
	
	for(int i = 0; i < contador; i++)
	{
		
		if(idCliente == cliente[i].id)
		{	
			strcpy(reservas[contResevas].nome, cliente[i].nome);
			cliente[i].cadastrado = false;	
		}
	}
 	
 	
 	printf("Qual quarto voce deseja reserva\n\n");
 	
 	for(int i = 0; i < contQuartos; i++){
 		if(quartos[i].disponiveis == true){
			printf("Id:%d \n", quartos[i].id);
			printf("Classe:%s \n", quartos[i].classe);
			printf("valor do quarto:%d \n\n", quartos[i].valor);
		}
	}
		
	printf("\nDigite o id do quarto que você deseja reserva: ");	
	scanf("%d", &id2);
	
	fflush(stdin);
	printf("digite a quatidade de dias que vc deseja ficar: ");
	scanf("%d", &reservas[contResevas].dias);
	
	reservas[contResevas].valorF = reservas[contResevas].dias * quartos[id2 - 1].valor;
	
	printf("O valor a ser pago é:%d\n", reservas[contResevas].valorF);
	
	printf("Digite 1 para confirmar cadastro: ");
	scanf("%d", &comfirmar);
	
	if(comfirmar != 1){
		printf("reserva não comfirmada!!!\n");	
	}
	
	for(int i = 0; i < contQuartos; i++)
	{
		
		if(id2 == quartos[i].id and comfirmar == 1)
		{	
			
			idCliente = reservas[contResevas].idReserva;
			strcpy(quartos[i].status, "Reservado");	
			strcpy(reservas[contResevas].classe, "Reservado");		
			quartos[i].disponiveis = false;
			cliente[i].cadastrado = false;
			printf("\nQuarto cadastrado!!!\n");
			contResevas++;
		}
	}
	
	
	
 }  
   
void litarDisponiveis(){
	
 	for(int i = 0; i < contQuartos; i++){
		if(quartos[i].disponiveis == true)
		{		
			printf("Id:%d \n", quartos[i].id);
			printf("Classe:%s \n", quartos[i].classe);
			printf("status do quarto:%s\n\n" ,quartos[i].status);		
		}
	}	
			
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
void listarReservasPorPeriodo(){
	int dias; 
	
	printf("Digite a quantidade de dias para ver as reservas: ");
	scanf("%d", &dias);
	
	for(int x = 0; x < contResevas; x++){
		
		if(reservas[x].dias <= dias){
		  	
			printf("Id do Quarto:%d \n", quartos[x].id);
			printf("Este quarto está reservado pelo cliente - %s\n", cliente[x].nome);
			printf("Classe:%s \n", quartos[x].classe);
			printf("Quantidade de Dias:%d\n", reservas[x].dias);
			printf("Valor da reserva:R$%d\n\n\n", reservas[x].valorF);
		
		}
	}
	
}
