/*
 * Pila.h
 *
 *  Created on: 01/07/2014
 *      Author: Pilar
 */
#ifndef NODOPILA_H_
#define NODOPILA_H_

class NodoPila {
public:
	int dato;
	NodoPila *siguiente;

	NodoPila(int elemento, NodoPila *n) {
		dato = elemento;
		siguiente = n;
	}
};

#endif /* NODOPILA_H_ */

#ifndef PILA_H_
#define PILA_H_
class Pila {
	typedef NodoPila *pNodo;
	//Variables miembro
private:
	pNodo inicio;
	// Interfaz/Prototipo
public:
	Pila();
	~Pila();

	bool pilaVacia();
	void apilar(int v);
	int desapilar();
	int cima();
	void decapitar();
	int numElemPila();
	void imprimirPila();
	void leerPila();
};

#endif /* PILA_H_ */
