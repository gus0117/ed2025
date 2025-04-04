#include <iostream>
using namespace std;

typedef struct Nodo{
    int dato;
    Nodo* siguiente;
};


//Inicializa una pila de datos con el puntero == NULL
void initStack(Nodo*& cimaPila){
    cimaPila = NULL; // Tambien se puede incializar en nullptr
}

// Si es true significa que la pila esta vacia
bool isEmptyStack(Nodo* cimaPila){
    return cimaPila == NULL;
}

// Agrega un nuevo elemento en la pila
void pushStack(Nodo*& cimaPila, int nuevo){
    Nodo* nuevoNodo = new Nodo; // Se crea un nuevo nodo
    nuevoNodo->dato = nuevo; // Se guarda el valor en el nuevo nodo
    nuevoNodo->siguiente = cimaPila; // Se conecta el nodo en la cima
    cimaPila = nuevoNodo; // Se cambia la cima de la pila al nuevo nodo agregado
}

// Quita un elemento de la cima de la pila
Nodo popStack(Nodo*& cimaPila){
    Nodo* aux;
    if(isEmptyStack(cimaPila)){
        aux = nullptr;
    }
    else{
        aux = cimaPila;
        cimaPila = cimaPila->siguiente;
        aux->siguiente = NULL;
    }
    return *aux; // Se retorna el dato del nodo eliminado
}

// Retorna el elemento en la cima de la pila
Nodo topStack(Nodo* cimaPila){
    Nodo* aux = new Nodo;
    if(isEmptyStack(cimaPila)){
        aux = NULL;
    }
    else{
        aux = cimaPila;
    }
    return *aux;
}

int main(){
    Nodo* pila;
    initStack(pila);
    pushStack(pila, 2);
    pushStack(pila, 3);
    pushStack(pila, 4);
    
    cout << topStack(pila).dato << endl; // Muestra 4
    
    cout << popStack(pila).dato << endl; // Muestra 4
    cout << popStack(pila).dato << endl; // Muestra 3
    cout << popStack(pila).dato << endl; // Muestra 2
    return 0;
}