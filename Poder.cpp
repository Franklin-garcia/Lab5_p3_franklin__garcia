#include "Poder.h"
#include <string>

Poder::Poder(){
        this->nombre;
        this->nivel;

}
Poder::Poder(string pNombre,int pNivel){
        nombre=pNombre;
        nivel=pNivel;
}

string Poder::getNombre(){
  return nombre;
}
int Poder::getNivel(){
  return nivel;
 }
