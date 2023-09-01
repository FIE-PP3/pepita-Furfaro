//
// Created by furfa on 30/8/2023.
//

#ifndef PEPITA_FUNCIONES_H
#define PEPITA_FUNCIONES_H
void menu();//Creo la funcion menu
//creo la clase localidad, que va a tener un kilometraje y dos metodos, uno para conseguir el kilometro y otro para
//calcular la distancia entre localidades
class Localidad{
private:
    int kilometro;
public:
    Localidad( int km); // Declaración del constructor
    int distancia( int aux) const;
    int getKilometro() const;
};
//Creo a pepita
class Pepita{
private :
    double energia; //Pepita tiene una energia que usa para viajar
    int ubicacionActual;//Pepita tiene una ubicacion

public:
    Pepita();//declaro el constructor
    void viajar(double distancia_km,int nueva); //metodo para viajar
    void comer(double gramos);//metodo para comer
    void estadoActual()const;//metodo para ver el estado actual
    int getUbic() const;//metodo para conseguir la ubicacion actual

};


#endif //PEPITA_FUNCIONES_H
