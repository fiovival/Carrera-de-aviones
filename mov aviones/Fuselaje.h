#pragma once
#include <iostream>

using namespace System;
using namespace std;

class Fuselaje
{
public:
	Fuselaje();
	Fuselaje(int px, int py);
	~Fuselaje();

	void dibujar();
	void setY(int valor);

private:
	int x;
	int y;
};

Fuselaje::Fuselaje()
{
	this->x = 10;
	this->y = 10;
}

Fuselaje::Fuselaje(int px, int py)
{
	this->x = px;
	this->y = py;
}


Fuselaje::~Fuselaje()
{
}

void Fuselaje::dibujar()
{
	Console::SetCursorPosition(x, y); cout << "(_)";
}

void Fuselaje::setY(int valor)
{
	this->y = valor;
}