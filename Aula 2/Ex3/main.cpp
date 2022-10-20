#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int contador;
	
	printf("\n Digite um Valor:");
	scanf("%d", &contador);
	
	for (contador; contador>=1; contador--)
	{
		printf("%d ", contador);
	}
	return 0;
}
