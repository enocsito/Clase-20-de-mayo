#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int opc_us, ganaste=0,perdiste=0,empate=0;
    do
    {
    int t, a;
    t= time(NULL);
    srand(t);
    a=rand()%3+1;
    cout<<a;
    cout<<"Elija una opcion:\n 1) Piedra\n 2) Papel\n 3) Tijera\n";
    cin>>opc_us;

    switch (a)
    {
    case 1:
        if (opc_us==1)
        {
            cout<<"Empate\n";
            empate=empate+1;
        }
        else if (opc_us==2)
        {
            cout<<"Gano\n";
            ganaste=ganaste+1;
        }
        else if (opc_us==3)
        {
            cout<<"Derrota\n";
            perdiste=perdiste+1;
        }
        else
        cout<<"El juego termino, la computadora eligio"<< a;
    case 2:
        if (opc_us==2)
        {
            cout<<"Empate\n";
            empate=empate+1;
        }
        else if (opc_us==3)
        {
            cout<<"Gano\n";
            ganaste=ganaste+1;
        }
        else if (opc_us==1)
        {
            cout<<"Derrota\n";
            perdiste=perdiste+1;
        }
        else
        cout<<"El juego termino, la computadora eligio"<< a;
    case 3:
        if (opc_us==3)
        {
            cout<<"Empate\n";
            empate=empate+1;
        }
        else if (opc_us==1)
        {
            cout<<"Gano\n";
            ganaste=ganaste+1;
        }
        else if (opc_us==2)
        {
            cout<<"Derrota\n";
            perdiste=perdiste+1;
        }
        else
        cout<<"El juego termino, la computadora eligio"<< a;
        break;

    }

    } 
    while (opc_us !=0);

    cout<<"Has ganado: "<< ganaste << " veces\n";
    cout<<"Has perdido: "<< perdiste << " veces\n";
    cout<<"Has empatado: "<< empate << " veces\n";
    
    return 0;
}