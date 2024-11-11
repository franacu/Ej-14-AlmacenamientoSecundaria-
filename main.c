//Escriba un programa que elimine un archivo.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LONG 256
int main()
{
    char *archivo1="ejercicio14.txt";
    FILE *fp;
    char linea[MAX_LONG];
    fp= fopen(archivo1,"a");
    if(fp==NULL)
    {
        printf("No se abrio con exito\n");
        return -1;
    } else
        {
            printf("Se abrio con exito\n");
            fprintf(fp,"TEXTO DENTRO DE ARCHIVO\n");
        }

    fclose(fp);
    fp= fopen(archivo1,"r");

    while (fgets(linea, MAX_LONG, fp) != NULL)
    {
        printf("%s", linea);
    }
    remove(archivo1);


    return 0;
}
