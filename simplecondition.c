#include <stdio.h>

int main(void) {
	float a, b;
	char c;
	printf("Dwse moy dio dekadikous kai tin praksi poy tha kanw [S, M]: \n");
	scanf("%f %f %c", &a, &b, &c);
	
	if(c == 'M') {
		printf("To ginomeno einai: %f", a*b);
	}
	
	if(c == 'S') {
		printf("To athroisma einai: %f", a+b);
	}
	
	return 0;
	
	
}
