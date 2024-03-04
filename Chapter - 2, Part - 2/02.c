#include<stdio.h>

int main()
{
	// Examples for 'Wider Characters' section

	wchar_t c = 'A';

	printf( "Size of c: %i\n", sizeof( c ) ); // Size of c: 2


	wchar_t *p = L"Hello!";

	printf( "Size of p: %i\n", sizeof( p ) ); // Size of p: 4


	static wchar_t a[] = L"Hello!";

	printf( "Size of a: %i\n", sizeof( a ) ); // Size of a: 14


	wchar_t b = L'A';

	printf( "Size of b: %i", sizeof( b ) ); // Size of b: 2


	return 0;
}
