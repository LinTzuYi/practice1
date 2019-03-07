#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
bool Guess(int number) {
<<<<<<< HEAD
	static int target = -1;
	if (target == -1) {
		Random r;
		target = r.Next() % 100 + 1;
	}
	if (number == target)return true;
=======
>>>>>>> b4593ef9269d1310d3a41c324ee576400ae0c6ba
	return false;
}
int main(array<System::String ^> ^args)
{
	int guess;
	do {
		std::cin >> guess;
	} while (!Guess(guess));
	return 0;
}