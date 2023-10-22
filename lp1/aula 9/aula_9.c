// aula 9 - pre e pos incremento 



#include <stdio.h>
#include <stdlib.h>

int main () {

	int x = 10, y = 10;
	
	int w = 9, z = 9;
	
	x++; // x = x+1; // x = 11
	++y;
	
	w--;
	--z;
	
	printf("x = %d \n", x);
	printf("y = %d \n\n", y);
	
	
	printf("w = %d \n", w);
	printf("z = %d \n", z);
	
	system ("pause");
	return 0;
	
	//quando ocorre y = x++; é chamado de pos incremento  y= 10, x = 11
	// quando ocorre y = ++x; é chamado de pre incremento y= 11, x = 11


}
