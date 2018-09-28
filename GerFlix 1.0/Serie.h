
typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

}eSerie;

void inicializarSeriesEstado(eSerie[], int);
void alta_Series(eSerie[]);
void baja_Serie(eSerie serie[], int cantSeries);
void mostrarListaSeries(eSerie[], int);
