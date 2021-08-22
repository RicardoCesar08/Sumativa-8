#include <stdio.h>
#include <stdlib.h>

/*Elaborar una aplicación de línea de comandos en C que luego de introducir un valor numérico entero positivo
pueda mostrar su tabla de multiplicar.*/

/*Para programar este codigo y todos los demas use Codeblocks pero no se que sucede que al ejecturarlo no funciona pero al ejecutarlo
en un compilador en linea como      https://www.onlinegdb.com/online_c_compiler      funciona perfectamente*/

int multiplicacion ();

int main(){

    multiplicacion ();

    return 0;
}

int multiplicacion (){

    int multiplicando, limSup, a, b;
    int multiplicador = 1, incremento = 1;
    int respuesta[1][limSup];

    printf("Ingrese el numero a multiplicar: ");
    scanf("%d", &multiplicando);
    printf("Hasta donde desea multiplicar: ");
    scanf("%d", &limSup);

    for(a=0; a<1; a++){
        for(b=0; b<limSup; b++){
            respuesta[a][b] = multiplicando*multiplicador;
            multiplicador = multiplicador + 1;
        }
    }

    printf("Tabla: \n");

    for(a=0; a<limSup; a++){

        printf("%d x %d = %d\n", multiplicando, incremento, respuesta[0][a]);
        incremento = incremento + 1;
    }
    return 0;
}
