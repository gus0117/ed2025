#ifndef NODO_H
#define NODO_H

template<typename T>
class Nodo{
private:
	T dato;
	Nodo* sig; //Siguiente
public:
	Nodo(T dato){
		this->dato = dato;
		this->sig = nullptr;
	}
	void setDato(T valor){
		dato = valor;
	}

	T getDato(){
		return dato;
	}
	Nodo* getSiguiente(){
		return sig;
	}
	void setSiguiente(Nodo* nuevo){
		sig = nuevo;
	}
};

#endif // NODO