#ifndef DEFENSIVOS_H
#define DEFENSIVOS_H
#include <string>
#include "Poder.h"
using namespace std;

class Defensivos :public Poder{
	private:
	int resistencia, duracion;

	public:
	Defensivos(int,int,string, int);
	Defensivos();
  int getResistencia();
  int getDuracion();
};
#endif
