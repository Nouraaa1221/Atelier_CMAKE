#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculator.h"

int main(int argc, char *argv[]){
    
	if (argc < 3 || (argc < 4 && strcmp(argv[1], "car") != 0)) {
        printf("Erreur de parametres\n");
        return 1;
    }
    
    char* op = argv[1];
    char* a = argv[2];
    double r = 0;
    int handled = 0;

  
    if (argc == 4) {
        char* b = argv[3];

        if (strcmp(op, "add") == 0) {
            r = _add(atof(a), atof(b));
            handled = 1;
        }
        else if (strcmp(op, "sub") == 0) {
            r = _sub(atof(a), atof(b));
            handled = 1;
        }
        else if (strcmp(op, "mul") == 0) {
            r = _mul(atof(a), atof(b));
            handled = 1;
        }
        else if (strcmp(op, "div") == 0) {
            r = _div(atof(a), atof(b));
            handled = 1;
        }
    } 
    
   
    else if (argc == 3) {
        if (strcmp(op, "car") == 0) {
            r = _car(atof(a)); 
            handled = 1;
        }
    }
    

    if (handled) {
        printf("%lf\n", r); // Format de sortie corrigé pour les tests (avec saut de ligne)
    } else {
        printf("Erreur de parametres\n");
    }

	return 0;
}
