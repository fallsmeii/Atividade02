#include <stdio.h>

int main() {
    int a = 20;
    int b = -5;

    
    /*Inicialmente, a primeira operação do cod estava (a != 20 && b == -5/ se 'a for diferente de 20 e b for igual -5)
    o que está incorreto, pq 'a = 20
    o && é significa AND o que ta tentando "nivelar" com a outra equação b == -5 */

    if (a != 20 || b == -5) { // aqui optei por mudar o sinal de && (and) para || (OR) dando a opção de execultar o cod mesmo o 'a sendo false, ja que o 'b é true 
        // 'a é diferente de 20 OR 'b é igual a -5
        printf("Eu serei impresso!\n"); 
    }

    return 0;
}
