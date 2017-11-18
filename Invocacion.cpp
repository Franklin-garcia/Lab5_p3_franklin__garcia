#include "Invocacion.h"
#include <string>

Invocacion::Invocacion(){
        this->nombre;
        this->especie;
        this->habilidad;
        this->tipo;

}

  Invocacion::Invocacion(string pName,string pEspecie,string pHabilidad,string pTipo,string pNombre,int pNivel): Poder(pNombre,pNivel){
        nombre=pName;
        especie=pEspecie;
        habilidad=pHabilidad;
        tipo=pTipo;
}
string Invocacion::getEspecie(){
  return especie;
}
string Invocacion::getHabilidad(){
  return habilidad;
}
string Invocacion::getNombre(){
  return nombre;
}

string Invocacion::getTipo(){
  return tipo;
}
