#pragma once
#include <iostream>
#include "Fuselaje.h"
#include "Alas.h"
#include "Cola.h"


using namespace System;
using namespace std;

class Avion
{
public:
	Avion();
	Avion(int px, float py);
	~Avion();

	void borrar();
	void mover();
	void dibujar();
	float getY();

private:
	int x;
	float y;
	float dy;

	Cola* ObjCola;
	Fuselaje* ObjFuselaje;
	Alas* ObjAla;
	Alas** arreglo;
};

Avion::Avion()
{
	this->x = 0;
	this->y = 0;
	this->dy = 1;
}

Avion::Avion(int px, float py)
{
	this->x = px;
	this->y = py;
	this->dy = 0.1 + (float)rand() / RAND_MAX;
	//crear chasis
	ObjFuselaje = new Fuselaje(this->x, this->y);
	ObjCola = new Cola(x - 1, y - 1);
	//crea llanta
	arreglo = new Alas * [2];
	arreglo[0] = new Alas(x + 3, y);  //Alas 1
	arreglo[1] = new Alas(x - 5, y);  //Alas 2

}

Avion::~Avion()
{
}

void Avion::borrar() {
	Console::SetCursorPosition(x - 1, y - 1); cout << "        ";
	Console::SetCursorPosition(x - 5, y); cout << "                ";

}
void Avion::mover() {

	//if (80 + dx > x) dx = 0;

	y += dy;
	//para las llantas
	arreglo[0]->setY(y);
	arreglo[1]->setY(y);

	//para el chasis
	ObjFuselaje->setY(y);
	ObjCola->setY(y - 1);

}
void Avion::dibujar() {
	ObjFuselaje->dibujar();
	ObjCola->dibujar();
	for (int i = 0; i < 2; i++) arreglo[i]->dibujar();
}

float Avion::getY()
{
	return this->y;
}
