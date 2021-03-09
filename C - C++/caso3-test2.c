#include <stdio.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
#define amount 400000000

int main(){
    double time_spent = 0.0;
 
    static int array[amount]; //Declarar el array como static elimina la restriccion 
    int i = 0, num = amount;    // para el tamaño del array

    while (i < amount){
        array[i] = i;
        i++;
    }

    printf("Added values!\n");
    
    clock_t t1 = clock();
    for (int n = 0; n < amount; n++){
       if (array[n] == num){
            printf("Is in!\n");
            break;
        } else if (n == amount - 1)
            printf("Isn't in!\n");
    }

    clock_t t2 = clock();

    time_spent += (double)(t2 - t1) / CLOCKS_PER_SEC;
    printf("\n\nTime elpased is %f seconds", time_spent);

    return 0;
}