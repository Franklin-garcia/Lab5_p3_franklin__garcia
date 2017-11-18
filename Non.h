#ifndef NON_H
#define NON_H
#include <string>
#include "Persona.h"

class Non :public Persona{
	private:
	string trabajo, fuerza,velocidad;

	public:
	Non(string,string,string,string,string,string,string);
	Non();

  string getTrabajo();
  string getFuerza();
  string getVelocidad();
};
#endif
