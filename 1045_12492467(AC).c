#include <stdio.h>
float division(float x, float y) {
	float z = x / y;
	printf("%.f\n",z);
	return z;
}
int main(void)
{	
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);

	float z;
	z = division(a, b);
	
	printf("%d\n", a % b);
	printf("%.2f\n", z);

	return 0;
}
