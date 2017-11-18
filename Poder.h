#ifndef PODER_H
#define PODER_H
#include <string>
#include <iostream>

using namespace std;

class Poder{
protected:
	string nombre;
  int nivel;
public:
	Poder(string,int);
	Poder();
	 string getNombre();
   int getNivel();

};
#endif
