#include"menu.h"
#include "Class.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WORD(0 << 0 | 7));

	Menu* menu = new Menu;
	menu->Vmenu();

	testSmartUniquePtr();
	testSmartSharedPtr();
	return 0;
}