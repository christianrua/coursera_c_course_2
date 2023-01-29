/*  Week 4 assignment
    Christian Rua
    Jan 28, 2023

    Open and read a file of integers into an array that is created with the first integer telling you how many to read.
    So  4  9  11  12  15  would mean create an int array size 4 and read in the remaining 4 values into data[].
    Then compute their average as a double and their max  as an int.  
    Print all this out neatly to the screen and to an output file named answer-hw3.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX_HW 20

void read_data(FILE *ptr, int d[], int *size){
    *size = 0;
    while(fscanf(ptr, "%d", &d[*size]) == 1){
        (*size)++;
    }
}

void print_data(int d[], int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d\t", d[i]);
        if((i+1) % 10 == 0){
            printf("\n");
        }
    }
}

double average(int d[], int size){
    int i;
    double avg = 0.0;
    for(i = 0; i < size; i++){
        avg += d[i];
    }
    return(avg/size);
}

int get_max_value(int d[], int size){
    int max = 0;
    int i;
    for(i = 0; i < size; i++){
        if(d[i] > max){
            max = d[i];
        }
    }
    return max;
}

int main(){

    int number_of_items_to_read, array_size;
    double avg_value;
    int max_value;
    FILE *ifp, *ofp;

    ifp = fopen("input-file", "r+");
    ofp = fopen("answer-hw3", "w+");

    number_of_items_to_read = fgetc(ifp);
    array_size = number_of_items_to_read + 1;
    int data[array_size];
    read_data(ifp, data, &array_size);
    printf("total elements read: %d \n", array_size);
    printf("the elements readed are: \n");
    print_data(data, array_size);
    avg_value =  average(data, array_size);
    printf("\naverage value is: %10f \n", avg_value);
    max_value = get_max_value(data, array_size);
    printf("the max value is: %d \n", max_value);

    fprintf(ofp, "%d %10f",max_value, avg_value);

    fclose(ifp);
    fclose(ofp);

    return 0;
}