#include "Defensivos.h"
#include <string>

Defensivos::Defensivos(){
        this->resistencia;
        this->duracion;
}

  Defensivos::Defensivos(int pDuracion,int pResistencia,string pNombre,int pNivel): Poder(pNombre,pNivel){
        duracion=pDuracion;
        resistencia=pResistencia;

}

int Defensivos::getResistencia(){
  return resistencia;
}

int Defensivos::getDuracion(){
  return duracion;
}
