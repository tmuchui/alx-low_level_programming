#include <stdio.h>

int main(void) {
	int a[3] = {32, 54, 76};
	int *p;
	p = &a[2];
	*p = 98;
	printf("a[2] = %d \n", a[2]);
	
	return 0;
}
