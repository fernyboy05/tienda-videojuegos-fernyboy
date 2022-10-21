#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
#include <stdio.h>


using namespace std;

struct tienda {//declaracion de variables
    int numa,year;
    float pu,imp,total;
    string clas,carac,desc,gen,nom;
};

int main()
{
    tienda bd[3] = { 0 };//arreglo 
    int opc = 0, op = 0, busq, s;// switch y busqueda
    string bus;
    do
    {
        printf("   *****tiendita  de fernyboy****        \n");
        printf("Ingresar la opcion que necesite\n");
        printf(" 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos vigentes\n 5.-Limpiar pantalla\n 6.-Salir\n");
        scanf_s("%d", &opc);

        switch (opc)
        {

        case 1://agregar articculo

            for (int i = 0; i < 3; i++) {
                do {
                    printf("Ingresar el numero de articulo\n");
                    scanf_s("%d", &bd[i].numa);
                    if (bd[i].numa == bd[i - 1].numa || bd[i].numa == bd[i - 2].numa)
                    {
                        printf("el numero de articulo ya existe \n");

                    }
                    else
                    {
                        s = 2;
                    }
                } while (s == 1);
                printf("ingrese el nombre del videojuego\n");
                cin.ignore();
                getline(cin, bd[i].nom);
                printf("ingrese el a%co de lanzamiento\n", 164);//lo que nos mostro la maestra para poner la n
                scanf_s("%d", &bd[i].year);
                printf("ingrese la clasificacion\n");
                cin.ignore();
                getline(cin, bd[i].clas);
                printf("ingrese las caracteristicas\n");
                getline(cin, bd[i].carac);
                printf("ingrese la descripcion\n");
                getline(cin, bd[i].desc);
                printf("ingrese el genero\n");
                getline(cin, bd[i].gen);
                printf("ingrese el precio unitario\n");
                scanf_s("%f", &bd[i].pu);
                bd[i].imp = bd[i].pu * .16;
                printf("El impuesto es: %f\n", bd[i].imp);

                bd[i].total = bd[i].pu * 1.16;
                printf("El total del videojuego es: %f\n", bd[i].total);
            }

            break;
        case 2://modificar articulo
            printf("ingrese el numero de articulo que quiere modificar\n");
            scanf_s("%d", &busq);

            for (int i = 0; i < 3; i++) {
                if (busq == bd[i].numa) {
                    printf("Ingresar el nombre del videojuego\n");
                    cin.ignore();
                    getline(cin, bd[i].nom);
                    printf("Ingresar el A%co de lanzamiento\n", 164);
                    scanf_s("%d", &bd[i].year);
                    printf("Ingresar la clasificacion\n");
                    cin.ignore();
                    getline(cin, bd[i].clas);
                    printf("Ingrese las caracteristicas\n");
                    getline(cin, bd[i].carac);
                    printf("Ingresar la descripcion\n");
                    getline(cin, bd[i].desc);
                    printf("Ingresar el genero\n");
                    getline(cin, bd[i].gen);
                    printf("Ingrese el precio unitario\n");
                    scanf_s("%f", &bd[i].pu);
                    bd[i].imp = bd[i].pu * .16;
                    printf("El impuesto es :%f\n", bd[i].imp);
                    bd[i].total = bd[i].pu * 1.16;
                    printf("El precio total del videojuego es: %f\n", bd[i].total);
                }
            }
            break;
        case 3://eliminar articulo


            printf("Ingrese el numero de articulo que deseea eliminar\n");
            scanf_s("%d", &busq);
            busq = busq - 1;
            for (int i = busq; i == busq; i++)
            {
                bd[i].numa = 0;
                bd[i].pu = 0;
                bd[i].imp = 0;
                bd[i].total = 0;
                bd[i].year = 0;
                bd[i].clas = " ";
                bd[i].carac = " ";
                bd[i].desc = " ";
                bd[i].gen = " ";
                bd[i].nom = " ";
            }
            break;
        case 4://lista de articulos
            do
            {
                printf("seleccione la opcion que quiera ver\n 1.-clasificacion\n 2.-Genero\n 3.-Todos\n 4.-volver al menu principal\n");
                scanf_s("%d", &op);
                switch (op)
                {
                case 1://clasificacion
                    for (int i = 0; i < 3; i++)
                    {
                        if (bd[i].numa == 0)
                        {
                            printf("Articulo eliminado\n");
                            printf("--------- \n");
                        }
                        else
                        {

                            printf("el numero de articulo es: %d\n", bd[i].numa);

                            printf("la clasificacion es: %s\n", bd[i].clas.c_str());

                            printf("-------- \n");
                        }
                    }
                    break;
                case 2://genero
                    for (int i = 0; i < 3; i++)
                    {

                        if (bd[i].numa == 0)
                        {
                            printf("Articulo eliminado\n");
                            printf("------------- \n");
                        }
                        else
                        {
                            printf("el numero de articulo es: %d\n", bd[i].numa);
                            printf("el genero es: %s\n", bd[i].gen.c_str());
                            printf("-------\n");
                        }
                    }
                    break;
                case 3:
                    for (int i = 0; i < 3; i++)
                    {

                        if (bd[i].numa == 0)
                        {
                            printf("Articulo eliminado\n");
                            printf("------\n");
                        }
                        else
                        {
                            printf("el numero de articulo: %d\n", bd[i].numa);
                            printf("nombre del videojuego: %s\n", bd[i].nom.c_str());
                            printf("a%co de lanzamiento: %d\n", 164, bd[i].year);//lo que nos mostro la maestra
                            printf("la clasificacion: %s\n", bd[i].clas.c_str());
                            printf("la caracteristicas: %s\n", bd[i].carac.c_str());
                            printf("la descripcion: %s\n", bd[i].desc.c_str());
                            printf("el genero: %s\n", bd[i].gen.c_str());
                            printf("el precio unitario: %f \n", bd[i].pu);
                            printf("el impuesto es de: %f \n", bd[i].imp);
                            printf("el total es: %f \n", bd[i].total);
                            printf("--------- \n");
                        }
                    }
                    break;
                case 4:
                    printf("regresando");
                    break;
                default:
                    printf("ingrese una opcion valida\n");
                    break;
                }
            } while (op != 4);
            break;

        case 5://limpiar pantalla
            system("cls");
            break;
        case 6://salir
            printf("saliendo del programa gracias por utilizarlo");
            exit(1);
            break;
        default:
            printf("ingrese una opcion valida\n");
            break;
        }

    } while (opc != 6);
    system("pause");

}