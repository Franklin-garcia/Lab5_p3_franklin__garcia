#include "Agua.h"
#include <string>

using namespace std;

Agua::Agua():Persona(){
        this->tribu;
        this->arma;
        this->poder;
}

Agua::Agua(Poder *pPoder,string pTribu,string pArma,string pNacion,string pNombre,string pEdad,string pSexo):Persona(pNacion,pNombre, pEdad,pSexo){
        tribu=pTribu;
        arma=pArma;
        poder=pPoder;
}

string Agua::getTribu(){
  return tribu;
}

string Agua::getArma(){
  return arma;
}

Poder* Agua::getPoder(){
  return poder;
}
Agua::~Agua(){
  delete poder;
}
