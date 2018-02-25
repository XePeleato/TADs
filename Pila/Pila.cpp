#include "Pila.h"

#include <iostream>

Pila::Pila() {
	inicio = nullptr;
}

Pila::~Pila() = default;

void Pila::apilar(int v) {
	auto n = new NodoPila(v, nullptr);

	if (!inicio)
		inicio = n;
	else {
		n->siguiente = inicio;
		inicio = n;
	}
}

int Pila::desapilar() {
	if (inicio) {
		int i = inicio->dato;
		NodoPila *n = inicio;

		inicio = inicio->siguiente;

		delete n;

		return i;
	}
	return -1;
}

int Pila::cima() {
	return inicio->dato;
}

bool Pila::pilaVacia() {
	if (inicio != nullptr)
		return false;

	return true;
}

void Pila::decapitar() {
	if (inicio) {
		NodoPila *n = inicio;

		inicio = inicio->siguiente;

		delete n;
	}
}

void Pila::imprimirPila() {
	std::cout << "Estado de la pila: ";

	NodoPila *n = inicio;
	while (n) {
		std::cout << n->dato << " ";
		n = n->siguiente;
	}
	std::cout << "\n";
}

void Pila::leerPila() {
	int nElem;
	std::cout << "Numero de elementos de la pila: ";
	std::cin >> nElem;

	for (int i = 0; i < nElem; ++i) {
		int dato;
		std::cin >> dato;
		apilar(dato);
	}
}

int Pila::numElemPila() {
	int num = 0;
	NodoPila *n = inicio;
	while (n) {
		num++;
		n = n->siguiente;
	}
	return num;
}
