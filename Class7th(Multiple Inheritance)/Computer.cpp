#include "Computer.h"

void Computer::Use()
{
	Mouse::Connect();
	Keyboard::Conncect();

	Select();
	Input();

}
