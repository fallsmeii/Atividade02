#include <stdio.h>

/*A função print é uma função em linguagem de programação C que recebe um argumento inteiro (i) e retorna um valor inteiro,
 no caso deste cod o i = 20*/
int print(int i) {
    if (i == 20) { // se i = 20 for vdd o bloco do if é executado
        printf("Mostrando a função para %d\n", i); 
        return 1; // o return 1 está mostrando que deu certo
    } else  { // se i != de 20 o bloco else é execultado
        printf("Não mostrando a função para %d\n", i);
        return 0;
    }
}
// o cod n rodava pq faltava a função else 
// declaração de função logo acima, o cod só roda se tiver a declaração antes

int main(void) {
    int a = 20; // mude o valor de a e as função vão ser chamada de forma diferente 

    /* Aqui, printf(i) não é chamado
    porque a 'a != 20' é falso */
    if ((a != 20) && print(a)) {            // (!= é o sinal de diferença) 
        printf("Eu não serei mostrado!\n");
    }

    /* Aqui, print(i) é chamado porque
    a 'a == 20' é verdadeiro */
    if ((a == 20) && print(a)) {
        printf("Eu vou ser mostrado!\n");
    }

    return 0;
}