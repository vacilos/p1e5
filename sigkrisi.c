#include <stdio.h>

int main(void) {
	double a, b;
	printf("Dwse moy dio dekadikous:\n");
	scanf("%lf %lf", &a, &b);
	double min = b;
	if(a < b) {
		min = a;
	}
	printf("Mikroteros einai o arithmos: %f", min);
	
//	if(b < a) {
//		printf("Mikroteros einai o b: %f", b);
//	}
	
	return 0;
}
