#ifndef OFENSIVOS_H
#define OFENSIVOS_H
#include <string>
#include "Poder.h"
using namespace std;

class Ofensivos :public Poder{
	private:
	int rango, fuerza;

	public:
	Ofensivos(int,int,string, int);
	Ofensivos();
  int getRango();
  int getFuerza();
};
#endif
