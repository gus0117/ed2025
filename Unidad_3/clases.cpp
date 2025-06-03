#include <iostream>
using namespace std;

//Una clase es una plantilla para crear objetos. Un objeto es una instancia de una clase.
//Una clase puede contener atributos (variables) y métodos (funciones).
//Una clase es un tipo de dato definido por el usuario.
//Una clase es un tipo de dato que puede contener otros tipos de datos, incluyendo otras clases.

class Racional{
private:
    int numerador;
    int denominador;
public:
    // Constructor
    Racional(int num, int den){
        if(den == 0){
            cout << "Error: denominador no puede ser 0" << endl;
            return; // Salir de la función
        }
        numerador = num;
        denominador = den;
    }

    // Método para sumar dos números racionales
    Racional Sumar(Racional r2){
        int num = numerador * r2.denominador + denominador * r2.numerador;
        int den = denominador * r2.denominador;
        return Racional(num, den);
    }

    // Método para multiplicar dos números racionales
    Racional Producto(Racional r2){
        int num = numerador * r2.numerador;
        int den = denominador * r2.denominador;
        return Racional(num, den);
    }

    // Método para mostrar el número racional
    void Mostrar(){
        cout << numerador << "/" << denominador << endl;
    }
};