#include "pch.h"
#include <iostream>
#include <string>
#include "Persona.h"
#include "Procesar.h"
#include "Hash.h"
#include <string>

using namespace std;

int main()
{

	Procesar p{};
	p.cargarArchivo();
	//p.insertarArchivo(Persona("587541188","Diego","Mora","Rojas","11/06/14"));
	cout << "\n\n\n\n----------------- Probando Hash -----------------\n";
	Hash* pruebaHash = new Hash();
	vector<Persona> people = p.getPersonas();
	for (int i = 0; i < people.size(); i++) {
		people[i].mostrarPersona();
	}
	for (int i = 0; i < p.getPersonas().size(); i++) {
		pruebaHash->añadirPersona(people[i]);
	}
	//pruebaHash->imprimirTabla();
	cout << "\n\n CAMBIO \n\n";
	vector<Persona> aux = pruebaHash->devolverPersonas();
	for (int i = 0; i < aux.size(); i++) {
		aux[i].mostrarPersona();
	}
	/*cout<<"\nExiste la cédula Danny? = "<<pruebaHash->existeCedula("Danny") << endl;
	cout <<"Obteniendo nombre de la cedula Danny: " << pruebaHash->buscarPersona("Danny")->getNombre()<<endl;
	pruebaHash->modificarPersona("Danny","fuck", "fuck", "fuck", "fuck");
	cout << "Obteniendo nombre de la cedula Danny: " << pruebaHash->buscarPersona("Danny")->getNombre() << endl;
	pruebaHash->imprimirTabla();
	cout << "\nSe va a eliminar la cedula Danny...\n";
	pruebaHash->eliminarPersona("Danny");
	pruebaHash->imprimirTabla();*/

}
