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
	T getDato() const
	{
		return dato;
	}
	void setDato(T d)
	{
		this->dato = d;
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
