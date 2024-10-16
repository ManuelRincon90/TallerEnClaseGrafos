/*****************************************************************************************************************************
Fecha: 16 octubre 2024
Autor: Manuel Rincon
Tema: Taller Grafos Clase 1
Estructuras de datos
******************************************************************************************************************************/

#ifndef GRAFO_H
#define GRAFO_H

#include <unordered_map>
#include <memory>
#include "Vertice.h"

template <typename T, typename W>
class Grafo {
public:
    std::unordered_map<T, std::shared_ptr<Vertice<T, W>>> vertices; // Note the use of Vertice<T, W>

    void agregarVertice(T dato);
    void agregarArista(T origen, T destino, W peso);
    void imprimirGrafo() const;
};



#include "Grafo.hxx"

#endif // GRAFO_H

