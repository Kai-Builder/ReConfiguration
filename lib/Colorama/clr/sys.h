//
// Created by seymo on 1/31/2021.
//

#ifndef COLORAMA_SYS_H
#define COLORAMA_SYS_H

#include <iostream>
#include <windows.h>
#include <winbase.h>
#include <fstream>
#include <string>
#include <algorithm>

#define RED 4
#define WHITE 16
#define WHITE_OTHER 8
#define GRAY 9
#define BLUE 3
#define GREEN 2

#define YELLOW 14
#define print( arg ) std::cout << arg << std::endl

#include <Lmcons.h>

class Palette { };

class ColorPicker : public Palette {
public:
	virtual void pickColor ( int color ) {
		HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
		int k = color;
		SetConsoleTextAttribute ( hConsole , k );
	}
};
class OutColor {
public:
	virtual void SelfPick(int color, const std::string tex) {
		ColorPicker x;
		x.pickColor(color);
		print(tex);
	}
};

#endif //COLORAMA_SYS_H
