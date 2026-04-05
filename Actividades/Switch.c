#include <stdio.h>
#include <unistd.h>
void sumar(int a,int b){
    int r = a + b;
    printf("La suma es : %i",r);
}

void restar(int a,int b){
    int r = a - b;
    printf("%i",r);
    
}

void multiplicar(int a, int b){
    int r=a * b;
    printf("%i",r);
    
}

void dividir(int a , int b){
    int r= a/b;
    printf("%i",r);
    
}

int main()
{
    int opc=0;
    
    do{
        printf("\nBienvenido a mi calculadora\n1.-Sumar\n2.-Restar\n3.-Dividir\n4.-multiplicar\n5.-Salir\n");
        scanf("%d",&opc);
        switch(opc){
            case 1:{
                int n1,n2;
                printf("Escribe un numero: ");
                scanf("%d", &n1);
                printf("Escribe otro numero: " );
                scanf("%d", &n2);
                sumar(n1,n2);
                break;
            }
            case 2:{
                int n1,n2;
                printf("Escribe un numero: ");
                scanf("%d", &n1);
                printf("Escribe otro numero: " );
                scanf("%d", &n2);
                restar(n1,n2);
                break;
            }
            case 3:{
                int n1,n2;
                printf("Escribe un numero: ");
                scanf("%d", &n1);
                printf("Escribe otro numero: " );
                scanf("%d", &n2);
                dividir(n1,n2);
                break;
            }
            case 4:{
                int n1,n2;
                printf("Escribe un numero: ");
                scanf("%d", &n1);
                printf("Escribe otro numero: " );
                scanf("%d", &n2);
                multiplicar(n1,n2);
                break;
            }
        }
        sleep(2);
    }while(opc != 5);
    
    return 0;
}