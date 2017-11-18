#include "Aire.h"
#include <string>

Aire::Aire(){
        this->pelo;
        this->color;
}

Aire::Aire(Poder *pPoder,string pPelo,string pColor,string pNacion,string pNombre,string pEdad,string pSexo):Persona(pNacion,pNombre, pEdad,pSexo){
        pelo=pPelo;
        color=pColor;
        poder=pPoder;
}

string Aire::getPelo(){
  return pelo;
}

string Aire::getColor(){
  return color;

}
Poder* Aire::getPoder(){
  return poder;
}
Aire::~Aire(){
  delete poder;
}
