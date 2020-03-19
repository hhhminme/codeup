#include <stdio.h>

int main(void)
{
	char data[2001]; 
	fgets(data,sizeof(data),stdin);
	printf("%s", data);
	
	return 0; 
	
}
