#include <iostream>
using namespace std;

class Nodo{
private:
	int dato;
	Nodo* sig; //Siguiente
public:
	Nodo(int dato){
		this->dato = dato;
		this->sig = nullptr;
	}
	
	void crearNodo(){
		cout << "Ingrese valor: ";
		cin >> dato;
	}
	void setDato(int valor){
		dato = valor;
	}
		
	int getDato(){
		return dato;
	}
	Nodo* getSiguiente(){
		return sig;
	}
	void setSiguiente(Nodo* nuevo){
		sig = nuevo;
	}
};

class Lista{
private:
	Nodo* inicio;
	int cant;
public:
	Lista(){
		inicio = nullptr;
		cant = 0;
	}
	
	bool estaVacia(){
		return inicio == nullptr;
	}
	
	void AgregarInicio(Nodo* nuevo){
		if(estaVacia()){
			inicio = nuevo;
		}
		else{
			nuevo->setSiguiente(inicio);
			inicio = nuevo;
		}
		cant++;
	}
	
	void AgregarFinal(Nodo* nuevo){
		if(estaVacia()){
			inicio = nuevo;
		}
		else{
			Nodo* i = inicio;
			while(i->getSiguiente() != nullptr){
				i = i->getSiguiente();
			}
			i->setSiguiente(nuevo);
		}
		cant++;
	}
		
	void AgregarOrdenado(Nodo* nuevo){
		if(estaVacia()){
			inicio = nuevo;
		}
		else{
			if(nuevo->getDato() < inicio->getDato()){
				nuevo->setSiguiente(inicio);
				inicio = nuevo;
			}
			else{
				Nodo* i = inicio;
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
			Nodo* i = inicio;
			while(i != nullptr){
				cout << i->getDato() << endl;
				i = i->getSiguiente();
			}
		}
	}
		
	Nodo* EliminarInicio(){
		Nodo* borrado;
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
		
	Nodo* EliminarFinal(){
		Nodo* borrado;
		if(inicio == nullptr){
			borrado = nullptr;
		}
		else{
			if(inicio->getSiguiente() == nullptr){
				borrado = inicio;
				inicio = nullptr;
			}
			else{
				Nodo* i = inicio;
				while(i->getSiguiente()->getSiguiente() != nullptr){
					i = i->getSiguiente();
				}
				borrado = i->getSiguiente();
				i->setSiguiente(nullptr);
			}
		}
		return borrado;
	}
		
	Nodo* EliminarNodo(int valor){
		Nodo* borrado;
		if(inicio == nullptr)
			borrado = nullptr;
		else{
			if(valor == inicio->getDato()){
				borrado = EliminarInicio();
			}
			else{
				Nodo* i = inicio;
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

int main() {
	Nodo* nuevo = new Nodo(44);
	Nodo* nuevo2 = new Nodo(16);
	Nodo* nuevo3 = new Nodo(4);
	Lista lista;

	lista.AgregarOrdenado(nuevo);
	lista.AgregarOrdenado(nuevo2);
	lista.AgregarOrdenado(nuevo3);
	
	lista.MostrarLista();
	cout << endl;
	lista.EliminarNodo(4);
		
	lista.MostrarLista();
	return 0;
}

