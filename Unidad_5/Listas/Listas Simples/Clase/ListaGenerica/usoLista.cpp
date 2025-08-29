#include"Nodo.h"
#include"ListaSimple.h"
#include<bits/stdc++.h>

using namespace std;

int main(){

    /*
    Nodo<char>* nodoCaracter = new Nodo<char>('a');
    Nodo<int>* nodoEntero = new Nodo<int>(5);

    cout << "Dato del nodo de tipo char: " << nodoCaracter->getDato() << endl;
    cout << "Dato del nodo de tipo int: " << nodoEntero->getDato() << endl;
    */
    
    Lista<int> lista;
    Nodo<int>* nodo1 = new Nodo<int>(12);
    Nodo<int>* nodo2 = new Nodo<int>(4);
    Nodo<int>* nodo3 = new Nodo<int>(23);

    lista.AgregarOrdenado(nodo1);
    lista.AgregarOrdenado(nodo2);
    lista.AgregarOrdenado(nodo3);

    lista.MostrarLista();

    lista.EliminarInicio();

    cout << "\nLuego de eliminar\n";
    lista.MostrarLista();

    return 0;
}