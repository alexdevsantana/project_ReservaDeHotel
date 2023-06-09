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
