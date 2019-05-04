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
	Procesar(vector<Persona>p) { this->personas = p; };
	void setPersonas(vector<Persona>p);
	void cargarArchivo();
	vector<Persona> leer();
};
