#ifndef BLOCKBUSTER_EMPRESAX_H
#define BLOCKBUSTER_EMPRESAX_H
#include <iostream>
#include "Usuario.h"
#include "Pelicula.h"

using namespace std;

class EmpresaX {
private:
    string nombre;
    string direccion;
    string RUC;
    vector <Usuario>listado_usuarios;
    vector <Pelicula>lista_todas_peliculas_empresa;

    // Ganancias por películas YA DEVUELTAS
    double ganancias_peliculas_devueltas;


public:
    EmpresaX(){};
    EmpresaX(string nombre, string direccion, string RUC){
        this -> nombre = nombre;
        this -> direccion = direccion;
        this -> RUC = RUC;
    }

    void registrarUsuario_Empresa(Usuario u1){
        listado_usuarios.push_back(u1);
    }

    void imprimirListadoUsuario_Empresa(){
        for(int i=0; i<listado_usuarios.size();i++){
            cout<<listado_usuarios.at(i).getDNI()<<endl;
            cout<<listado_usuarios.at(i).getNombre()<<endl;
            cout<<listado_usuarios.at(i).getApellido()<<endl;
        }
    }

    vector<Usuario>getListadoUsuarios(){
        return listado_usuarios;
    }

    vector<Pelicula>getListadoTodasPeliculasEmpresa(){
        for(int i=0; i<listado_usuarios.size();i++){
            for(int j=0; i<listado_usuarios.at(i).getListadoPelicula().size();j++){
                lista_todas_peliculas_empresa.push_back(listado_usuarios.at(i).getListadoPelicula().at(i));
            }
        }
        return lista_todas_peliculas_empresa;
    }


    int getCantidadUsuarioEmpresa(){
        return listado_usuarios.size();
    }

    void imprimirListaTodasPeliculasEmpresa(){
        cout<<"Lista de peliculas"<<endl;
        for(int i; i<lista_todas_peliculas_empresa.size(); i++){
            cout<<lista_todas_peliculas_empresa.at(i).getNombre_pelicula();
        }
    }

    // funcion de prueba
    void imprimirVectorUsuarios() {
        cout << "LISTA USUARIOS: " << endl;
        for (int i = 0; i < listado_usuarios.size(); i++ ) {
            cout << endl;
            cout << listado_usuarios[i].getNombre() << " "<< listado_usuarios[i].getDNI() << endl;
        }
    }

    void mostrarDatos() {
        cout << "----- REPORTE ------" << endl;

    }


    friend Pelicula RegistrarPelicula(EmpresaX *empresa);
    friend Pelicula BuscarPelicula(EmpresaX x, string nombre);
    friend void AlquilarPelicula(EmpresaX empresa);
};


#endif //BLOCKBUSTER_EMPRESAX_H
