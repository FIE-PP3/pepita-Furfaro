//
// Created by furfa on 30/8/2023.
//
#include <iostream>
using namespace std;
#include "funciones.h"

void menu() {
    cout<<"Usted controla a pepita: \n Seleccione una accion:\n1-Comer\n2-Viajar\n3-Mostrar laenergia acutal\n4-Para finalizar\n"<<endl;
}

Localidad::Localidad( int km) :  kilometro(km) {}

int Localidad::distancia(int aux) const {
    if(aux<kilometro)
        return kilometro-aux;
    else
        return aux-kilometro;
}

int Localidad::getKilometro() const{
    return kilometro;
}

Pepita:: Pepita(){
    energia=10.0;
    ubicacionActual=0;
}
void Pepita::  viajar(double distancia_km,int nueva){
    if(distancia_km>energia)
    {
        cout<<"Pepita no tiene energia para viajar esa distancia de "<<distancia_km<<endl;
    } else {
        energia = energia - 10.0 - (distancia_km * 1);
        cout<<"Pepita volo "<<distancia_km<<" efectivamente"<<endl;
        ubicacionActual=nueva;
    }
}
void Pepita::  comer(double gramos){
    double  ganancia=gramos*4;
    energia+=ganancia;
    cout<<"Piopta comio "<< gramos<<" gramos y gano "<<ganancia<<" Jouls"<<endl;
}
void Pepita::  estadoActual()const{
    cout << "La ubicacion actual de pepita es el " << ubicacionActual << " km" << endl;
    cout<<"La energia de pepita son "<<energia<<" Jouls"<<endl;

}

int Pepita::getUbic() const {
    return ubicacionActual;
}





