//============================================================================
// Name        : Ejer1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//AGREGAR OPCI�N PARA SEGUIR REPITIENDO LAS IMPLICACIONES Y PASAR A LA SIG CUANDO EL USUARIO QUIERA.

int main() {
	int valorp;
	int valorq;
	int valorr;

	cout
			<< "En este punto se deber� escribir un programa que interact�a con el usuario para asignar el valor de verdad a un conjunto de proposiciones l�gicas, luego el sistema con la informaci�n que ingresa el usuario, debe resolver el valor de verdad de la implicaci�n l�gica e informar por pantalla el resultado de la misma\n\n";

	cout << "Implicaci�n l�gica 1: \n\n";

	cout << "p= Una persona pertenece al partido pol�tico \n";
	cout << "q= Cuenta con el aval del 2% de los afiliados a dicho partido\n";
	cout << "r= La persona puede ser precandidato\n\n";

	cout << "Implicaci�n l�gica a determinar valor de verdad: \n"
			"p ^ q => r\n";

	cout << "Ingresar el valor de verdad de la proposici�n p\n"
			"1. Verdadero\n"
			"2. Falso\n";
	do {
		cin >> valorp;
		if (valorp < 1 || valorp > 2)
			cout << "Ingrese una opci�n v�lida\n\n";
	} while (valorp < 1 || valorp > 2);

	cout << "Ingresar el valor de verdad de la proposici�n q\n"
			"1. Verdadero\n"
			"2. Falso\n";
	do {
		cin >> valorq;
		if (valorq < 1 || valorq > 2)
			cout << "Ingrese una opci�n v�lida\n\n";
	} while (valorq < 1 || valorq > 2);

	if (valorp == 1 && valorq == 1)
		cout << "La implicaci�n l�gica es falsa\n\n\n";
	else
		cout << "La implicaci�n l�gica es verdadera\n\n\n";

	cout << "Implicaci�n l�gica 2: \n\n";

	cout << "p= El voto es emitido mediante boleta no oficializada.\n";
	cout
			<< "q= El voto es emitido con papel de cualquier color con inscripciones o im�genes de cualquier naturaleza.\n";
	cout
			<< "r= El voto es emitido mediante dos o m�s boletas de la misma categor�a de candidatos y diferente agrupaci�n pol�tica.\n";
	cout << "s= El voto se considerar� nulo.\n\n";

	cout << "Implicaci�n l�gica a determinar valor de verdad: \n"
			"p v q v r => s\n";

	cout << "Ingresar el valor de verdad de la proposici�n p\n"
			"1. Verdadero\n"
			"2. Falso\n";
	do {
		cin >> valorp;
		if (valorp < 1 || valorp > 2)
			cout << "Ingrese una opci�n v�lida\n\n";
	} while (valorp < 1 || valorp > 2);

	cout << "Ingresar el valor de verdad de la proposici�n q\n"
			"1. Verdadero\n"
			"2. Falso\n";
	do {
		cin >> valorq;
		if (valorq < 1 || valorq > 2)
			cout << "Ingrese una opci�n v�lida\n\n";
	} while (valorq < 1 || valorq > 2);

	cout << "Ingresar el valor de verdad de la proposici�n r\n"
			"1. Verdadero\n"
			"2. Falso\n";

	do {
		cin >> valorr;
		if (valorr < 1 || valorr > 2)
			cout << "Ingrese una opci�n v�lida\n\n";
	} while (valorr < 1 || valorr > 2);

	if (valorp == 2 && valorq == 2 && valorr == 2)
		cout << "La implicaci�n l�gica 2 es verdadera\n";
	else
		cout << "La implicaci�n l�gica 2 es falsa\n";

	return 0;
}
