// ConsoleApplication5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "Claves.h"
#include <iostream>

int main()
{
	string msg;
	int clave;

	while (1) {
		cout << "Selecciona:\n1 => Encriptar\n2 => Desencriptar";

		char opt;
		do opt = _getch(); while (opt != '1' && opt != '2');
		system("cls");

		cout << "Escribe la clave: ";
		cin >> clave;

		cout << "Escribe el mensaje:\n";
		cin >> ws;
		getline(cin, msg);

		if (opt == '1') {
			string nuevo = Cesar::Cifrar(msg,clave);
			cout << "\nMensaje encriptado: " << nuevo;
		}
		//else {
			//string nuevo = Sustitucion::Descifrar(msg);
			//cout << "\nMensaje descifrado: " << nuevo;
		//}
		_getch();
		system("cls");
	}
	return 0;
   }


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
