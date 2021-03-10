#include <stdio.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
#define amount 400000000 //400000000 - 300000000 - 200000000 - 100000000 - 50000000 - 10000000 - 5000000 - 1000000 - 100000

//#include <sys/resource.h>

int main(){
    double time_spent = 0.0;
 
    static int array[amount]; //Declarar el array como static elimina la restriccion 
    int i = 0, num = amount;    // para el tamaño del array

    while (i < amount){
        array[i] = i;
        i++;
    }

    printf("Items in the array: %d\n", amount);
    
    clock_t t1 = clock();
    for (int n = 0; n < amount; n++){
       if (array[n] == num){
            printf("The number is in!\n");
            break;
        } else if (n == amount - 1)
            printf("The number isn't in!\n");
    }

    clock_t t2 = clock();

    time_spent += (double)(t2 - t1) / CLOCKS_PER_SEC;
    printf("\nTime elapsed is %f seconds", time_spent);

    printf("\nMemory used: %d bytes", sizeof(time_spent) + sizeof(array) + sizeof(i)*3 + sizeof(t1)*2);

    //struct rusage r_usage;
    //getrusage(RUSAGE_SELF,&r_usage);
    // Print the maximum resident set size used (in kilobytes).
    //printf("Memory usage: %ld kilobytes\n",r_usage.ru_maxrss);

    return 0;
}