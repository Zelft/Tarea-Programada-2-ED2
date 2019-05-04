#include "pch.h"
#include "Procesar.h"

void Procesar::setPersonas(vector<Persona>p)
{
	personas = p;
}

void Procesar::cargarArchivo()
{
	for (int i = 0 ; i < personas.size();i++){
		cout << "\t Persona " << i << endl;
		cout << personas[i].getCedula() << " ";
		cout << personas[i].getNombre() << " ";
		cout << personas[i].getApellido() << " ";
		cout << personas[i].getApellido2() << " ";
		cout << personas[i].getFechaNacimiento() << " ";
		cout << "\n";
	}
}

vector<Persona> Procesar:: leer() {
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
			personas.push_back(Persona(cedula, nombre, apellido, apellido, fecha));
			cout << cedula << " " << nombre << " " << apellido << " " << apellido2 << " " << fecha;
		}
		c++;
	}
	return personas;
}