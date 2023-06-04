#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>



struct Cliente {
	char nome[50];
	char CPF[14];
	int telefone[11];
};

int contador = 0;

void head(), cadastra(Cliente *cliente), lista(Cliente *cliente), quartos(), listarquartos(); 
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
		printf("3 - Cadastra quarto\n");
		printf("4 - Quartos reservados\n");
		printf("5 - Sair do Sistema\n");
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
				
				
				lista(cliente);
				system("pause");
				
				
				
				break;
			case 3:
				printf("--- Cadastra quarto --\n");
			    quartos();	
				
				system("pause");
				
				break;
			case 4:
				printf("--- listar quartos reservados--\n");
			    listarquartos();	
				
				system("pause");
				
				break;
			case 5:
				printf("Sistema encerrado.\n");
				system("pause");
				
				break;
			default:
				printf("Opção inválida.\n");
		}

	}while(escolha != 5);
	
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
	printf("Número de telefone: ");
	scanf("%d", &cliente[contador].telefone);
	
	contador++;
	
	printf("\nCadastro realizado com sucesso!\n");	
}

void lista(Cliente *cliente){
	char opcao;
	int codCliente;
	
	for(int i = 0; i < contador; i++){
		printf("%d - %s\n", i, cliente[i].nome);
	}
	
	fflush(stdin);
	printf("Deseja obter mais detalhes? (s/n): ");
	scanf("%c", &opcao);
	
	system("cls");
	
	if(toupper(opcao) == 'S') {
		for(int i = 0; i < contador; i++){
		printf("%d - %s\n", i, cliente[i].nome);
		}
		
		printf("\nInforme o código do cliente: ");
		scanf("%d", &codCliente);
		
		printf("%s\n",cliente[codCliente].nome);
		printf("\nCPF: %s", cliente[codCliente].CPF);
		printf("\nTelefone: %d\n", cliente[codCliente].telefone);
				
	}
}
void quartos() {
	int disponivel;
    struct Information {
        int disponivel[50];
        int qntd_de_pessoa;
    };
  	
    struct Information information[50];
    printf("Escolha qual quarto você deseja ficar (0-50): ");
	fflush(stdin);
    scanf("%d", &information[contador].disponivel);
    printf("Digite a quantidade de pessoas que vão estar no quarto: ");
    fflush(stdin);
    scanf("%d", &information[contador].qntd_de_pessoa);
	system("cls");
    contador++;
}
void listarquartos() {
	struct Information {
        int disponivel[50];
        int qntd_de_pessoa;
    };
    
    struct Information information[50];
    
    for (int i = 0; i < contador; i++) {
        printf("\n");
        printf("%d - Quarto reservados: %d\n", i, information[i].disponivel[0]);
    } 
}
