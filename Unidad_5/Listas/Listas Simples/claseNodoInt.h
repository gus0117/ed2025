typedef int Dato;
// archivo de cabecera Nodo.h
#ifndef _NODO_H
#define _NODO_H
class Nodo
{
protected:
    Dato dato;
    Nodo* siguiente;
public:
    Nodo(Dato t)
    {
        dato = t;
        siguiente = nullptr; // 0 es el puntero NULL en C++
    }
    Nodo(Dato p, Nodo* n) // crea el nodo y lo enlaza a n
    {
        dato = p;
        siguiente = n;
    }
    Dato getDato() const
    {
        return dato;
    }
    Nodo* getSiguiente() const
    {
        return siguiente;
    }
    void setSiguiente(Nodo* sgte)
    {
        siguiente = sgte;
    }
};
#endif