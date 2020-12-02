#include <stdio.h>
int main(void)
{
	int a = 4, b = 3, c = 1;
	
	a += b -= ++c * a--;
	
	// afksisi c kata 1 (c=2)
	// ++c * a (8)
	// (a=3)
	// b -= 8 => b = -5
	// a += -5 (a= -2)
	printf("%d %d %d\n", a, b, c);
	return 0;
/* edw grafw tin eksigisi toy apotelesmatos twn timwn
poy pairnoyn ta a, b, se GREEKLISH */
 }
