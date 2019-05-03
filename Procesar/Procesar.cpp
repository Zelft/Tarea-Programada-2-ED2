#include "pch.h"
#include "Procesar.h"

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
