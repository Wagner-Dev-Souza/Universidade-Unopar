#include <iostream>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char const* argv[])
{

	char nome [40];
	char endereco [50];
	char telefone [15];

	printf("Digite o Nome: \n");
	fgets(nome,40,stdin);
	
	printf("Digite o Endereco: \n");
	fgets(endereco,50,stdin);
		
	printf("Digite o Telefone: \n");
	fgets(telefone,15,stdin);
	
	printf("\nNome: %s\nEndereco: %s\nTelefone: %s", nome, endereco, telefone);
	
	return 0;
}
