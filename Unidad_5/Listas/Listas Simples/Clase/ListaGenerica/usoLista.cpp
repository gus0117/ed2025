#include"Nodo.h"
#include"ListaSimple.h"
#include<bits/stdc++.h>

using namespace std;

int main(){
    Lista<char> lista;
    Nodo<char>* nodo1 = new Nodo<char>('f');
    Nodo<char>* nodo2 = new Nodo<char>('b');
    Nodo<char>* nodo3 = new Nodo<char>('a');

    lista.AgregarOrdenado(nodo1);
    lista.AgregarOrdenado(nodo2);
    lista.AgregarOrdenado(nodo3);

    lista.MostrarLista();

    lista.EliminarInicio();

    cout << "\nLuego de eliminar\n";
    lista.MostrarLista();

    return 0;
}