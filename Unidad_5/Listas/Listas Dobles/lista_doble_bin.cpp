#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>

using namespace std;

typedef struct tnodo *pnodo;
typedef struct tnodo{
                    int dato;
                    pnodo sig;
                    pnodo ant;
                    };
typedef struct tlista{
                    pnodo inicio;
                    pnodo fin;
                    };

void IniciarLista(tlista &lista)
{
    lista.inicio = NULL;
    lista.fin = NULL;
}

void CrearNodo(pnodo &nuevo, int valor)
{
    nuevo = new tnodo;
    if(nuevo != NULL)
    {
        nuevo -> dato = valor;
        nuevo -> sig = NULL;
        nuevo -> ant = NULL;
    }
}

void AgregarInicio(tlista &lista, pnodo nuevo)
{
    if(lista.inicio == NULL){
        lista.inicio = nuevo;
        lista.fin = nuevo;
    }
    else{
        nuevo->sig = lista.inicio;
        lista.inicio->ant = nuevo;
        lista.inicio = nuevo;
    }
}

void AgregarFinal(tlista &lista, pnodo nuevo){
    if(lista.inicio == NULL){
        lista.inicio = nuevo;
        lista.fin = nuevo;
    }
    else{
        lista.fin->sig = nuevo;
        nuevo->ant = lista.fin;
        lista.fin = nuevo;
    }
}

void obtenerBinario(int a){
    int r;
    tlista lista;
    IniciarLista(lista);

    pnodo nuevo;
    while(a > 0){
        r = a % 2;
        CrearNodo(nuevo, r);
        AgregarFinal(lista, nuevo);
        a = a / 2;
    }
    for(pnodo i=lista.fin; i != NULL; i=i->ant){
        cout << i->dato;
    }
    cout<<endl;
}

main()
{
    obtenerBinario(117);
    return 0;
}
