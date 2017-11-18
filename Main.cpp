#include <iostream>
#include "Aire.h"
#include "Fuego.h"
#include "Agua.h"
#include "Tierra.h"
#include "Non.h"
#include "Persona.h"
#include "Invocacion.h"
#include "Curativos.h"
#include "Poder.h"
#include "Ofensivos.h"
#include "Defensivos.h"
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void es(vector<Agua>,vector<Fuego>,vector<Tierra>,vector<Aire>);

int main(){
bool seguir=true;
vector<Agua*>aguas;
vector<Fuego*>fuegos;
vector<Tierra*>tierras;
vector<Aire*>aires;
int opcion1,opcion2;
while(seguir){
  cout<<"Ingrese opcion"<<endl<<"1-Agregar"<<endl<<"2-Listar"<<endl
  <<"3-Eliminar"<<endl<<"4-Guardar en archivos de texto"<<endl<<"5-Salir"<<endl;
  cin>>opcion1;
switch(opcion1){
  case 1:{
    cout<<"1-Maestro de aire"<<endl<<"2-Maestro de agua"<<endl<<"3-Maestro de Fuego"<<endl
        <<"4-Maestro de Tierra"<<endl;
        cin>>opcion2;
        switch(opcion2){
          case 1:{
            //string pPelo,string pColor,string pNacion,string pNombre,string pEdad,string pSexo
            cout<<"Pelo"<<endl;
            string pelo;
            cin>>pelo;
            cout<<"Color"<<endl;
            string color;
            cin>>color;
///
            cout<<"Nacion"<<endl;
            string nacion;
            cin>>nacion;
            cout<<"Nombre"<<endl;
            string nombre;
            cin>>nombre;
            cout<<"Edad"<<endl;
            string edad;
            cin>>edad;
            cout<<"Sexo"<<endl;
            string sexo;
            cin>>sexo;
            cout<<"Ingrese opcion para poder"<<endl<<"1-Ofensivos"<<endl<<"2-Defensivos"<<endl
            <<"3-Curativos"<<endl<<"4-Invocacion"<<endl;
            int op;
            cin>>op;
            if(op==1){//ofensivos
              //int pRango,int pFuerza,string pNombre,int pNivel
              cout<<"rango"<<endl;
              int rango;
              cin>>rango;
              cout<<"Fuerza"<<endl;
              int fuerza;
              cin>>fuerza;
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Ofensivos *of=new Ofensivos(rango,fuerza,nombre,nivel);
              aires.push_back(new Aire(of,pelo,color,nacion,nombre,edad,sexo));
            }else if(op==2){//Defensivos
              //int pDuracion,int pResistencia,string pNombre,int pNivel
              cout<<"Duracion"<<endl;
              int duracion;
              cin>>duracion;
              cout<<"Resistencia"<<endl;
              int resistencia;
              cin>>resistencia;
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Defensivos *def=new Defensivos(duracion,resistencia,nombre,nivel);
              aires.push_back(new Aire(def,pelo,color,nacion,nombre,edad,sexo));
            }else if(op==3){//curativos
              //string pTipo,string pNombre,int pNivel
              cout<<"Tipo de curacion"<<endl<<"1-Golpes"<<endl<<"2-cortadas"<<endl<<"3-quemaduras"<<endl;
              int oo;
              cin>>oo;
              string tipo;

              if(oo==1){
                tipo="Golpes";
              }else if(oo==2){
                tipo="cortadas";
              }else if(oo==3){
                tipo="Quemaduras";
              }
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Curativos *cu=new Curativos(tipo,nombre,nivel);
              aires.push_back(new Aire(cu,pelo,color,nacion,nombre,edad,sexo));
            }else if(op==4){//invocacion
              //string pName,string pEspecie,string pHabilidad,string pTipo,string pNombre,int pNivel
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Especie"<<endl;
              string especie;
              cin>>especie;
              cout<<"habilidad"<<endl;
              string habilidad;
              cin>>habilidad;
              cout<<"Tipo 1-guerra 2- mascota"<<endl;
              string tipo;
              int ii;
              if(ii==1){
                tipo="guerra";
              }else if(ii==2){
                tipo="mascota";
              }
              cout<<"Nombre"<<endl;
              string name;
              cin>>name;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Invocacion *in=new Invocacion(nombre,especie,habilidad,tipo,name,nivel);
              aires.push_back(new Aire(in ,pelo,color,nacion,nombre,edad,sexo));
            }
            cout<<"Creado"<<endl;
          }break;
          case 2:{//Agua
            cout<<"Tribu"<<endl;
            string tribu;
            cin>>tribu;
            cout<<"Arma"<<endl;
            string arma;
            cin>>arma;

            cout<<"Nacion"<<endl;
            string nacion;
            cin>>nacion;
            cout<<"Nombre"<<endl;
            string nombre;
            cin>>nombre;
            cout<<"Edad"<<endl;
            string edad;
            cin>>edad;
            cout<<"Sexo"<<endl;
            string sexo;
            cin>>sexo;
            cout<<"Ingrese opcion para poder"<<endl<<"1-Ofensivos"<<endl<<"2-Defensivos"<<endl
            <<"3-Curativos"<<endl<<"4-Invocacion"<<endl;
            int op;
            cin>>op;
            if(op==1){//ofensivos
              //int pRango,int pFuerza,string pNombre,int pNivel
              cout<<"rango"<<endl;
              int rango;
              cin>>rango;
              cout<<"Fuerza"<<endl;
              int fuerza;
              cin>>fuerza;
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Ofensivos *of=new Ofensivos(rango,fuerza,nombre,nivel);
              aguas.push_back(new Agua(of,tribu,arma,nacion,nombre,edad,sexo));
            }else if(op==2){//Defensivos
              //int pDuracion,int pResistencia,string pNombre,int pNivel
              cout<<"Duracion"<<endl;
              int duracion;
              cin>>duracion;
              cout<<"Resistencia"<<endl;
              int resistencia;
              cin>>resistencia;
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Defensivos *def=new Defensivos(duracion,resistencia,nombre,nivel);
              aguas.push_back(new Agua(def,tribu,arma,nacion,nombre,edad,sexo));
            }else if(op==3){//curativos
              //string pTipo,string pNombre,int pNivel
              cout<<"Tipo de curacion"<<endl<<"1-Golpes"<<endl<<"2-cortadas"<<endl<<"3-quemaduras"<<endl;
              int oo;
              cin>>oo;
              string tipo;

              if(oo==1){
                tipo="Golpes";
              }else if(oo==2){
                tipo="cortadas";
              }else if(oo==3){
                tipo="Quemaduras";
              }
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Curativos *cu=new Curativos(tipo,nombre,nivel);
              aguas.push_back(new Agua(cu,tribu,arma,nacion,nombre,edad,sexo));
            }else if(op==4){//invocacion
              //string pName,string pEspecie,string pHabilidad,string pTipo,string pNombre,int pNivel
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Especie"<<endl;
              string especie;
              cin>>especie;
              cout<<"habilidad"<<endl;
              string habilidad;
              cin>>habilidad;
              cout<<"Tipo 1-guerra 2- mascota"<<endl;
              string tipo;
              int ii;
              if(ii==1){
                tipo="guerra";
              }else if(ii==2){
                tipo="mascota";
              }
              cout<<"Nombre"<<endl;
              string name;
              cin>>name;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Invocacion *in=new Invocacion(nombre,especie,habilidad,tipo,name,nivel);
              aguas.push_back(new Agua(in ,tribu,arma,nacion,nombre,edad,sexo));
            }
            cout<<"Creado"<<endl;

          //Poder *pPoder,string pTribu,string pArma,string pNacion,string pNombre,string pEdad,string pSexo
          }break;
          case 3:{//fuegos
            //Poder *pPoder,string pCicatrices,string pVictorias,string pNacion,string pNombre,string pEdad,string pSexo
            cout<<"Cicatrices"<<endl;
            string cicatrices;
            cin>>cicatrices;
            cout<<"Victorias"<<endl;
            string victorias;
            cin>>victorias;

            cout<<"Nacion"<<endl;
            string nacion;
            cin>>nacion;
            cout<<"Nombre"<<endl;
            string nombre;
            cin>>nombre;
            cout<<"Edad"<<endl;
            string edad;
            cin>>edad;
            cout<<"Sexo"<<endl;
            string sexo;
            cin>>sexo;
            cout<<"Ingrese opcion para poder"<<endl<<"1-Ofensivos"<<endl<<"2-Defensivos"<<endl
            <<"3-Curativos"<<endl<<"4-Invocacion"<<endl;
            int op;
            cin>>op;
            if(op==1){//ofensivos
              //int pRango,int pFuerza,string pNombre,int pNivel
              cout<<"rango"<<endl;
              int rango;
              cin>>rango;
              cout<<"Fuerza"<<endl;
              int fuerza;
              cin>>fuerza;
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Ofensivos *of=new Ofensivos(rango,fuerza,nombre,nivel);
              fuegos.push_back(new Fuego(of,cicatrices,victorias,nacion,nombre,edad,sexo));
            }else if(op==2){//Defensivos
              //int pDuracion,int pResistencia,string pNombre,int pNivel
              cout<<"Duracion"<<endl;
              int duracion;
              cin>>duracion;
              cout<<"Resistencia"<<endl;
              int resistencia;
              cin>>resistencia;
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Defensivos *def=new Defensivos(duracion,resistencia,nombre,nivel);
              fuegos.push_back(new Fuego(def,cicatrices,victorias,nacion,nombre,edad,sexo));
            }else if(op==3){//curativos
              //string pTipo,string pNombre,int pNivel
              cout<<"Tipo de curacion"<<endl<<"1-Golpes"<<endl<<"2-cortadas"<<endl<<"3-quemaduras"<<endl;
              int oo;
              cin>>oo;
              string tipo;

              if(oo==1){
                tipo="Golpes";
              }else if(oo==2){
                tipo="cortadas";
              }else if(oo==3){
                tipo="Quemaduras";
              }
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Curativos *cu=new Curativos(tipo,nombre,nivel);
              fuegos.push_back(new Fuego(cu,cicatrices,victorias,nacion,nombre,edad,sexo));
            }else if(op==4){//invocacion
              //string pName,string pEspecie,string pHabilidad,string pTipo,string pNombre,int pNivel
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Especie"<<endl;
              string especie;
              cin>>especie;
              cout<<"habilidad"<<endl;
              string habilidad;
              cin>>habilidad;
              cout<<"Tipo 1-guerra 2- mascota"<<endl;
              string tipo;
              int ii;
              if(ii==1){
                tipo="guerra";
              }else if(ii==2){
                tipo="mascota";
              }
              cout<<"Nombre"<<endl;
              string name;
              cin>>name;
              cout<<"Nivel"<<endl;
              int nivel;
              cin>>nivel;
              Invocacion *in=new Invocacion(nombre,especie,habilidad,tipo,name,nivel);
              fuegos.push_back(new Fuego(in ,cicatrices,victorias,nacion,nombre,edad,sexo));
            }
            cout<<"Creado"<<endl;


          }break;
          case 4:{//tierra
            //Poder *pPoder,string pColes,int pGraduacion,string pNacion,string pNombre,string pEdad,string pSexo
              cout<<"Coles"<<endl;
              string coles;
              cin>>coles;
              cout<<"Graducacion"<<endl;
              int graduacion;
              cin>>graduacion;
              while(graduacion>20){
                cout<<"GRaduacion erronea mayyor a 20"<<endl;
                cin>>graduacion;
              }

              cout<<"Nacion"<<endl;
              string nacion;
              cin>>nacion;
              cout<<"Nombre"<<endl;
              string nombre;
              cin>>nombre;
              cout<<"Edad"<<endl;
              string edad;
              cin>>edad;
              cout<<"Sexo"<<endl;
              string sexo;
              cin>>sexo;
              cout<<"Ingrese opcion para poder"<<endl<<"1-Ofensivos"<<endl<<"2-Defensivos"<<endl
              <<"3-Curativos"<<endl<<"4-Invocacion"<<endl;
              int op;
              cin>>op;
              if(op==1){//ofensivos
                //int pRango,int pFuerza,string pNombre,int pNivel
                cout<<"rango"<<endl;
                int rango;
                cin>>rango;
                cout<<"Fuerza"<<endl;
                int fuerza;
                cin>>fuerza;
                cout<<"Nombre"<<endl;
                string nombre;
                cin>>nombre;
                cout<<"Nivel"<<endl;
                int nivel;
                cin>>nivel;
                Ofensivos *of=new Ofensivos(rango,fuerza,nombre,nivel);
                tierras.push_back(new Tierra(of,coles,graduacion,nacion,nombre,edad,sexo));
              }else if(op==2){//Defensivos
                //int pDuracion,int pResistencia,string pNombre,int pNivel
                cout<<"Duracion"<<endl;
                int duracion;
                cin>>duracion;
                cout<<"Resistencia"<<endl;
                int resistencia;
                cin>>resistencia;
                cout<<"Nombre"<<endl;
                string nombre;
                cin>>nombre;
                cout<<"Nivel"<<endl;
                int nivel;
                cin>>nivel;
                Defensivos *def=new Defensivos(duracion,resistencia,nombre,nivel);
                tierras.push_back(new Tierra(def,coles,graduacion,nacion,nombre,edad,sexo));
              }else if(op==3){//curativos
                //string pTipo,string pNombre,int pNivel
                cout<<"Tipo de curacion"<<endl<<"1-Golpes"<<endl<<"2-cortadas"<<endl<<"3-quemaduras"<<endl;
                int oo;
                cin>>oo;
                string tipo;

                if(oo==1){
                  tipo="Golpes";
                }else if(oo==2){
                  tipo="cortadas";
                }else if(oo==3){
                  tipo="Quemaduras";
                }
                cout<<"Nombre"<<endl;
                string nombre;
                cin>>nombre;
                cout<<"Nivel"<<endl;
                int nivel;
                cin>>nivel;
                Curativos *cu=new Curativos(tipo,nombre,nivel);
                tierras.push_back(new Tierra(cu,coles,graduacion,nacion,nombre,edad,sexo));
              }else if(op==4){//invocacion
                //string pName,string pEspecie,string pHabilidad,string pTipo,string pNombre,int pNivel
                cout<<"Nombre"<<endl;
                string nombre;
                cin>>nombre;
                cout<<"Especie"<<endl;
                string especie;
                cin>>especie;
                cout<<"habilidad"<<endl;
                string habilidad;
                cin>>habilidad;
                cout<<"Tipo 1-guerra 2- mascota"<<endl;
                string tipo;
                int ii;
                if(ii==1){
                  tipo="guerra";
                }else if(ii==2){
                  tipo="mascota";
                }
                cout<<"Nombre"<<endl;
                string name;
                cin>>name;
                cout<<"Nivel"<<endl;
                int nivel;
                cin>>nivel;
                Invocacion *in=new Invocacion(nombre,especie,habilidad,tipo,name,nivel);
                tierras.push_back(new Tierra(in ,coles,graduacion,nacion,nombre,edad,sexo));
              }
              cout<<"Creado"<<endl;
          }break;
        }//fin del switch

  }break;
  case 2:{//listar
      cout<<"Listar 1-aire 2-tierra 3-agua 4-fuego"<<endl;
      int o;
      cin>>o;
      if(o==1){
        for(int i=0;i<aires.size();i++){
          cout<<aires[i]<<endl;
        }
      }else if(o==2){
        for(int i=0;i<tierras.size();i++){
          cout<<tierras[i]<<endl;
        }
      }else if(o==3){
        for(int i=0;i<aguas.size();i++){
          cout<<aguas[i]<<endl;
        }
      }else if(o==4){
        for(int i=0;i<fuegos.size();i++){
          cout<<fuegos[i]<<endl;
        }
      }
    }
  case 3:{

  } break;
}//fin del switch

}//fin de while seguir

  while(aires.size()!=0){
    aires.pop_back();
  }
  while(aguas.size()!=0){
    aguas.pop_back();
  }
  while(tierras.size()!=0){
    tierras.pop_back();
  }
  while(aires.size()!=0){
    tierras.pop_back();
  }

return 0;
}//fin del main



void es(vector<Agua> v1,vector<Fuego> v2,vector<Tierra> v3, vector<Aire> v4){//escribir texto
        ofstream archivo;
        archivo.open("prueba.txt",ios::out);//Abriendo o creando el archivo
        if(archivo.fail()){
                cout<<"Hubo un error";
        }
        /*archivo<<v1;
        archivo<<v2;
        archivo<<v3;
        archivo<<v4;*/
        cout<<"creado";
        archivo.close();
}
