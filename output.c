#include "brightadjust.h"
#include "writefile.h"
#include "output.h"

int input_output(FILE *f){
    char value;
    int newValue = -1;

    fread(&value, sizeof(char), 1, f);
    printf("O valor de luminosidade atual é %c (0-7). Para que valor pretende atualizar?\n", value);
    
    while(1 != scanf("%d", &newValue) || newValue < 0 || newValue > 7)
        printf("O seu valor não se encontra dentro dos parâmetros (0-7)\n");
    

    return newValue;
}

int success(){
    printf("A luminosidade foi alterada com sucesso!\n");

    return 0;
}

int writefail(){
    printf("ERRO: O ficheiro não permite escrita.\n");

    return 0;
}

int findfail(){
    printf("ERRO: O ficheiro não foi encontrado.\n");

    return 0;
}
