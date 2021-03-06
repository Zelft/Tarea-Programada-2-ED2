#pragma once
#include<iostream>
#include <string>
#include <vector>
#include "Persona.h"

using namespace std;

class Hash
{
private:
	static const int tamaņoTabla = 20;
	Persona* tabla[tamaņoTabla];

public:
	Hash();
	int idx(string key);
	void aņadirPersona(Persona p);
	Persona* buscarPersona(string key);
	void modificarPersona(string nuevaCedula, string nuevoNombre, string nuevoAp1, string nuevoAp2, string nuevaFecha);
	int numeroColisiones(int idx);
	bool existeCedula(string cedula);
	void eliminarPersona(string key);
	vector<Persona> devolverPersonas();
	void imprimirTabla();
};

