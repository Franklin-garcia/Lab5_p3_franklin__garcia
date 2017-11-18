#include "Curativos.h"
#include <string>

Curativos::Curativos(){
        this->tipo;
}

  Curativos::Curativos(string pTipo,string pNombre,int pNivel): Poder(pNombre,pNivel){
        tipo=pTipo;
}

string Curativos::getTipo(){
  return tipo;
}
