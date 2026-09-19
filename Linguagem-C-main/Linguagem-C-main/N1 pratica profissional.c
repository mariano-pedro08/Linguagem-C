#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
 main()
{
    char nome_cliente[50],nome_carro[50],cpf[15],endereco[50], email[50];
	int telefone, opcoes ,cor, modelo, contador_carro=0, opcao=1;
	float salario;
	
	printf("Digite seu nome:");
	fgets(nome_cliente,50,stdin);
	printf("Digite seu CPF: ");
	scanf("%s",&cpf);
	printf("Digite seu endereço:");
	fflush(stdin);
	fgets(endereco,50,stdin);
	printf("Digite seu email:");
	scanf("%s",&email);
	printf("Digite seu telefone:");
	scanf("%i",&telefone);
	printf("Digite o salario:R$");
	scanf("%f",&salario);
	
	printf("Voce vai querer um carro  novo ou usado?\n");
	printf(" 1 - novo  2 - seminovo \n");
	scanf("%i",&opcoes);
	
	
	if( opcoes==1){
		
		printf("Voce selecionou o novo\n");
	}else {
		printf("Se não vc escolheu o seminovo\n");
	}
	
	printf("Escolha a cor do seu carro\n");
   	printf(" 1-verde  2-azul 3-amarelo 4-preto 5-branco\n");
   	scanf("%d",&cor);
     
	switch(cor){
		
		case 1:
			printf("escolheu a cor verde\n");
			break;
		case 2:
			printf("escolheu a cor azul\n");
			break;
		case 3:	
		    printf("escolheu a cor amarela\n");
			break;
		
		case 4:
			printf("escolheu a cor preta\n");
			break;
		case 5:
			printf("escolheu a cor branca\n");		
			break;
			
			default:
				printf("Nenhuma das opcoes selecionadas,contate o suporte ");
			
	}
	
    printf("Escolha o modelo do carro \n");
    printf("1-fiat 2-volkswagen, 3-hyundai 4-chevrolet 5-Nissan\n");
    scanf("%d",&modelo);
    
    	switch(modelo){
		
		case 1:
			printf("escolheu a fiat\n");
			break;
		case 2:
			printf("escolheu  a volkswagen\n");
			break;
		case 3:	
		    printf("escolheu  a Hyundai\n");
			break;
		
		case 4:
			printf("escolheu  a  chevrolet\n");
			break;
		case 5:
			printf("escolheu  a Nissan\n");		
			break;
			
			default:
				printf("Não escolheu nenhuma opcao apresentada, contate o suporte  ");

}
      

	while(opcao==1){
		
		printf("Digite o nome do carro que vc deseja");
		scanf("%s",&nome_carro);
		
		 printf("1- continuar ou 0 sair ");
       scanf("%d",&opcao);
		
	}
		
    printf("Aqui está o modelo de sua preferencia");
	
	
	system("cls");
	
	//IMPRESSAO
	printf("Nome do cliente:%s\n",nome_cliente);
	printf("cpf:%s\n",cpf);
    printf("email: %s \n",email);
    printf("telefone:%i \n",telefone);
	printf("cor: %i \n",cor);
	printf("modelo: %i \n",modelo);
	printf("nome do carro:%s\n",nome_carro);
	printf("salario:%.2f\n",salario);
	
	
	
	
	
	return 0;
}
