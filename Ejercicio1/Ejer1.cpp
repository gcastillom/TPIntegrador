//============================================================================
// Name        : Ejer1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//AGREGAR OPCIÓN PARA SEGUIR REPITIENDO LAS IMPLICACIONES Y PASAR A LA SIG CUANDO EL USUARIO QUIERA.

int main() {
	int valorp;
	int valorq;
	int valorr;

	cout
			<< "En este punto se deberá escribir un programa que interactúa con el usuario para asignar el valor de verdad a un conjunto de proposiciones lógicas, luego el sistema con la información que ingresa el usuario, debe resolver el valor de verdad de la implicación lógica e informar por pantalla el resultado de la misma\n\n";

	cout << "Implicación lógica 1: \n\n";

	cout << "p= Una persona pertenece al partido político \n";
	cout << "q= Cuenta con el aval del 2% de los afiliados a dicho partido\n";
	cout << "r= La persona puede ser precandidato\n\n";

	cout << "Implicación lógica a determinar valor de verdad: \n"
			"p ^ q => r\n";

	cout << "Ingresar el valor de verdad de la proposición p\n"
			"1. Verdadero\n"
			"2. Falso\n";
	do {
		cin >> valorp;
		if (valorp < 1 || valorp > 2)
			cout << "Ingrese una opción válida\n\n";
	} while (valorp < 1 || valorp > 2);

	cout << "Ingresar el valor de verdad de la proposición q\n"
			"1. Verdadero\n"
			"2. Falso\n";
	do {
		cin >> valorq;
		if (valorq < 1 || valorq > 2)
			cout << "Ingrese una opción válida\n\n";
	} while (valorq < 1 || valorq > 2);

	if (valorp == 1 && valorq == 1)
		cout << "La implicación lógica es falsa\n\n\n";
	else
		cout << "La implicación lógica es verdadera\n\n\n";

	cout << "Implicación lógica 2: \n\n";

	cout << "p= El voto es emitido mediante boleta no oficializada.\n";
	cout
			<< "q= El voto es emitido con papel de cualquier color con inscripciones o imágenes de cualquier naturaleza.\n";
	cout
			<< "r= El voto es emitido mediante dos o más boletas de la misma categoría de candidatos y diferente agrupación política.\n";
	cout << "s= El voto se considerará nulo.\n\n";

	cout << "Implicación lógica a determinar valor de verdad: \n"
			"p v q v r => s\n";

	cout << "Ingresar el valor de verdad de la proposición p\n"
			"1. Verdadero\n"
			"2. Falso\n";
	do {
		cin >> valorp;
		if (valorp < 1 || valorp > 2)
			cout << "Ingrese una opción válida\n\n";
	} while (valorp < 1 || valorp > 2);

	cout << "Ingresar el valor de verdad de la proposición q\n"
			"1. Verdadero\n"
			"2. Falso\n";
	do {
		cin >> valorq;
		if (valorq < 1 || valorq > 2)
			cout << "Ingrese una opción válida\n\n";
	} while (valorq < 1 || valorq > 2);

	cout << "Ingresar el valor de verdad de la proposición r\n"
			"1. Verdadero\n"
			"2. Falso\n";

	do {
		cin >> valorr;
		if (valorr < 1 || valorr > 2)
			cout << "Ingrese una opción válida\n\n";
	} while (valorr < 1 || valorr > 2);

	if (valorp == 2 && valorq == 2 && valorr == 2)
		cout << "La implicación lógica 2 es verdadera\n";
	else
		cout << "La implicación lógica 2 es falsa\n";

	return 0;
}
