#include <iostream>
using namespace std;

int main() {
	int valorp;
	int valorq;
	int valorr;
	int valors;
	char repetira;
	char repetirb;

	do {
		cout
				<< "En este punto se debera escribir un programa que interactua con el usuario para asignar el valor de verdad a un conjunto de proposiciones logicas, luego el sistema con la informacion que ingresa el usuario, debe resolver el valor de verdad de la implicacion logica e informar por pantalla el resultado de la misma\n\n";

		cout << "Implicacion logica 1: \n\n";

		cout << "p= Una persona pertenece al partido politico \n";
		cout
				<< "q= Cuenta con el aval del 2% de los afiliados a dicho partido\n";
		cout << "r= La persona puede ser precandidato\n\n";

		cout << "Implicacion logica a determinar valor de verdad: \n"
				"p ^ q => r\n\n";

		cout << "Ingresar el valor de verdad de la proposicion p\n"
				"1. Verdadero\n"
				"2. Falso\n";
		do {
			cin >> valorp;
			if (valorp < 1 || valorp > 2)
				cout << "Ingrese una opcion valida\n\n";
		} while (valorp < 1 || valorp > 2);

		cout << "Ingresar el valor de verdad de la proposicion q\n"
				"1. Verdadero\n"
				"2. Falso\n";
		do {
			cin >> valorq;
			if (valorq < 1 || valorq > 2)
				cout << "Ingrese una opcion valida\n\n";
		} while (valorq < 1 || valorq > 2);

		cout << "Ingresar el valor de verdad de la proposicion r\n"
				"1. Verdadero\n"
				"2. Falso\n";

		do {
			cin >> valorr;
			if (valorr < 1 || valorr > 2)
				cout << "Ingrese una opcion valida\n\n";
		} while (valorr < 1 || valorr > 2);

		if (valorp == 1 && valorq == 1 && valorr == 2)
			cout << "La implicacion logica 1 es falsa\n\n\n";
		else
			cout << "La implicacion logica 1 es verdadera\n\n\n";

		cout
				<< "¿Desea ingresar otros valores? Pulse cualquiero tecla para continuar o 0 para ir a la siguiente implicacion\n";

		cin >> repetira;
	//Repetira al ser un caracter, se utiliza el cero según el código ASCII.
	} while (repetira != 48);

	cout << "Implicacion logica 2: \n\n";

	cout << "p= El voto es emitido mediante boleta no oficializada.\n";
	cout
			<< "q= El voto es emitido con papel de cualquier color con inscripciones o imágenes de cualquier naturaleza.\n";
	cout
			<< "r= El voto es emitido mediante dos o más boletas de la misma categoría de candidatos y diferente agrupacion politica.\n";
	cout << "s= El voto se considerara nulo.\n\n";

	cout << "Implicacion logica a determinar valor de verdad: \n"
			"p v q v r => s\n\n";

	do {

		cout << "Ingresar el valor de verdad de la proposicion p\n"
				"1. Verdadero\n"
				"2. Falso\n";
		do {
			cin >> valorp;
			if (valorp < 1 || valorp > 2)
				cout << "Ingrese una opcion valida\n\n";
		} while (valorp < 1 || valorp > 2);

		cout << "Ingresar el valor de verdad de la proposicion q\n"
				"1. Verdadero\n"
				"2. Falso\n";
		do {
			cin >> valorq;
			if (valorq < 1 || valorq > 2)
				cout << "Ingrese una opción valida\n\n";
		} while (valorq < 1 || valorq > 2);

		cout << "Ingresar el valor de verdad de la proposicion r\n"
				"1. Verdadero\n"
				"2. Falso\n";

		do {
			cin >> valorr;
			if (valorr < 1 || valorr > 2)
				cout << "Ingrese una opcion valida\n\n";
		} while (valorr < 1 || valorr > 2);

		cout << "Ingresar el valor de verdad de la proposicion s\n"
				"1. Verdadero\n"
				"2. Falso\n";

		do {
			cin >> valors;
			if (valors < 1 || valors > 2)
				cout << "Ingrese una opcion valida\n\n";
		} while (valors < 1 || valors > 2);

		if ((valorp == 1 || valorq == 1 || valorr == 1) && valors == 2)
			cout << "La implicacion logica 2 es falsa\n";
		else
			cout << "La implicacion logica 2 es verdadera\n";

		cout
				<< "¿Desea ingresar otros valores? Pulse cualquiero tecla para continuar o 0 para terminar\n";

		cin >> repetirb;

	//Repetirb al ser un caracter, se utiliza el cero según el código ASCII.
	} while (repetirb != 48);

	cout << "Fin del programa";

	return 0;
}
