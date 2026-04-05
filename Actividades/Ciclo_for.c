#include <stdio.h>
#include <string.h>

struct Alumno {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    struct Alumno alumnos[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Escribe el nombre del alumno: ");
        scanf("%s", alumnos[i].nombre);

        printf("Escribe la edad del alumno: ");
        scanf("%d", &alumnos[i].edad);

        printf("Escribe el promedio: ");
        scanf("%f", &alumnos[i].promedio);
    }
    printf("\n--- Lista de alumnos ---\n");
    for(i = 0; i < 3; i++) {
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Promedio: %.2f\n\n", alumnos[i].promedio);
    }

    return 0;
}