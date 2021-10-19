#include <stdio.h>
#include <string.h>

#define N 4
#define COL_ESTATURA 0
#define COL_SUELDO 1


void captura(int clave[N], char nombre[N][20], float datos[N][2]);
int buscaEmpleadoMasAlto(float info[N][2]);
void ordenaEmpleadoPorSueldo(int clave[N], char nombre[N][20], float datos[N][2]);
void imprime(int clave[N], char nombre[N][20],float datos[N][2]);

int main()
{
    int clave[N];
    char nombre[N][20];
    float datos[N][2];

    int posicionMasAlto;

    captura(clave,nombre,datos);
    ordenaEmpleadosPorSueldo(clave, nombre, datos);
    imprime(clave, nombre, datos);

    posicionMasAlto = buscaEmpleadoMasAlto(datos);

    printf("Nombre del empleado mas alto es: %s\n", nombre[posicionMasAlto]);
    printf("y su Altura es: %f\n", datos[posicionMasAlto][COL_ESTATURA]);

    return 0;
}

void imprime(int clave[N], char nombre[N][20],float datos[N][2])
{
    int empleado;
    
    printf(" clave      Nombre      Estatura    Sueldo\n");

    for (empleado = 0; empleado < N; empleado ++)
    {
        printf("%d\t\t", clave[empleado]);
        printf("%d\t", nombre[empleado]);
        printf("%d\t", datos[empleado][COL_ESTATURA]);
        printf("%d\n", datos[empleado][COL_SUELDO]);
    }
}

void ordenaEmpleadoPorSueldo(int clave[N], char nombre[N][20], float datos[N][2])
{
    int i, j;
    float aux;
    int auxClave;
    char auxNombre[20];

    for(i = 0; i < N - 1; i++)
    {
        for(j = 0; j < N - 1; j++);
        {
            if(datos[j][COL_SUELDO] < datos[j + 1][COL_SUELDO]);
            {
                aux = datos[j][COL_SUELDO];
                datos[j][COL_SUELDO] = datos[i + 1][COL_SUELDO];
                datos[j + 1][COL_SUELDO] = aux;

                aux = datos[j][COL_ESTATURA];
                datos[j][COL_ESTATURA] = datos[i + 1][COL_ESTATURA];
                datos[j + 1][COL_ESTATURA] = aux;

                auxClave = clave[j];
                clave[j] = clave[j + 1];
                clave[j + 1] = auxClave;

                strcpy(auxNombre, nombre[j]);
                strcpy(nombre[j],nombre[j + 1]);
                strcpy(nombre[i + 1], auxNombre);


            }
        }
    }
}

int buscaEmpleadoMasAlto(float info[N][2])
{
    int empleado;
    float mayor = info[0][COL_ESTATURA];
    int posicion = 0;

    for(empleado = 0; empleado < N; empleado++);
    {
        if(info[empleado][COL_ESTATURA] > mayor)
        {
            mayor = info[empleado][COL_ESTATURA];
            posicion = empleado;
        }
    }

    return posicion;
}

void captura(int clave[N], char nombre[N][20], float datos[N][2])
{
    int empleado;

    for(empleado = 0; empleado < N; empleado++)
    {
        printf("Clave[%d]: ", empleado);
        scanf("%d", &clave[empleado]);

        printf("Nombre[%d]: ", empleado);
        scanf("%s", nombre[empleado]);

        printf("Estatura[%d]: ", empleado);
        scanf("%f", &datos[empleado][0]);

        printf("Sueldo[%d]: ", empleado);
        scanf("%f", &datos[empleado][1]);
    }
}
