#include <iostream>//librerias
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>//se usa para los archivos
using namespace std;
void alta();
void listas();
void elimin();
void modi();
void archi();
int* item, regi, * numa, sn, n = 1;
float* imp, * pun, * tot;
string* carac, * desc, * nom, * gen, * clas;
int main() {
    int opc;
    do {
        printf("        ====Tienda Fernyboy====        \n");
        printf("ingrese la opcion que desee\n");
        printf(" 1.-Agregar Articulo\n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista de Articulos vigentes\n 5.-Limpiar pantalla\n 6.-Salir\n");
        scanf_s("%d", &opc);

        switch (opc)
        {
        case 1://agregar articulo
            alta();
            system("pause");
            break;
        case 2://modificar articulo
            modi();
            system("pause");
            break;
        case 3://eliminar articulo
            elimin();
            system("pause");
            break;
        case 4://lista de articulos
            listas();
            system("pause");
            break;
        case 5://limpiar pantalla
            system("pause");
            system("cls");
            break;
        case 6://salir
            archi();
            system("pause");
            exit(1);
            break;
        default:
            printf("Opcion incorrecta ingrese una opcion valida\n");//por si pone otra opcion como 7 que vuelva a poner una opcion correcta
            system("pause");
            break;
        }
    } while (opc != 6);
}

void alta() {
    sn = 0;
    printf("ingresa la cantidad de registros\n");//cantidad de registros a elegir
    scanf_s("%d", &regi);
    item = new int[regi];
    numa = new int[regi];
    imp = new float[regi];
    pun = new float[regi];
    tot = new float[regi];
    carac = new string[regi];
    desc = new string[regi];
    nom = new string[regi];
    gen = new string[regi];
    clas = new string[regi];
    for (int i = 0; i < regi; i++) {
        printf("ingresa el numero de articulo\n");
        scanf_s("%d", &numa[i]);
        if (i > 0) {
            do {
                if (numa[i] == numa[i - n]) {
                    printf("ingrese otro numero de articulo\n");
                    scanf_s("%d", &numa[i]);
                }
                else {
                    n = n + 1;
                }
            } while (n < regi);
        }
        printf("Ingresa el a%co de lanzamiento\n", 164);
        scanf_s("%d", &item[i]);
        printf("Ingresa el nombre del videojuego\n");
        cin.ignore();
        getline(cin, nom[i]);
        printf("Ingresa la clasificacion =\n");
        getline(cin, clas[i]);
        printf("Ingresa las caracteristicas\n");
        getline(cin, carac[i]);
        printf("Ingresa la descripcion\n");
        getline(cin, desc[i]);
        printf("Ingresa el genero \n");
        getline(cin, gen[i]);
        printf("Ingresa el precio unitario=\n");
        scanf_s("%f", &pun[i]);
        imp[i] = pun[i] * .16;
        printf("El impuesto es : %f\n", imp[i]);
        tot[i] = pun[i] * 1.16;
        printf("El total es : %f\n", tot[i]);// aqui me tronaba el programa asi que decidi ponerlo en comentarios 
        //if ((regi - 1) == i) {
            //do {
               // printf("Quiere agregar otro articulo 1.si 2.no\n");
                //scanf_s("%d", &sn);
                //if (sn == 1) {
                    //regi = regi + 1;
                //}
           // } while (sn != 1 && sn != 2);
        //}
    }
}//alta de los articulos
void modi() {
    int modif, opcion;
    do {
        printf("Ingrese el numero de articulo a modificar\n");
        scanf_s("%d", &modif);
    } while (modif < 0);
    do {
        printf("que desea modificar\n1.Numero de articulo\n2.Nombre del videojuego\n3.A%co de lanzamiento\n4.Clasificacion\n5.Caracteristicas\n6.Descripcion\n7.Genero\n8.Precio unitario\n9.Salir\n", 164);
        scanf_s("%d", &opcion);
        switch (opcion) {
        case 1:
            for (int i = 0; i < regi; i++) {
                if (modif == numa[i]) {
                    printf("ingresa el nuevo dato\n");
                    scanf_s("%d", &numa[i]);
                }
            }
            break;
        case 2:
            for (int i = 0; i < regi; i++) {
                if (modif == numa[i]) {
                    printf("ingresa el nuevo dato\n");
                    cin.ignore();
                    getline(cin, nom[i]);
                }
            }
            break;
        case 3:
            for (int i = 0; i < regi; i++) {
                if (modif == numa[i]) {
                    printf("ingresa el nuevo dato\n");
                    scanf_s("%d", &item[i]);
                }
            }
            break;
        case 4:
            for (int i = 0; i < regi; i++) {
                if (modif == numa[i]) {
                    printf("ingresa el nuevo dato\n");
                    cin.ignore();
                    getline(cin, clas[i]);
                }
            }
            break;
        case 5:
            for (int i = 0; i < regi; i++) {
                if (modif == numa[i]) {
                    printf("ingresa el nuevo dato\n");
                    cin.ignore();
                    getline(cin, carac[i]);
                }
            }
            break;
        case 6:
            for (int i = 0; i < regi; i++) {
                if (modif == numa[i]) {
                    printf("ingresa el nuevo dato\n");
                    cin.ignore();
                    getline(cin, desc[i]);
                }
            }
            break;
        case 7:
            for (int i = 0; i < regi; i++) {
                if (modif == numa[i]) {
                    printf("ingresa el nuevo dato\n");
                    cin.ignore();
                    getline(cin, gen[i]);
                }
            }
            break;
        case 8:
            for (int i = 0; i < regi; i++) {
                if (modif == numa[i]) {
                    printf("ingresa el nuevo dato\n");
                    scanf_s("%d", &pun[i]);
                    imp[i] = pun[i] * .16;
                    tot[i] = pun[i] * 1.16;
                }
            }
            break;
        case 9://salir
            break;
        default:
            printf("ingrese una opcion correcta\n");
            break;
        }
    } while (opcion != 9);

}

void listas() {
    int op1;
    string bus;
    do {
        printf("1.Clasificacion\n 2.Genero\n 3.salir\n");
        scanf_s("%d", &op1);
        switch (op1) {
        case 1:
            printf("ingrese la clasificacion a buscar\n");
            cin.ignore();
            getline(cin, bus);
            for (int i = 0; i < regi; i++) {
                if (bus == clas[i] && numa[i] != 0) {
                    printf("el numero de articulo: %d\n", numa[i]);
                    printf("nombre del videojuego: %s\n", nom[i].c_str());
                    printf("a%co de lanzamiento: %d\n", 164, item[i]);
                    printf("la clasificacion: %s\n", clas[i].c_str());
                    printf("la caracteristicas: %s\n", carac[i].c_str());
                    printf("la descripcion: %s\n", desc[i].c_str());
                    printf("el genero: %s\n", gen[i].c_str());
                    printf("el precio unitario: %f \n", pun[i]);
                    printf("el impuesto es de: %f \n", imp[i]);
                    printf("el total es: %f \n", tot[i]);
                }
            }
            break;
        case 2:
            printf("ingrese el genero a buscar\n");
            cin.ignore();
            getline(cin, bus);
            for (int i = 0; i < regi; i++) {
                if (bus == gen[i] && numa[i] != 0) {
                    printf("el numero de articulo: %d\n", numa[i]);
                    printf("nombre del videojuego: %s\n", nom[i].c_str());
                    printf("a%co de lanzamiento: %d\n", 164, item[i]);
                    printf("la clasificacion: %s\n", clas[i].c_str());
                    printf("la caracteristicas: %s\n", carac[i].c_str());
                    printf("la descripcion: %s\n", desc[i].c_str());
                    printf("el genero: %s\n", gen[i].c_str());
                    printf("el precio unitario: %f \n", pun[i]);
                    printf("el impuesto es de: %f \n", imp[i]);
                    printf("el total es: %f \n", tot[i]);;
                }
            }
            break;
        case 3:
            break;
        default:
            printf("ingresa una opcion correta\n");
            break;
        }
    } while (op1 != 3);
}

void elimin() {
    int eli, no = 0;
    do {
        printf("ingrese el numero de articulo a eliminar\n");
        scanf_s("%d", &eli);
        for (int i = 0; i < regi; i++) {
            if (eli == numa[i]) {
                numa[i] = 0;
                no = no + 1;
            }
        }
        if (no == 0) {
            printf("Numero de articulo no existe\n");
        }
    } while (no == 0);
}

void archi() {
    ofstream archivo;
    string nombre;
    nombre = "Lista ferny";
    archivo.open(nombre.c_str(), ios::out);

    if (archivo.fail()) {
        printf("error al hacer el archivo\n");
        system("pause");
        exit(1);
    }
    archivo << "Se seguira este formato" << "\n";
    archivo << "Numero de articulo" << "\t";
    archivo << "Nombre del videojuego" << "\t";
    archivo << "Año de lanzamiento" << "\t";
    archivo << "Clasificacion" << "\t";
    archivo << "Caracteristicas" << "\t";
    archivo << "Descripción" << "\t";
    archivo << "Genero" << "\t";
    archivo << "Precio unitario" << "\t";
    archivo << "Impuesto" << "\t";
    archivo << "Total" << "\n";
    for (int i = 0; i < regi; i++) {
        archivo << numa[i] << "\t";
        archivo << nom[i].c_str() << "\t";
        archivo << item[i] << "\t";
        archivo << clas[i].c_str() << "\t";
        archivo << carac[i].c_str() << "\t";
        archivo << desc[i].c_str() << "\t";
        archivo << gen[i].c_str() << "\t";
        archivo << pun[i] << "\t";
        archivo << imp[i] << "\t";
        archivo << tot[i] << "\n";

    }
}

