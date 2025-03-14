#include <iostream>

using namespace std;

struct tracional{
    int numerador;
    int denominador;
};

void CrearRacional(tracional &r, int numerador, int denominador){
    if(denominador == 0){
        cout << "Error: denominador no puede ser 0" << endl;
        return;
    }
    r.numerador = numerador;
    r.denominador = denominador;
}

void Sumar(tracional r1, tracional r2, tracional &r3){
    r3.numerador = r1.numerador * r2.denominador + r1.denominador * r2.numerador;
    r3.denominador = r1.denominador * r2.denominador;
}

void Producto(tracional r1, tracional r2, tracional &r3){
    r3.numerador = r1.numerador * r2.numerador;
    r3.denominador = r1.denominador * r2.denominador;
}

void MostrarRacional(tracional r){
    cout << r.numerador << "/" << r.denominador << endl;
}

int main(){
    
    return 0;
}