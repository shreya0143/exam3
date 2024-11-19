 #include <stdio.h>

int main() {
	
	int n, f, l;
	
	printf("Enter any number: ");
	scanf("%d",&n);
	
	l = n % 10;
	
	f = n;
	
	do {
		f /= 10;
	}
	
	while (f >= 10);
	
	printf("The sum of the first and the last digit: %d\n",f+l);
	
	return 0;
}
