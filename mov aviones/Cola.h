#pragma once
#include <iostream>
using namespace System;
using namespace std;

class Cola
{
public:
	Cola();
	Cola(int px, int py);
	~Cola();

	void dibujar();
	void setY(int valor);

private:
	int x;
	int y;
}; //fin de la definicion

//IMPLEMENTACION

Cola::Cola()
{
	this->x = 0;
	this->y = 0;
};

Cola::Cola(int px, int py)
{
	this->x = px;
	this->y = py;
}


Cola::~Cola()
{
}

void Cola::dibujar()
{
	Console::SetCursorPosition(x, y); cout << "__|__";
}

void Cola::setY(int valor)
{
	this->y = valor;
}

