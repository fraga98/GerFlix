
#include "Serie.h"

typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);
void alta_Usuarios(eUsuario[]);
void baja_usuario(eUsuario [], int);
void mostrarListaUsuarios(eUsuario[], int);
void mostrarUsuarioConSuSerie(eUsuario[], int, eSerie[], int);
//void mostrarSerieConSuUser(eSerie [], int, eUsuario [], int)
