/*
 * Cola.cpp
 *
 *  Created on: Feb 25, 2018
 *      Author: edu
 */

#include <iostream>
#include "Cola.h"

Cola::~Cola() = default;

Cola::Cola() {
	principio = nullptr;
	fin = nullptr;
}

bool Cola::colaVacia() {
	if (principio)
		return false;

	return true;
}

void Cola::encolar(int v) {
	if (!principio) {
		principio = new NodoCola(v, nullptr);
		fin = principio;
	} else {
		NodoCola *nc = principio;
		while (nc) {
			if (!nc->sig) {
				nc->sig = new NodoCola(v, nullptr);
				fin = nc->sig;
				break;
			} else
				nc = nc->sig;
		}
	}
}

int Cola::desencolar() {
	int n = principio->dato;

	if (principio->sig)
		principio = principio->sig;

	else
		principio = nullptr;

	return n;
}

int Cola::primero() {
	return principio->dato;
}

void Cola::quitarPrimero() {
	principio = principio->sig;
}

int Cola::numElemCola() {
	NodoCola *nc = principio;
	int n = 0;

	while (nc) {
		nc = nc->sig;
		n++;
	}
	return n;
}

void Cola::invertirCola() {
	if (!colaVacia()) {
		int n = desencolar();
		invertirCola();
		encolar(n);
	}
}

void Cola::imprimirCola() {
	NodoCola *nc = principio;

	while (nc) {
		std::cout << nc->dato << " ";
		nc = nc->sig;
	}
	std::cout << "\n";
}

void Cola::leerCola() {
	int n;
	std::cout << "Numero de elementos de la cola: ";
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		int nuevo = 0;
		std::cin >> nuevo;
		encolar(nuevo);
	}
}
