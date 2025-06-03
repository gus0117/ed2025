#include<iostream>
#include "ListaSimple.h"
using namespace std;

int main(){
    ListaSimple<string> lista;
    lista.agregarFinal("Hola");
    lista.agregarFinal("Escuela");
    lista.agregarFinal("De");
    lista.agregarFinal("Minas");

    lista.mostrarLista(); // Debería mostrar: 30 20 10
    return 0;
}