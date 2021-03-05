#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define amount 100000 //519277

/*
void main(){
    int array[amount], i = 0, num = amount;

    time_t begin, end;

    begin = time(NULL);
    while (i < amount){
        array[i] = i;
        i++;
    }

    printf("Added values!\n");

    for (int n = 0; n < amount; n++){
       if (array[n] == num){
            printf("Is in!\n");
            break;
        } else if (n = amount - 1)
            printf("Isn't in!\n");
    }

    end = time(NULL);
    printf("Time: %f",difftime(end,begin));

}
*/

typedef struct Node Node;

struct Node{
    int data;
    Node* next;
};

Node* first;

void addNode(int data){
    Node *new;

    new = (Node *) malloc (sizeof(Node));

    new->data = data;
    new->next = NULL;

    if (!first){
        first = new;
    } else{
        Node *tmp = first;
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
}

int linearSearch(int data){
    Node *tmp = first;

    if (!first)
        return 0;

    while (tmp){
        if (tmp->data == data)
            return 1;
        tmp = tmp->next;
    } return 0;
}

void main(){
    first = (Node *) NULL;
    time_t begin, end;

    //begin = time(NULL);

    for (int i = 0; i < amount; i++)
        addNode(i);

    printf("Added values\n\n");

    begin = time(NULL);
    int res = linearSearch(amount);
    end = time(NULL);

    printf("Time: %f\n\n", difftime(end,begin));

    (res == 1)? printf("Is in"): printf("Is not in");
}
