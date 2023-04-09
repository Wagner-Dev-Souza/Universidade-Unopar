#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void inserir(int a[])
{
	int i;
	for(i=0; i<3; i++)
	{
		printf("\n Digite o valor %d : ", i);
		scanf("%d", &a[i]);
	}
}

void imprimir(int b[])
{
	int i;
	for(i=0; i<3; i++)
	{
		printf("\n numeros[%d] = %d", i, (2*b[i]));
	}
}
int main(int argc, char** argv) {
	
	int numero[3];
	printf("\n Preenchendo o vetor : \n");
	inserir(numero);
	
	printf("\n valor final");
	imprimir(numero);
	
	return 0;
}
