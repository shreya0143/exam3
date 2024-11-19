#include <stdio.h>

int main() {
	
	int i, j = 0;
	
	printf("Enter any number: ");
	scanf("%d",&i);
	
	i = ( i < 0) ? -i : i;
	
	do {
		i /= 10;
		j++;
	}
	
	while (i != 0);
	
	printf("Total number of digits: %d\n", j);
	
	return 0;
}
