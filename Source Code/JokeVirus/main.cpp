#include "jk_window.h"

int main() 
{
	ShowWindow(GetConsoleWindow(), HIDE_WINDOW);
	while (1) 
	{
		DisableKeyboard();
		SwapMouseButton(TRUE);
		if (FindWindowA(0, "Task Manager")) 
		{
			SwapMouseButton(FALSE);
			exit(33);
		}
	}
	return 0;
}