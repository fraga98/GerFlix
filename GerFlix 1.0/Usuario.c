
#include "Usuario.h"
#include <string.h>

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}

void alta_Usuarios(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};

    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }
}

void baja_usuario(eUsuario user[], int cantUserarios){

    int i, aux_id;
    char auxId[21];

    if(!getStringNumeros("\n\tIngrese ID Usuario: ",auxId)){
        printf("\n\tERROR! La ID debe contener solo numeros.\n");
    }

    aux_id = atoi(auxId);

    for(i=0; i<cantUserarios; i++){

        if(user[i].estado == 1){

            if(aux_id == user[i].idUsuario){

                user[i].estado = 0;
                system("cls");
                printf("\n\tUSUARIO DADO DE BAJA!\n");
                break;

            }else{

                system("cls");
                printf("\n\tUSUARIO INEXISTENTE!\n");
                break;
            }
        }
    }
}

void mostrarListaUsuarios(eUsuario user[], int cant){
    int i;

    for(i=0;i<cant;i++){
        if(user[i].estado == 1){
            printf("\n\t%d -- %s\n\n",user[i].idUsuario,user[i].nombre);
        }
    }
}

///******************(Listado)

void mostrarUsuarioConSuSerie(eUsuario user[], int cantUser, eSerie serie[], int cantSerie){

    int i, j;

    for(i=0;i<cantUser;i++){

        for(j=0;j<cantSerie;j++){

            if(user[i].idSerie == serie[j].idSerie){

                if(user[i].estado == 1){

                    printf("\n\t%d -- %s -- %s\n",user[i].idUsuario,user[i].nombre,serie[j].nombre);
                }
            }
        }
    }
}



