#include <iostream>
using namespace std;

const int MAX = 100;

typedef int Contenedor[MAX];
typedef struct Pila{
    Contenedor datos;
    int cima;
};

void initStack(Pila &pila){
    pila.cima = -1; // Inicializa la cima de la pila en -1 (pila vacía)
}

bool isEmptyStack(Pila &pila){
    return pila.cima == -1; // Retorna true si la pila está vacía
}

bool isFullStack(Pila &pila){
    return pila.cima == MAX - 1; // Retorna true si la pila está llena
}

void pushStack(Pila &pila, int nuevo){
    if(isFullStack(pila)){ // Verifica si la pila está llena
        cout << "Pila llena. No se puede agregar el elemento." << endl;
    } else {
        pila.cima++; // Incrementa la cima para agregar el nuevo elemento
        pila.datos[pila.cima] = nuevo; // Agrega el nuevo elemento en la cima
    }
}

int popStack(Pila &pila){
    int aux;
    if(isEmptyStack(pila)){
        aux = -999;
    }
    else{
        aux = pila.datos[pila.cima]; // Guarda el elemento en la cima
        pila.cima--; // Decrementa la cima para eliminar el elemento
    }
    return aux;
}

int topStack(Pila &pila){
    int aux;
    if(isEmptyStack(pila)){
        aux = -999;
    }
    else{
        aux = pila.datos[pila.cima]; // Guarda el elemento en la cima
    }
    return aux;
}

int main(){
    Pila pila;
    initStack(pila); // Inicializa la pila
    pushStack(pila, 2); // Agrega el elemento 2 a la pila
    pushStack(pila, 3); // Agrega el elemento 3 a la pila
    pushStack(pila, 4); // Agrega el elemento 4 a la pila

    int top = topStack(pila); // Obtiene el elemento en la cima de la pila
    cout << "Elemento en la cima: " << top << endl; // Imprime el elemento en la cima

    cout << "Elemento eliminado: " << popStack(pila) << endl; // Elimina el elemento en la cima y lo imprime

    cout << "Elemento en la cima: " << topStack(pila) << endl; // Imprime el nuevo elemento en la cima
    return 0;
}