// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
	int numarticulo,yeardelanzamiento,impuesto=160,total,opcion;
	float preciounitario=1000;
	char nombredelarticulo(50);
	string articulo,descripcion,categoria;
	cout <<"\t***TIENDA DE VIDEOJUEGOS FERNYBOY***\n";
	cout << " 1.Agregar Articulo\n 2.Modificar Articilo\n 3.Eliminar Articulo\n 4.Lista de Articulos Vigentes\n 5.Limpiar pantalla\n 6.Salir\n";
	cin >>opcion;
	
	switch(opcion)
	{
	case 1:
		cout << "Agregar el numero del Articulo\n";//aqui se agrega el articulo//
		cin >> numarticulo;
		cout << "Ingresa el Nombre del Articulo\n";//aqui le ponemos el nombre al articulo//
		cin >> nombredelarticulo;
		cout << "ingrese el descripcion del articulo\n";//descripcion de como es el articulo//
		cin >> descripcion;
		cout << "ingrese la categoria del articulo\n";//la categoria del articulo//
		cin >> categoria;
		cout << "ingrese el precio unitario del articulo\n";//el precio unitario//
		cin >> preciounitario;
		return main();

		break;

	case 2://modificar articulo//
		break;

	case 3://Eliminar Articulo//
		break;

	case 4://Lista de Articulos Vigentes//
		break;

	case 5://Limpiar Pantalla//
		system("cls");
		return main();
		break;

	case 6://Salir al menu//
		cout << "Gracias por utilizar nuestro programa\n";
		break;
	 
	default:
		cout << "Ingrese opcion valida\n";
		return main();

	}









}
