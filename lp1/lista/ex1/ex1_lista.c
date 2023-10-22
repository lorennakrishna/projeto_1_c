//lista de exercícios

//1) Escreva um programa em C que encontre o menor inteiro positivo n que atenda as seguintes condições :
//n / 3 = x inteiro e resto 2
//n / 5 = y inteiro e resto 3
//n / 7 = z inteiro e resto 4


#include <stdio.h>

int main (){
	
	int a, r, x, n;
	
	a = 3;
	r = 2;
	n = a + r;
	x = n / a;
	
	printf("Para n/3 = x inteiro e resto 2: \n");
	printf("n = %d\n\n", n);
//-------------------------------------------------------------------------------------

	a = 5;
	r = 3;
	n = a + r;
	x = n / a;
	
	printf("Para n/5 = y inteiro e resto 3: \n");
	printf("n = %d\n\n", n);
	
	
//-------------------------------------------------------------------------------------	
	
	a = 7;
	r = 4;
	n = a + r;
	x = n / a;
	
	printf("Para n/7 = z inteiro e resto 4: \n");
	printf("n = %d\n\n", n);
	return 0;
	
}
