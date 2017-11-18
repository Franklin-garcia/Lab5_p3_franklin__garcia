#ifndef CURATIVOS_H
#define CURATIVOS_H
#include <string>
#include "Poder.h"
using namespace std;

class Curativos :public Poder{
	private:
	string tipo;

	public:
	Curativos(string,string, int);
	Curativos();
  string getTipo();
};
#endif
