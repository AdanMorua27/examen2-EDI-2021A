#include <stdio.h>

#define N 50

void leeArreglo(int arr[N]);
void capturaDeDatos(char nombres[N],int claves[N],float estaturas[N],float sueldos[N]); 
void buscaElEmpleadoMasAlto(int arr[N]);
void ordenamientoEmpleado(int arr[N]);
void impresionDeDatos(char nombres[N],int claves[N],float estaturas[N],float sueldos[N]); 


int main()
{
    char nombres;
    int claves;
    int arreglo[N];
    float estaturas[N];
    float sueldos[N];

    leeArreglo(arreglo);
    ordenamientoEmpleado(arreglo);

    return 0;
}

void capturaDeDatos(char nombres[N],int claves[N],float estaturas[N],float sueldos[N]) 
{
    printf("captura los datos ");
    for(int i = 0; i < N; i++)
    {
        printf("Datos No. %d",i);
        for (int i = 0; i < N; i++)
        {
            printf("Datos No. %d",i);
            for(int j = 0; i < N; i++)
            {
                printf("Nombre:  ");
                scanf("%s", &nombres[j]);
                printf("Estatura:  ");
                scanf("%f", &estaturas[j]);
            }
        }
    }
}

void buscaElEmpleadoMasAlto(int arr[N])
{
    int i;
    int m;

    for(i=0; 1< N; i++)
    {
        if(arr[i] > m)
        {
            m = arr[i];
        }
    }

    return m;
}

void ordenamientoEmpleado(int arr[N])
{
     int i,j;
    int aux;

    for(j=0; j < N-1; j++)
    {
        for(i = 0; i < N -(j + 1); j++)
        {
            if(arr[i] > arr[i + 1])
            {
                aux = arr[i + 1];
                arr[i +1] = arr[i];
                arr[i] = aux;
            }
        }
    }
}

void impresionDeDatos(char nombres[N],int claves[N],float estaturas[N],float sueldos[N])
{
    pritnf("\n");
    printf("impresion \n");
    printf("clave:  ");
    printf("Nombres:  ");
    printf("estaturas:  ");
    printf("sueldo:  ");

    for(int i = 0; i < N; i++)
    {
        printf("\n");
        printf("%d",claves[i]);
        printf("%s",nombres[i]);
        printf("%f",estaturas[i]);
        printf("%f",sueldos[i]);
    }

}

 void leerArreglo(int arr[N])
{
    int i;

    for(i=0; i < N; i++)
    {
        printf("Arreglo[%d]: ", i);
        scanf("%d", &arr[i]);
    }


}