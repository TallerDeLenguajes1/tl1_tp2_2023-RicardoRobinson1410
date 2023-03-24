#include <stdio.h>
#include<stdlib.h>
#include<time.h>

struct datospc
{
    int velocproc;
    int aniofabric;
    char* tipoproc;
    int cantnucleos;
};typedef struct datospc PC;

PC fnCargarestructura();
void Mostrarestructura(PC datos);
void CargarArreglo(PC aux[5]);
void MostrarArreglo(PC datos[5]);
int MenoranioFabric(PC datos[5]);
void MostrarMenorAnio(PC datos[5], int anio);
int mayorveloc(PC datos[5]);
void mostrarmayorveloc(PC datos[5], int veloc);

int main(){
    int menoranio;
    int masveloc;
    PC datos[5];
    CargarArreglo(datos);
    MostrarArreglo(datos);
    printf("-----------------\n\n");
    printf("      PC MAS NUEVAS      \n");
    menoranio=MenoranioFabric(datos);
    MostrarMenorAnio(datos,menoranio);
    printf("-----------------\n\n");
    printf("      PC MAS RAPIDAS      \n");
    masveloc=mayorveloc(datos);
    mostrarmayorveloc(datos, masveloc);
    return 0;
    
}
PC fnCargarestructura(){
    char *tipos[6]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    PC aux;
    aux.velocproc=1+rand()%4;
    aux.aniofabric=2015+rand()%9;
    aux.cantnucleos=1+rand()%8;
    aux.tipoproc=tipos[rand()%6];
    return(aux);
}
void Mostrarestructura(PC datos){
    printf("VELOCIDAD DE PROCESADOR: %d\n",datos.velocproc);
    printf("ANIO DE FABRICACION: %d\n",datos.aniofabric);
    printf("CANTIDAD DE NUCLEOS: %d\n",datos.cantnucleos);
    printf("tipo de procesador:  %s \n", datos.tipoproc);
}


void CargarArreglo(PC aux[5]){
    for(int i=0;i<5;i++){
        aux[i]=fnCargarestructura();
    }
}

void MostrarArreglo(PC datos[5]){
    for(int i=0;i<5;i++){
        printf("PC %d: \n",i);
        Mostrarestructura(datos[i]);
    }
}

int MenoranioFabric(PC datos[5]){
int anioaux=9999;
for(int i=0;i<5;i++){
    if(datos->aniofabric<anioaux){
        anioaux=datos->aniofabric;
    }
}
return(anioaux);
}

void MostrarMenorAnio(PC datos[5], int anio){
    for(int i=0;i<5;i++){
        if(datos[i].aniofabric==anio){
            Mostrarestructura(datos[i]);
        }
    }
}
int mayorveloc(PC *datos){
 int velocaux=0;
for(int i=0;i<5;i++){
    if(datos->velocproc>velocaux){
        velocaux=datos->velocproc;
    }
    datos++;
}
return(velocaux);
}   

void mostrarmayorveloc(PC datos[5], int veloc){
    for(int i=0;i<5;i++){
        if(datos[i].velocproc==veloc){
            Mostrarestructura(datos[i]);
        }
    }
}