#include <stdio.h>

int main() //função principal
{
    char sentence[] = "data : 06-06-2012"; //sentence é a variavel (do tipo char) que está declarando a frase = "data : 06-06-2012"
    char str[50]; // str ta declarando a palavra 'data' a cima
    int day, month, year; //colocando as três variaveis na mesma linha, ja que indica o mesmo tipo "int" = inteiro

    
    sscanf(sentence, "%s : %2d-%2d-%4d", str, &day, &month, &year); // a variavel 'year n estava sendo declarada, por isso o cod n rodava de forma certa
    // A função sscanf analisa a frase em sentence e pega partes específicas dela - data : dia, mês e ano 
   
    printf("%s -> %02d-%02d-%4d\n", str, day, month, year);
                // ?
    return 0;
}