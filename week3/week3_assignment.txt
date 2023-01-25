/*  Week 3 Assigment
    by Christian Rua
    Jan 23, 2023

    Develop a struct that can store an atomic element, such as Hydrogen -H -at.wt 1.008.

    Now create from input at the terminal the first ten elements in the periodic table as a linked list with this struct as data. 
    Then print out this information to the screen in a nicely readable form. 
    
    The struct should have three members—one stores the name of the element, a second stores it atomic symbol, and a third stores 
    its weight.    
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct atomic_element{
    char element_name[10];
    char atomic_simbol[2];
    double weight;
} atomic_element;

typedef struct list{struct atomic_element data; struct list *next;} list;

int is_empty(const list *l){ return (l == NULL);}

list* create_list(struct atomic_element d){
    list* head = malloc(sizeof(list));
    head -> data = d;
    head -> next = NULL;
    return head;
}

list* add_to_front(struct atomic_element d, list* h){
    list* head = create_list(d);
    head -> next = h;
    return head;
}

void print_list(list *h, char *title){
    printf("%s\n", title);
    while (h != NULL){
        printf("element name %s, atomic simbol %s, element weight %f \n", h -> data.element_name, h -> data.atomic_simbol, h -> data.weight);
        h = h -> next;
    }
}

list* array_to_list(struct atomic_element d[], int size){
    list* head = create_list(d[0]);
    int i;
    for(i = 1; i < size; i++){
        head = add_to_front(d[i], head);
    }
    return head;
}

int main(){
    list list_if_int;
    list* head = NULL;

    struct atomic_element arr_elemets[10] = {
                                                {"Hydrogen","H",1.008},
                                                {"Helium","He",4.003},
                                                {"Lithium","Li",6.941},
                                                {"Beryllium","Be",9.012},
                                                {"Boron","B", 10.811},
                                                {"Carbon","C",12.011},
                                                {"Nitrogen","N",14.007},
                                                {"Oxygen","O",15.999},
                                                {"Fluorine","F",18.998},
                                                {"Neon","Ne",20.180}
                                            };

    head = array_to_list(arr_elemets, 10);
    print_list(head, "multiple element list");
    printf("\n\n");
    return 0;
}
