#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
 main()
{
    char nome[50],cpf[15],endereco[50], email[50];
	int telefone, opcoes ,cor, modelo;
	float salario;
	
	printf("Digite seu nome:");
	fgets(nome,50,stdin);
	printf("Digite seu CPF: ");
	scanf("%s",&cpf);
	printf("Digite seu endereço:");
	fflush(stdin);
	fgets(endereco,50,stdin);
	printf("Digite seu email:");
	scanf("%s",&email);
	printf("Digite seu telefone:");
	scanf("%i",&telefone);
	printf("Digite o salario");
	scanf("%f",&salario);
	
	printf("Voce vai querer um carro  novo ou usado?");
	printf(" 1-novo ou 2-seminovo");
	scanf("%i",&opcoes);
	
	
	if( opcoes==1){
		
		printf("Voce selecionou o novo");
	}else {
		printf("Se não vc escolheu o seminovo");
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
	
    printf("Escolha o modelo do carro\n");
    printf("1-escolheu a fiat 2-escolheu  a volkswagen, 3- escolheu a hyundai 4-escolheu  a  chevrolet 5-Nissan\n");
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
	
	
	
	return 0;
}
