#include <stdio.h>

int main(void) {
	int a, b;
	printf("Dwse moy dio arnitikous akeraious:\n");
	scanf("%d %d", &a, &b);
	
	if( (a >= 0) || (b >= 0) ) {
		printf("To programma thelei arnitikous arithmous");
	}
	
	printf("Oi arithmoi einai: %d kai %d", -a, -b);
	
	return 0;
}
