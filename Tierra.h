#ifndef Tierra_H
#define Tierra_H
#include <string>
#include "Persona.h"
#include "Invocacion.h"
#include "Curativos.h"
#include "Poder.h"
#include "Ofensivos.h"
#include "Defensivos.h"
class Tierra :public Persona{
	private:
	string coles;
	int graduacion;
	Poder *poder;

	public:
	Tierra(Poder*,string,int,string,string,string,string);
	Tierra();
  string getColes();
  int getGraduacion();
	Poder *getPoder();
	~Tierra();
};
#endif
