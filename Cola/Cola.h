/*
 * Cola.h
 *
 *  Created on: 29/09/2014
 *      Author: Pilar
 */
#ifndef NODOCOLA_H_
#define NODOCOLA_H_

class NodoCola {
public:
	int dato;
	NodoCola *sig;

	NodoCola(int elemento, NodoCola *n) {
		dato = elemento;
		sig = n;
	}
};

#endif /* NODOCOLA_H_ */

#ifndef COLA_H_
#define COLA_H_
//interfaz
typedef NodoCola *pNodoC;
class Cola {
	//Variables miembro
private:
	pNodoC principio, fin;
	// Interfaz/Prototipo
public:
	Cola();
	~Cola();

	bool colaVacia();
	void encolar(int v);
	int desencolar();
	int primero();
	void quitarPrimero();
	int numElemCola();
	void invertirCola();
	void imprimirCola();
	void leerCola();
};

#endif /* COLA_H_ */
