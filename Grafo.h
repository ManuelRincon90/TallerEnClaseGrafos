/*****************************************************************************************************************************
Fecha: 23 octubre 2024
Autor: Daniel Rosas
Tema: Taller Grafos Clase 2
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
    std::unordered_map<T, std::shared_ptr<Vertice<T, W>>> vertices;

    void agregarVertice(T dato);
    void eliminarVertice(T dato);
    void actualizarVertice(T datoAntiguo, T datoNuevo);
    void agregarArista(T origen, T destino, W peso);
    void eliminarArista(T origen, T destino);
    void actualizarArista(T origen, T destino, W nuevoPeso);
    void imprimirGrafo() const;

    int obtenerCantidadVertices() const;
    int obtenerCantidadAristas() const;
    std::shared_ptr<Vertice<T, W>> buscarVertice(T dato) const;
    bool buscarArista(T origen, T destino) const;
};

#include "Grafo.hxx"

#endif // GRAFO_H

