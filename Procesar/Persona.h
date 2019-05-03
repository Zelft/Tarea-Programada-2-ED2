#pragma once
#include "string"
#include <iostream>

using namespace std;

class Persona
{
private:
	string cedula;
	string nombre;
	string apellido;
	string apellido2;
	string fechaNacimiento;
public:
	Persona(string c, string n, string a, string b, string f) { cedula = a, nombre = n, apellido = a, apellido2 = b, fechaNacimiento = f; };
	string getCedula() { return cedula;} 
	string getNombre() { return nombre; }
	string getApellido() { return apellido; }
	string getApellido2() { return apellido2; }
	string getFechaNacimiento() { return fechaNacimiento; }
};

