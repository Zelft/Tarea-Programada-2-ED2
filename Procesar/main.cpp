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

	Procesar procesado{};
	procesado.cargarArchivo();
	procesado.insertarArchivo(Persona("151515151","Jaime","Constru","Lampara","04/04/19"));



	/*cout << "\n\n\n\n----------------- Probando Hash -----------------\n";
	Hash* pruebaHash = new Hash();
	for (int i = 1; i < procesado.setPersonas().size(); i++) {
		pruebaHash->añadirPersona(people[i]);
	}
	pruebaHash->imprimirTabla();
	cout<<"\nExiste la cédula Danny? = "<<pruebaHash->existeCedula("Danny") << endl;
	cout <<"Obteniendo nombre de la cedula Danny: " << pruebaHash->buscarPersona("Danny")->getNombre()<<endl;
	pruebaHash->modificarPersona("Danny","fuck", "fuck", "fuck", "fuck");
	cout << "Obteniendo nombre de la cedula Danny: " << pruebaHash->buscarPersona("Danny")->getNombre() << endl;
	pruebaHash->imprimirTabla();
	cout << "\nSe va a eliminar la cedula Danny...\n";
	pruebaHash->eliminarPersona("Danny");
	pruebaHash->imprimirTabla();*/

}
