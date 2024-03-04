#include<stdio.h>

int dummyFunc()
{
	static char d[] = "Hello!";

	printf( "Size of d: %i", sizeof( d ) );

	return 0;
}

int main()
{
	char c = 'A'; // Backtick ( ` ) doesn't work

	printf( "Size of c: %i\n", sizeof( c ) );


	char *p1;

	printf( "Size of p1: %i\n", sizeof( p1 ) );


	char *p2 = "Hello!";

	printf( "Size of p2: %i\n", sizeof( p2 ) );


	char a[ 10 ];

	printf( "Size of a: %i\n", sizeof( a ) );


	char b[] = "Hello!";

	printf( "Size of b: %i\n", sizeof( b ) );


	dummyFunc();


	return 0;
}
