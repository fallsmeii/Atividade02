#include <stdio.h>

int main() {

int a = 20;
int b = -5;

/*aqui 'b == -5 não é avaliado, desde a 'a != 20' seja falso*/

    if(a != 20 && b == -5) { //se o 'a for diferente (!=) de 20 e (&&) o 'b for igual (==) a -5 não aparecerá nada na tela
        printf("Eu não serei impresso!\n");
    }

    return 0;
}
