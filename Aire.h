#ifndef AIRE_H
#define AIRE_H
#include <string>
#include "Persona.h"
#include "Invocacion.h"
#include "Curativos.h"
#include "Poder.h"
#include "Ofensivos.h"
#include "Defensivos.h"
class Aire :public Persona{
	private:
	string pelo, color;
		Poder *poder;

	public:
	Aire(Poder*,string,string,string,string,string,string);
	Aire();
  string getPelo();
  string getColor();
	Poder *getPoder();
	~Aire();
};
#endif
