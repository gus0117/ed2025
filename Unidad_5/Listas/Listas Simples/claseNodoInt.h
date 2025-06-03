typedef int Dato;
// archivo de cabecera Nodo.h
#ifndef _NODO_H
#define _NODO_H
class Nodo
{
protected:
    Dato dato;
    Nodo* enlace;
public:
    Nodo(Dato t)
    {
        dato = t;
        enlace = nullptr; // 0 es el puntero NULL en C++
    }
    Nodo(Dato p, Nodo* n) // crea el nodo y lo enlaza a n
    {
        dato = p;
        enlace = n;
    }
    Dato datoNodo() const
    {
        return dato;
    }
    Nodo* enlaceNodo() const
    {
        return enlace;
    }
    void ponerEnlace(Nodo* sgte)
    {
        enlace = sgte;
    }
};
#endif