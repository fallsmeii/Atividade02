#include <stdio.h>

int print(int i){
    printf("mostrar a função de %d\n", i);
    return 1; 
}

int main(void) {
    int a = 20;

    /*aqui printf (a) não é chamado
já que a a' !=20' é falso*/
    if(a != 20 && print(a)){
        printf("Eu não serei mostrado!\n");
    }



/* aqui o print (a) é chamado ja que a 
'a == 20' é verdadeiro*/
if (a == 20 && print(a)) {
    printf("vou ser mostrado!\n");
}

return 0;

}