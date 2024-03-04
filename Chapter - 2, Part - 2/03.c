#include<stdio.h>
#include<string.h> // Required for strlen() function
// #include<wchar.h> // Alternate header file containing wprintf function

int main()
{
	// Examples for 'Wide-Character Library Functions' section

	char *pc = "Hello!";

	printf( "Size of pc: %i\n", sizeof( pc ) ); // Size of pc: 4

	printf( "String length of pc: %i\n\n", strlen( pc ) ); // String length of pc: 6


	wchar_t *pw = L"Hello!";

	printf( "Size of pw: %i\n", sizeof( pw ) ); // Size of pw: 4

	// printf( "String length of pw: %i\n", strlen( pw ) ); // String length of pw: 1
	// 'strlen' doesn't work for Wide-Character strings.

	printf( "String length of pw: %i\n\n", wcslen( pw ) ); // String length of pw: 6


	// Examples of wprintf

	wchar_t c = 'A';
	wprintf( L"%lc\n", c );

	wint_t x = 5;
	wprintf( L"x = %d \n", x );

	wchar_t name[] = L"GEEKS"; // L is mandatory here
	wprintf( L"%ls", name );

	return 0;
}
