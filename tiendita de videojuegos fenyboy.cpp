
#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, opcion, yeardelanzamiento;
    char nombredelvideojuego(100), caracteristicas(100);
    float preciounitario=1000, impuesto, total = 0.0;
    string articulo, descripcion, categoria, genero;

    cout << "\t ***TIENDA DE VIDEOJUEGOS FERNYBOY*** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el numero de articulo \n";
        cin >> numarticulo;
        cout << "ingrese el nombre del articulo\n";
        cin.ignore();//no me un espacio 
        getline(cin, articulo); //permite ejecutar los espacios en la variable
        cout << "ingrese el descripcion del articulo\n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "ingrese el genero\n";
        cin.ignore();
        getline(cin, genero);
        cout << "ingrese la categoria del articulo\n";
        cin.ignore();
        getline(cin, categoria);
        cout << "ingrese el year de lanzamiento\n";
        cin >> yeardelanzamiento;
        cout << "ingrese el precio unitario del articulo\n";
        cin >> preciounitario;
        cout << "el impuesto es:\n";
        impuesto = (preciounitario * .16);
        cout << impuesto;

        cout << "el total es:\n";
        total = (preciounitario + impuesto);
        cout << total;

        return main();
        break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos
        break;

    case 5: //Limpiar Pantalla
        system("cls"); //clean  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por nuestro utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion valida \n";
        return main();

    }
}