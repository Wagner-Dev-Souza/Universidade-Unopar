#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float media;
	
	printf("Insira nota 1: \n");
	scanf("%f", &nota1);
	
	printf("Insira nota 2: \n");
	scanf("%f", &nota2);
	
	printf("Insira nota 3: \n");
	scanf("%f", &nota3);
	
	printf("Insira nota 4: \n");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;

	printf("Media = %f", media);

	return 0;
}
