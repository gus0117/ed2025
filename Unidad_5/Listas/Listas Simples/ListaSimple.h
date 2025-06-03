#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include "NodoGenerico.h"

template<class T>
class ListaSimple
{
    private:
        NodoGenerico<T>* head;
    public:
        ListaSimple(){
            head = nullptr;
        }

        bool estaVacia() {
            return head == nullptr;
        }

        void agregarInicio(T dato){
            NodoGenerico<T>* nuevoNodo = new NodoGenerico<T>(dato);
            if (estaVacia()) {
                head = nuevoNodo;
            } else {
                nuevoNodo->setSiguiente(head);
                head = nuevoNodo;
            }
        }

        void agregarFinal(T dato){
            NodoGenerico<T>* nuevoNodo = new NodoGenerico<T>(dato);
            if(estaVacia()){
                head = nuevoNodo;
            } else {
                NodoGenerico<T>* current = head;
                while(current->getSiguiente() != nullptr) {
                    current = current->getSiguiente();
                }
                current->setSiguiente(nuevoNodo);
            }
        }

        void mostrarLista(){
            NodoGenerico<T>* current = head;
            while (current != nullptr) {
                std::cout << current->getDato() << " ";
                current = current->getSiguiente();
            }
            std::cout << std::endl;
        }

        ~ListaSimple(){
            NodoGenerico<T>* current = head;
            while (current != nullptr) {
                NodoGenerico<T>* next = current->getSiguiente();
                delete current;
                current = next;
            }
            head = nullptr;
        }
};
#endif