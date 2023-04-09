#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	
	do{
		printf("\n Digite o numero do sabor \n");
		
		printf("\t (1) ...flocos \n");
		printf("\t (2) ...morango \n");
		printf("\t (3) ...leite condensado \n");
		printf("\t (4) ...chocolate \n");
		printf("\t (5) ...creme \n");
		
		scanf("%d", &i);
		
	}while((i<1) || (i>5));
	
	switch(i){
		case 1:
			printf("\t\t\t VC ESCOLHEU FLOCOS\n\t\tValor Energetico	124 kcal= 521 kJ\n\t\tCarboidratos	\t15g\n\t\t\Proteinas	\t1,6g\n\t\tGorduras Totais	\t6,4g\n\t\tGorduras Saturadas	3,3g\n\t\tGorduras Trans	\t0\n\t\tFibra Alimentar	\t0g\n\t\tSodio	\t\t30 mg\n\t\t\tINFORMACAO NUTRICIONAL PORCAO DE 60g");
			break;
		
		case 2:
			printf("\t\t\t VC ESCOLHEU MORANGO\n\t\tValor Energetico	109 kcal= 458 kJ\n\t\tCarboidratos	\t13g\n\t\t\Proteinas	\t1,3g\n\t\tGorduras Totais	\t5,8g\n\t\tGorduras Saturadas	1,6g\n\t\tGorduras Trans	\t0\n\t\tFibra Alimentar	\t0g\n\t\tSodio	\t\t28 g\n\t\t\tINFORMACAO NUTRICIONAL PORCAO DE 60g");
			break;
		
		case 3:
			printf("\t\t\t VC ESCOLHEU LEITE CONDENSADO\n\t\tValor Energetico	145 kcal= 609 kJ\n\t\tCarboidratos	\t21g\n\t\t\Proteinas	\t2,5g\n\t\tGorduras Totais	\t5,7g\n\t\tGorduras Saturadas	1,9g\n\t\tGorduras Trans	\t0\n\t\tFibra Alimentar	\t1,1g\n\t\tSodio	\t\t24 mg\n\t\t\tINFORMACAO NUTRICIONAL PORCAO DE 60g");
			break;
			
		case 4:
			printf("\t\t\t VC ESCOLHEU CHOCOLATE\n\t\tValor Energetico	110 kcal= 462 kJ\n\t\tCarboidratos	\t18g\n\t\t\Proteinas	\t1,7g\n\t\tGorduras Totais	\t3,5g\n\t\tGorduras Saturadas	2g\n\t\tGorduras Trans	\t0\n\t\tFibra Alimentar	\t0g\n\t\tSodio	\t\t42 mg\n\t\t\tINFORMACAO NUTRICIONAL PORCAO DE 60g");
			break;
			
		case 5:
			printf("\t\t\t VC ESCOLHEU CREME\n\t\tValor Energetico	109 kcal= 458 kJ\n\t\tCarboidratos	\t13g\n\t\t\Proteinas	\t1,3g\n\t\tGorduras Totais	\t5,8g\n\t\tGorduras Saturadas	1,6g\n\t\tGorduras Trans	\t0\n\t\tFibra Alimentar	\t0g\n\t\tSodio	\t\t28 mg\n\t\t\tINFORMACAO NUTRICIONAL PORCAO DE 60g");
			break;
	}
	
	
	
	return 0;
}
