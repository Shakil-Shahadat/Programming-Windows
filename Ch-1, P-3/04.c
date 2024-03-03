#include <windows.h>

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,
					PSTR szCmdLine, int iCmdShow )
{
	MessageBox( NULL, TEXT( "Hello, Shakil!" ), TEXT( "Welcome!" ), 0 );

	// Only ASCII is supported, not UNICODE.
	// ToDo: Find out how can I use UNICODE.
	// MessageBox( NULL, TEXT( "হ্যালো, শাকিল!" ), TEXT( "স্বাগতম!" ), 0 );

	// When clicked on the produced exe, a command prompt also opens.
	// ToDo: Find a way that doesn't produce command prompt.

	return 0;
}
