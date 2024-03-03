#include <windows.h>

int WINAPI WinMain ( HINSTANCE hInstance, HINSTANCE hPrevInstance,
					PSTR szCmdLine, int iCmdShow )
{
	MessageBox ( NULL, TEXT( "Hello, Shakil!" ), TEXT( "Welcome!" ), 0 );

	return 0;
}
