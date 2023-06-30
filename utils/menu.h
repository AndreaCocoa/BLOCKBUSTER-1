//
// Created by Giancarlos on 29/06/23.
//

#ifndef BLOCKBUSTER_MENU_H
#define BLOCKBUSTER_MENU_H

#include <iostream>
#include "clases/Empresa.h"

using namespace std;

void imprimir_empresa(string nombre_empresa, string direccion_empresa, string ruc_empresa){
    cout<<"-----DATOS DE LA EMPRESA-----"<<endl;
    cout<<"Nombre : "<< nombre_empresa <<endl;
    cout<<"Direccion : "<< direccion_empresa <<endl;
    cout<<"RUC : "<< ruc_empresa <<endl;
}

void registrar_empresa(){
    string nombre_empresa;
    string direccion_empresa;
    string ruc_empresa;

    cout<<"-----REGISTRAR EMPRESA-----"<<endl;
    cout<<"Nombre empresa : ";
    cin.ignore();
    getline(cin, nombre_empresa);

    cout<<"Direccion : ";
    cin.ignore();
    getline(cin, direccion_empresa);

    cout<<"RUC : ";
    cin.ignore();
    getline(cin, ruc_empresa);

    imprimir_empresa(nombre_empresa, direccion_empresa, ruc_empresa)

    Empresa empresa(nombre_empresa, direccion_empresa, ruc_empresa);
}

int menu(){
    int opcion;
    do{
        cout << " -------MENU-------\n";
        cout << "1. Registrar película\n";
        cout << "2. Registrar usuario\n";
        cout << "3. Buscar Película\n";
        cout << "      3.1 Por nombre\n";
        cout << "      3.2 Por año de publicación\n";
        cout << "      3.3 Por ranking\n";
        cout << "4. Alquilar película\n";
        cout << "5. Devolver película\n";
        cout << "6. Reporte película\n";
        cout << "7. Salir\n";

        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cout<<endl;

    } while(opcion>7 || opcion<0);
    return opcion;
}

#endif //BLOCKBUSTER_MENU_H
