#include <stdio.h>

int main(void) {
	int a, b;
	printf("Dwse moy dio vathmous:\n");
	scanf("%d %d", &a, &b);
	
	if( (a > 10) || (a < 0) ) {
		printf("Lathos vathmos a");
	}
	if( (b > 10) || (b < 0) ) {
		printf("Lathos vathmos b");
	}
	
	if( (a > 5) && (b > 5)) {
		printf("Perases to mathima");
	}
	
	return 0;
}
