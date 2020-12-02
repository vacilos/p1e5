#include <stdio.h>

int main(void) {
	int number;
	
	printf("Dwse moy enan tripsifio arithmo:\n");
	scanf("%d", &number);
	
	if( (number < 100) || (number > 999) ) {
		printf("O arithmos den einai tripsifios");
	}
	
	int ekatontades = number / 100;
	number -= ekatontades * 100;
	
	int dekades = number / 10;
	number -= dekades * 10;
	
	printf("To apotelesmata tis prosthesis tou %d + %d + %d einai: %d", ekatontades, dekades, number, ekatontades+dekades+number);
	
	return 0;
}
