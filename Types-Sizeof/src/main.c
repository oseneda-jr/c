#include <stdio.h>

int main()
{
	printf("Tamanho em bytes de short: %d\n", sizeof(short int));
	printf("Tamanho em bytes de int: %d\n", sizeof(int));
	printf("Tamanho em bytes de long: %zd\n", sizeof(long));
	printf("Tamanho em bytes de long long: %zd\n", sizeof(long long));
	printf("Tamanho em bytes de float: %zd\n", sizeof(float));
	printf("Tamanho em bytes de double: %zd\n", sizeof(double));
	printf("Tamanho em bytes de long double: %zd\n", sizeof(long double));

	return (0);
}