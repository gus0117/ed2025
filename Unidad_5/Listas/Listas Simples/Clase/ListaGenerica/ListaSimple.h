#ifndef LISTA_H
#define LISTA_H
#include<bits/stdc++.h>
#include "ListaSimple.h"
using namespace std;

template<typename T>
class Lista{
private:
    Nodo<T>* inicio;
    int cant;
public:
	Lista(){
		inicio = nullptr;
		cant = 0;
	}

	bool estaVacia(){
		return inicio == nullptr;
	}

	void AgregarInicio(Nodo<T>* nuevo){
		if(estaVacia()){
			inicio = nuevo;
		}
		else{
			nuevo->setSiguiente(inicio);
			inicio = nuevo;
		}
		cant++;
	}

	void AgregarFinal(Nodo<T>* nuevo){
		if(estaVacia()){
			inicio = nuevo;
		}
		else{
			Nodo<T>* i = inicio;
			while(i->getSiguiente() != nullptr){
				i = i->getSiguiente();
			}
			i->setSiguiente(nuevo);
		}
		cant++;
	}

	void AgregarOrdenado(Nodo<T>* nuevo){
		if(estaVacia()){
			inicio = nuevo;
		}
		else{
			if(nuevo->getDato() < inicio->getDato()){
				nuevo->setSiguiente(inicio);
				inicio = nuevo;
			}
			else{
				Nodo<T>* i = inicio;
				while(i->getSiguiente() != nullptr && i->getSiguiente()->getDato() < nuevo->getDato()){
					i = i->getSiguiente();
				}
				nuevo->setSiguiente(i->getSiguiente());
				i->setSiguiente(nuevo);
			}
		}
		cant++;
	}

	void MostrarLista(){
		if(estaVacia()){
			cout << "Lista vacia" << endl;
		}
		else{
			Nodo<T>* i = inicio;
			while(i != nullptr){
				cout << i->getDato() << endl;
				i = i->getSiguiente();
			}
		}
	}

	Nodo<T>* EliminarInicio(){
		Nodo<T>* borrado;
		if(inicio == nullptr){
			borrado = nullptr;
		}
		else{
			borrado = inicio;
			inicio = inicio->getSiguiente();
			borrado->setSiguiente(nullptr);
		}
		return borrado;
	}

	Nodo<T>* EliminarFinal(){
		Nodo<T>* borrado;
		if(inicio == nullptr){
			borrado = nullptr;
		}
		else{
			if(inicio->getSiguiente() == nullptr){
				borrado = inicio;
				inicio = nullptr;
			}
			else{
				Nodo<T>* i = inicio;
				while(i->getSiguiente()->getSiguiente() != nullptr){
					i = i->getSiguiente();
				}
				borrado = i->getSiguiente();
				i->setSiguiente(nullptr);
			}
		}
		return borrado;
	}

	Nodo<T>* EliminarNodo(int valor){
		Nodo<T>* borrado;
		if(inicio == nullptr)
			borrado = nullptr;
		else{
			if(valor == inicio->getDato()){
				borrado = EliminarInicio();
			}
			else{
				Nodo<T>* i = inicio;
				while(i->getSiguiente() != nullptr && i->getSiguiente()->getDato() != valor){
					i = i->getSiguiente();
				}
				borrado = i->getSiguiente();
				i->setSiguiente(borrado->getSiguiente());
				borrado->setSiguiente(nullptr);
			}
		}
	}
};

#endif // LISTA SIMPLE