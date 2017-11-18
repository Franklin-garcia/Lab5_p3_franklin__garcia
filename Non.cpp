#include "Non.h"
#include <string>

Non::Non(){
        this->trabajo;
        this->fuerza;
        this->velocidad;
}

Non::Non(string pTrabajo ,string pFuerza,string pVelocidad,string pNacion,string pNombre,string pEdad,string pSexo):Persona(pNacion,pNombre, pEdad,pSexo){
        trabajo=pTrabajo;
        fuerza=pFuerza;
        velocidad=pVelocidad;
}

string Non::getTrabajo(){
  return trabajo;
}

string Non::getFuerza(){
  return fuerza;
}

string Non::getVelocidad(){
  return velocidad;
}
