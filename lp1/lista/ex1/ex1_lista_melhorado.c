//lista de exercícios

//1) Escreva um programa em C que encontre o menor inteiro positivo n que atenda as seguintes condições :
//n / 3 = x inteiro e resto 2
//n / 5 = y inteiro e resto 3
//n / 7 = z inteiro e resto 4


//(melhorado)

#include <stdio.h>
#include <stdlib.h>
int main () {
		
	int a, b, c, r, x;
	
	printf("Digite o denominador: ");
	scanf("%i", &a);
		
		
	printf("Digite o resto: ");
	scanf("%i", &r);
	
	x = a + r;
	
	printf("O menor inteiro positivo n e: %i", x);
	
	
	return 0;	
}
