#pragma once

#include <Windows.h>
#include <chrono>

void DisableKeyboard() 
{
	EnableWindow(GetActiveWindow(), FALSE);
	BlockInput(TRUE);
}
