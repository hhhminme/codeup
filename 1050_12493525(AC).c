#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	if (a == b)
		printf("%d",true);

	else
		printf("%d",false);

	return 0;
}
