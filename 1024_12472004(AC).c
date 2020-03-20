#include<stdio.h>
int main() {
	char string[20];
	int i;

	gets(string);
	for (i = 0; i < sizeof(string); i++) {
		if (string[i] == NULL) 
			break;

		printf("'%c'\n", string[i]);
	}
}
