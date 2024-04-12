#include <iostream>
#include <math.h>
#include <iomanip>

/*
    [] declarar variable tipo string Para el dia de la semana;
    [] declarar variable tipo int para la comparacion de dia de la semana con su numero;
    [] configurar el ingreso de dato del usuario;
    [] con una condicion asignarle a la variable del numero del dia el valor segun corresponda;
    [] con un switch comparae el valor guardado en la variable tipo int
    [] mostrar resultado segun comparacion;


*/


using namespace std;

string Dia;



int main(){
    cout << "Dia de la semana: ";
    cin >> Dia;
    int Ndia;
        if (Dia=="Lunes" || Dia=="lunes"){

        Ndia=1;

    } else if(Dia=="Martes" || Dia=="mertes"){

        Ndia=2;
    } else if (Dia=="Miercoles"|| Dia=="miercoles"){


        Ndia=3;
    } else if (Dia=="Jueves" || Dia=="jueves"){


        Ndia=4;
    } else if (Dia=="Viernes"|| Dia=="viernes"){



        Ndia=5;
    } else if (Dia=="Sabado" || Dia=="sabado"){


        Ndia=6;
    } else {

        Ndia=7;
    }
    switch (Ndia){

case 4:
        cout<<"Hoy es jueves tenes programaacion a las 14hs";

    break;


case 5:
    cout << "Hoy es viernes, Tenes progamacion aa las 14hs";
    break;

default:
    cout << "Hoy es " << Dia << " Safamos de programación";
    break;

}

return 0;
}



