#pragma once
#include "Avion.h"

class Carrera
{
public:
	Carrera();
	~Carrera();

	void inicia_carrera();
	void agregar_aviones();

private:
	//Avions a participar
	Avion** arreglo; //Avions a participar
	Avion* objAvion;
	int cantidad;
	int meta;
}; // fin de la definicion

//Implementa la clase

Carrera::Carrera()
{
	cantidad = 0;
}

Carrera::~Carrera()
{}

void Carrera::inicia_carrera()
{
	cout << "Ingrese la cantidad de aviones de 2 hasta 8: " << endl;
	cin >> cantidad;
	arreglo = new Avion * [cantidad];
	int posx = 9; // para la posicion del Avion
	float posy = 4;
	meta = 29;
	for (int i = 0; i < cantidad; i++)
	{
		objAvion = new Avion(posx, posy);
		arreglo[i] = objAvion;
		posx += 19; // para la posicion del sgte. Avion
	}
	//muestra los Avions
	for (int i = 0; i < cantidad; i++)
	{
		arreglo[i]->dibujar();
	}
	/*arreglo[0]->dibujar();
	arreglo[1]->dibujar();
	arreglo[2]->dibujar();*/

	int i = 0;

	while (true)
	{
		arreglo[i]->borrar();
		arreglo[i]->mover();
		arreglo[i]->dibujar();

		i++;
		if (i > cantidad-1)i = 0;
		if (arreglo[i]->getY() + 4 > meta)
		{
			Console::SetCursorPosition(30, 27); cout << "GANA Avion" << i + 1;
			system("pause>0");
			break; //fin del ciclo
		}
		_sleep(100);
	}

}
