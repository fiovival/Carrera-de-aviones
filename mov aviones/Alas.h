#pragma once
#include <iostream>
using namespace System;
using namespace std;

class Alas
{
public:
	Alas();
	Alas(int px, int py);
	~Alas();

	void dibujar();
	void setY(int valor);

private:
	int x;
	int y;
}; //fin de la definicion

//IMPLEMENTACION

Alas::Alas()
{
	this->x = 0;
	this->y = 0;
};

Alas::Alas(int px, int py)
{
	this->x = px;
	this->y = py;
}


Alas::~Alas()
{
}

void Alas::dibujar()
{
	Console::SetCursorPosition(x, y); cout << "--o--";
}

void Alas::setY(int valor)
{
	this->y = valor;
}