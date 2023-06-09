



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





void listartodos(){
	
	for(int i = 0; i < contQuartos; i++){
		
		printf("id:%d \n", quartos[i].id);
		printf("classe:%s \n", quartos[i].classe);
		printf("valor do quarto:%d \n", quartos[i].valor);
		printf("status do quarto:%s\n\n" ,quartos[i].status);
	}
		
}
