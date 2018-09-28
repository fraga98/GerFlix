
#include "Serie.h"
#include <string.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void alta_Series(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void baja_serie(eSerie serie[], int cantSerie){

    int i, aux_id;
    char auxId[21];

    if(!getStringNumeros("\n\tIngrese ID Serie: ",auxId)){
        printf("\n\tERROR! La ID debe contener solo numeros.");
    }

    aux_id = atoi(auxId);

    for(i=0;i<cantSerie;i++){

        if(serie[i].estado == 1){

            if(aux_id == serie[i].idSerie){
                serie[i].estado = 0;
                system("cls");
                printf("\n\tSERIE DADA DE BAJA!\n");
                break;

            }else{

                system("cls");
                printf("\n\tSERIE INEXISTENTE!\n");
                break;
            }
        }
    }
}
void mostrarListaSeries(eSerie serie[], int cant){

    int i;

    for(i=0;i<cant;i++){
        if(serie[i].estado == 1){
            printf("\n\t%d -- %s -- %s -- %d\n\n\n",serie[i].idSerie,serie[i].nombre,serie[i].genero,serie[i].cantidadTemporadas);
        }
    }
}




