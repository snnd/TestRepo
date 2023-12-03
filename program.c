#include <stdio.h>

int main()
{
	printf("don't freak out. this is a test dude.\n");
	int n;
	scanf("now, hah, give a number plz: %d\n", &n);
	if (n % 2 == 0) printf("EVEN");
	else printf("ODD");
	
	return 0;
}
