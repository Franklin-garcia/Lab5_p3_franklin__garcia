#include "Persona.h"
#include <string>

Persona::Persona(){
        this->nacion;
        this->nombre;
        this->edad;
        this->sexo;
}

Persona::Persona(string pNacion,string pNombre,string pEdad,string pSexo){
        nacion=pNacion;
        nombre=pNombre;
        edad=pEdad;
        sexo=pSexo;
}

string Persona::getNacion(){
  return nacion;
}

string Persona::getNombre(){
  return nombre;
}

string Persona::getEdad(){
  return edad;
}

string Persona::getSexo(){
  return sexo;
}
