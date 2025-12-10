#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include "./../include/calculator.h"
 
int main(int argc, char *argv[]){

    // --- Cas du carré : 1 seul nombre ---

    if (argc == 3) {

        char* op = argv[1];

        char* a = argv[2];
 
        if (strcmp(op, "car") == 0) {

            double r = _car(atof(a));

            printf("%lf", r);

            return 0;

        }

    }
 
    // --- Cas des opérations à 2 nombres ---

    if (argc == 4)

    {

        char* op = argv[1];

        char* a = argv[2];

        char* b = argv[3];

        double r = 0;
 
        if (strcmp(op, "add") == 0) {

            r = _add(atof(a), atof(b));

            printf("%lf",r);

        }

        else if (strcmp(op, "sub") == 0) {

            r = _sub(atof(a), atof(b));

            printf("%lf",r);

        }

        else if (strcmp(op, "mul") == 0) {

            r = _mul(atof(a), atof(b));

            printf("%lf",r);

        }

        else if (strcmp(op, "div") == 0) {

            r = _div(atof(a), atof(b));

            printf("%lf",r);

        }

        else {

            printf("Erreur de parametres");

        }

    }

    else {

        printf("Erreur : nombre de paramètres invalide");

    }
 
    return 0;

}

 
