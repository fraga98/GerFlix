#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Usuario.h"
#include "Funciones_Validar.h"

#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    char seguir = 's';

    int opcion=0, auxBaja;
    char auxOpcion[21], auxiliar_Baja[21]; //v para val


    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);

/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/

     while(seguir == 's' || seguir == 'S'){


    printf("\n\t1.ALTA\n");
    printf("\n\t2.BAJA\n");
    printf("\n\t3.MODIFICAR\n");
    printf("\n\t4.Mostrar Lista de Series.\n");
    printf("\n\t5.Mostrar Lista de Usuarios.\n");
    printf("\n\t6.Mosrtar Usuarios con su Series.\n");
    printf("\n\t7.Mostrar Series con su Usuarios.\n");
    printf("\n\t8.SALIR DEL MENU");

    ///Validacion para que la respuesta sea un numero

    if(!getStringNumeros("\n\nIngrese opcion: ", auxOpcion))
     {
       system("cls");
       printf("\nEROOR! La respuesta debe ser un numero!\n");
     }

     ///Convierte a la cadena
     opcion = atoi(auxOpcion);

     switch(opcion){

         case 1:
                alta_Usuarios(listaDeUsuarios);
                alta_Series(listaDeSeries);
                break;

         case 2:

                if(!getStringNumeros("\n\tQue desea dar de baja?\n\t[1] = Usuario\n\t[2] = Serie\n\tRespuesta: ",auxiliar_Baja)){
                    printf("\n\tERROR! La respuesta debe ser un numero.");
                    break;
                }
                auxBaja = atoi(auxiliar_Baja);

                if(auxBaja == 1){

                    baja_usuario(listaDeUsuarios,15);
                    break;

                }else if(auxBaja == 2){

                    baja_serie(listaDeSeries,5);
                    break;

                }else{
                    printf("\n\tNo eligio ninguna opcion.\n");
                    break;
                }

                break;

         case 3:

                break;


         case 4:
                mostrarListaSeries(listaDeSeries, 5);
                system("\npause");
                break;

         case 5:
                mostrarListaUsuarios(listaDeUsuarios,TAMUSUARIO);
                break;

         case 6:
                mostrarUsuarioConSuSerie(listaDeUsuarios,TAMUSUARIO,listaDeSeries,TAMSERIE);
                break;

         case 7:

                break;

         case 8:
                seguir = 'n';
                break;
     }
 }

    return 0;
}
