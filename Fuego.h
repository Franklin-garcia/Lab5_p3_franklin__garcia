#ifndef FUEGO_H
#define FUEGO_H
#include <string>
#include "Persona.h"
#include "Invocacion.h"
#include "Curativos.h"
#include "Poder.h"
#include "Ofensivos.h"
#include "Defensivos.h"

class Fuego :public Persona{
	private:
	string cicatrices, victorias;
	Poder *poder;

	public:
	Fuego(Poder*,string,string,string,string,string,string);
	Fuego();
  string getCicatrices();
  string getVictorias();
	Poder *getPoder();
	~Fuego();
};
#endif
