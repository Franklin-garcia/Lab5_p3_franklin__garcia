#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>

using namespace std;

class Persona{
protected:
	string nacion;
	string nombre;
	string edad;
	string sexo;
public:
	Persona(string,string,string,string);
	Persona();
	 string getNacion();
   string getNombre();
   string getEdad();
   string getSexo();
};
#endif
