#ifndef INVOCACION_H
#define INVOCACION_H
#include <string>
#include "Poder.h"
using namespace std;

class Invocacion :public Poder{
	private:
	string nombre;
  string especie;
  string habilidad;
  string tipo;

	public:
	Invocacion(string,string,string,string,string, int);
	Invocacion();

  string getNombre();
  string getEspecie();
  string getHabilidad();
  string getTipo();
};
#endif
