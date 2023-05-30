#include <stdio.h>

#include <locale.h>




void head() {
	
	printf("\t\t\tSistema de Reserva de Hotel");
	
}

void menu() {
	
	int opcao;
	
	printf("\n\n\t\t1.	Cadastrar Clientes\n");
	printf("\t\t2.	Listar Clientes\n");
	printf("\t\t3.	Cadastrar quartos\n");
	printf("\t\t4.	Listar todos quartos com status\n");
	printf("\t\t5.	Listar apenas quartos disponiveis\n");
	printf("\t\t6.	Reserva planejada para dia que o quarto fica disponivel\n");
	printf("\t\t7.	Lista de Reservas em aberto\n");
	printf("\t\t8.	Lista de Reservas por periodo\n");

	printf("\n\t\t\tEscolha uma opção válida: ");
	scanf("%d", &opcao);

}


int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	head();
	
	menu();
	
	return 0;
}
