#include <stdio.h>

int main() {
	
	char i = 'a';
	
	do {
		printf("%c,",  i);
		i+= 4;
	}
	
	while (i <= 'y');
	
	printf("\n");
	
	return 0;
}
