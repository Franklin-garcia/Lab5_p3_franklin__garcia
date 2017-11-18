#ifndef AGUA_H
#define AGUA_H
#include <string>
#include "Persona.h"
#include "Invocacion.h"
#include "Curativos.h"
#include "Poder.h"
#include "Ofensivos.h"
#include "Defensivos.h"
using namespace std;

class Agua :public Persona{
	private:
	string tribu, arma;
	Poder *poder;

	public:
	Agua(Poder*,string,string,string,string,string,string);
	Agua();
  string getTribu();
  string getArma();
	Poder *getPoder();
	~Agua();
};
#endif
