#include "Ofensivos.h"
#include <string>

Ofensivos::Ofensivos(){
        this->rango;
        this->fuerza;
}

  Ofensivos::Ofensivos(int pRango,int pFuerza,string pNombre,int pNivel): Poder(pNombre,pNivel){
        rango=pRango;
        fuerza=pFuerza;
}

int Ofensivos::getRango(){
  return rango;
}

int Ofensivos::getFuerza(){
  return fuerza;
}
