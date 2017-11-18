#include "Tierra.h"
#include <string>

Tierra::Tierra(){
        this->coles;
        this->graduacion;
}

Tierra::Tierra(Poder *pPoder,string pColes,int pGraduacion,string pNacion,string pNombre,string pEdad,string pSexo):Persona(pNacion,pNombre, pEdad,pSexo){
        coles=pColes;
        graduacion=pGraduacion;
        poder=pPoder;
}

int Tierra::getGraduacion(){
  return graduacion;
}

string Tierra::getColes(){
  return coles;
}
Poder* Tierra::getPoder(){
  return poder;
}
Tierra::~Tierra(){
  delete poder;
}
