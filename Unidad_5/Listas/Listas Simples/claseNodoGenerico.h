template <class T> 
class NodoGenerico
{
protected:
	T dato;
	NodoGenerico <T>* siguiente;
public:
	NodoGenerico (T t)
	{
		dato = t;
		siguiente = nullptr;
	}
	NodoGenerico (T p, NodoGenerico<T>* n)
	{
		dato = p;
		siguiente = n;
	}
	T datoNodo() const
	{
		return dato;
	}
	NodoGenerico<T>* getSiguiente() const
	{
		return siguiente;
	}
	void setSiguiente(NodoGenerico<T>* sgte)
	{
		this->siguiente = sgte;
	}
};
