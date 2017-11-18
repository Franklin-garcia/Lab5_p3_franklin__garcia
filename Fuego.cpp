#include "Fuego.h"
#include <string>

Fuego::Fuego(){
        this->cicatrices;
        this->victorias;
}

Fuego::Fuego(Poder *pPoder,string pCicatrices,string pVictorias,string pNacion,string pNombre,string pEdad,string pSexo):Persona(pNacion,pNombre, pEdad,pSexo){
        cicatrices=pCicatrices;
        victorias=pVictorias;
        poder=pPoder;
}

string Fuego::getCicatrices(){
  return cicatrices;
}

string Fuego::getVictorias(){
  return victorias;
}
Poder* Fuego::getPoder(){
  return poder;
}
Fuego::~Fuego(){
  delete poder;
}
