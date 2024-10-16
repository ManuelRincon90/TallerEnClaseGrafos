/*****************************************************************************************************************************
Fecha: 16 octubre 2024
Autor: Manuel Rincon
Tema: Taller Grafos Clase 1
Estructuras de datos
******************************************************************************************************************************/

#include "Arista.h"

template <typename T, typename W>
Arista<T, W>::Arista(std::shared_ptr<Vertice<T, W>> dest, W peso)
    : destino(dest), peso(peso) {}

