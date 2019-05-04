#include "pch.h"
#include "Procesar.h"

void Procesar::setPersonas(vector<Persona>p)
{
	personas = p;
}

void Procesar::cargarArchivo()
{
	for (int i = 0 ; i < personas.size();i++){
		cout << "\t Persona " << i+1;
		personas[i].mostrarPersona();
	}
}

void Procesar::insertarArchivo(Persona p)
{
	ofstream archivoC;
	archivoC.open("base_de_datos.csv");
	archivoC << "Cedula"<<";";
	archivoC << "Nombre" << ";";
	archivoC << "Apellido" << ";";
	archivoC << "Segundo Apellido" << ";";
	archivoC << "Fecha Nacimiento" << ";";
	for (int i = 0; i < personas.size(); i++) {
		archivoC << personas[i].getCedula() << ";";
		archivoC << personas[i].getNombre() << ";";
		archivoC << personas[i].getApellido() << ";";
		archivoC << personas[i].getApellido2() << ";";
		archivoC << personas[i].getFechaNacimiento() << ";";
	}
	archivoC <<"\n"<<p.getCedula()<<";";
	archivoC << p.getNombre()<<";";
	archivoC << p.getApellido()<<";";
	archivoC << p.getApellido2()<<";";
	archivoC << p.getFechaNacimiento() <<";";
	cout << "Mensaje guardado";
}

vector<Persona> Procesar:: leer() {
	ifstream archivo;
	string valor;
	string cedula, nombre, apellido, apellido2, fecha;
	archivo.open("base_de_datos.csv");
	vector<Persona>personas;
	while (archivo.good()) {
		getline(archivo, cedula, ';');
		getline(archivo, nombre, ';');
		getline(archivo, apellido, ';');
		getline(archivo, apellido2, ';');
		getline(archivo, fecha, ';');
		personas.push_back(Persona(cedula, nombre, apellido, apellido2, fecha));
		if (cedula == "Cedula" && nombre == "Nombre" && apellido == "Apellido" && apellido2 == "Segundo Apellido" && fecha == "Fecha Nacimiento") personas.pop_back();
	}
	personas.pop_back();
	archivo.close();
	return personas;
}