 #include <stdio.h>

void swap_int(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;	
}

int main(void) {
	int x = 5;
	int y = 10;
	printf("x = %d\ny = %d\n", x, y);
	swap_int(&x, &y);
	printf("x = %d\ny = %d\n", x, y);
	
	return 0;
}
