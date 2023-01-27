#include <iostream>
#include <conio.h>
#include "Avion.h"
#include "Carrera.h"

using namespace System;
using namespace std;

int main()
{
    srand(time(nullptr));
    Console::SetWindowSize(1500, 300);
    Console::CursorVisible = false;
    Carrera* ObjCarrera;
    ObjCarrera = new Carrera();
    ObjCarrera->inicia_carrera();

    system("pause>0");
    return 0;
}