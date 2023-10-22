// aula 10 - atribuição simplificada



#include <stdio.h>
#include <stdlib.h> 


int main () {
	
	//soma simplificada 
	
	int x = 10, y = 10;
	int z = 2;
	
	x = x + z;
	
	printf("x = %d\n", x);
	
	y += z; // y = y + z
	
	printf("y = %d \n\n", y); // mesmo vale pra -, *, /, %
	
	x -= z;
	
	printf("x = %d \n\n", x);
	
	
	x *= z;
	
	printf("x = %d \n\n", x);
	
	x /= z;
	
	printf("x = %d\n\n", x);
	
	x %= z;
	
	printf("x = %d\n\n", x);
	system ("pause");
	return 0;
	
	
	
}
