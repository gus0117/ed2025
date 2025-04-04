#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int* p = &a; // p es un puntero que apunta a la dirección de memoria de a
    cout << "Valor de a: " << a << endl; // Imprime el valor de a
    cout << "Direccion de a: " << &a << endl; // Imprime la dirección de a
    cout << "Valor de p: " << p << endl; // Imprime la dirección de memoria almacenada en p (la dirección de a)
    cout << "Valor apuntado por p: " << *p << endl; // Imprime el valor apuntado por p (el valor de a)
    return 0;
}