#include "pch.h"
#include <iostream>
#include <string>
#include "Persona.h"
#include "Procesar.h"
#include <string>

vector<Persona> leer();
using namespace std;

int main()
{
	vector<Persona>people = leer();
	Procesar p (people);
	p.cargarArchivo();
}

vector<Persona> leer() {
	ifstream archivo;
	string valor;
	string cedula, nombre, apellido, apellido2, fecha;
	archivo.open("data_base.csv");
	int c = 0;
	vector<Persona>personas;
	while (archivo.good()) {
		if (c > 4) {
			getline(archivo, cedula, ';');
			getline(archivo, nombre, ';');
			getline(archivo, apellido, ';');
			getline(archivo, apellido2, ';');
			getline(archivo, fecha, ';');
			personas.push_back(Persona(cedula,nombre,apellido,apellido,fecha));
			cout << cedula << " " << nombre<<" "<<apellido<<" "<<apellido2<<" "<<fecha;
		}
		c++;
	}
	return personas;
}