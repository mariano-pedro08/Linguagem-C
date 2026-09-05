#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 main()
{
    char nome[50],cpf[15],endereco[50], email[50];
	int telefone, opcoes;
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
	scanf("%i",&telefone);*/
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
	
	
	
	
	
	
	
	return 0;
}
