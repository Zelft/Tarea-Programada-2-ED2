#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include "Persona.h"

class Procesar
{
private:
	vector<Persona> personas;
public:
	Procesar() { };
	void setPersonas(vector<Persona>p);
	void cargarArchivo();
	void insertarArchivo(Persona mensaje);
};
