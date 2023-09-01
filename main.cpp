#include <iostream>
#include "funciones.h"
using namespace std;

int main() {

    Pepita pepi;//Creo a Pepita
    Localidad caba(0);//Creo distintas localidades a donde puede viajar pepita
    Localidad VLO(8);
    Localidad SI(14);
    Localidad SF(22);
    Localidad Tigre(28);
    int distanciaAViajar,nuevaPos,pos;//Estas dos variables me van a servir como auxiliares para guardar valores
    double comer;//estas van a ser las variables de cuanto vuele o coma pepita
    char resp;//almacena la respuesta de a donde quiere que viaje pepita
    int respuesta;//respuesta del ususario de que quiere hacer
    //el bucle es para que el usuario ejecute el programa
    menu();//Un menu para elegir que hacer con pepita
    do{
     cin>>respuesta;
     if(respuesta==1){
         cout<<"Cuanto comio pepeita en gm: "<<endl;//lo utilizo para cuanto quiero que recupere pepita de energia
         cin>>comer;
         pepi.comer(comer); //llamo al metodo comer de la clase Pepita
     } else if(respuesta==2){//en caso de haber elegido que pepita viaje le pido que me diga a donde quiere que viaje
         cout<<"A donde desea enviar un mensaje?\na)CABA\nb)Vicente lopez\nc)San Isidro\nd)San Fernando\ne)Tigre"<<endl;
         cin>>resp;
         pos=pepi.getUbic();//consigo la ubicacion actual de pepita
         if ((resp=='a' && pos==0) || (resp=='b' && pos==8) || (resp=='c' && pos==14) || (resp=='d' && pos==22) || (resp=='e' && pos==28)){
             cout<<"Pepita se encuentra en esa ubicacion"<<endl;// con esto comparo la posicion actual con las posiciones de las distintas localidades,
             //si coinciden quiere decir que se encuentra en esa ubicacion y que por eso no puede viajar a ese lugar.
         } else if (resp=='a'){//Lo explico aca y se aplica en todos los demas casos
             distanciaAViajar=caba.distancia(pos);//tomo la distancia que tiene que vaiajar pepita
             nuevaPos=caba.getKilometro();//Obtengo el kilometro que en el que esta la localidad a donde va a viajar
             pepi.viajar(distanciaAViajar,nuevaPos);// pepita viaja
         }else if (resp=='b') {
             distanciaAViajar = VLO.distancia(pos);
             nuevaPos=VLO.getKilometro();
             pepi.viajar(distanciaAViajar,nuevaPos);
         }else if (resp=='c') {
             distanciaAViajar = SI.distancia(pos);
             nuevaPos=SI.getKilometro();
             pepi.viajar(distanciaAViajar,nuevaPos);
         }else if (resp=='d') {
             distanciaAViajar = SF.distancia(pos);
             nuevaPos=SF.getKilometro();
             pepi.viajar(distanciaAViajar,nuevaPos);
         }else if (resp=='e') {
             distanciaAViajar = Tigre.distancia(pos);
             nuevaPos=Tigre.getKilometro();
             pepi.viajar(distanciaAViajar,nuevaPos);
         }

     } else if (respuesta==3){
         pepi.estadoActual(); //muestra el estado actual de de pepita
     } else if(respuesta !=4){
         cout<<"Respuesta erronea"<<endl; // en caso de que se elija un numero que no este en las opciones del menu
         cin>>respuesta;
     }
     menu();
    }while (respuesta!=4);
    return 0;
}
