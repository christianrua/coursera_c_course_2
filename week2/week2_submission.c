/*  Natural or Social Science Focus assigment
    Christian Rua
    Jan 4, 2023

    Write enumerated types that supports dates—such as december 12. Then add a function that produces a next day.  

    So nextday(date) of december 12 is december 13. Also write a function printdate(date) that prints a date legibly.

    The function can assume that February has 28 days and it most know how many days are in each month. 
    Use a struct with two members; one is the month and the second  is the day of the month—an int (or short).
*/

#include <stdio.h>

typedef enum month{ jan, feb, mar, apr, jun, jul, aug, sep, oct ,nov, dec} month;
typedef struct date{ month m; int d;} date;

date nextday(date d){
    printf("some value %d", d.m);
    return d;
    }

void printdate(date d){
    switch(d.m){
        case jan: printf(" January %d", d.d); break;
        case feb: printf(" February %d", d.d); break;
        case mar: printf(" March %d", d.d); break;
        case apr: printf(" April %d", d.d); break;
        case jun: printf(" June %d", d.d); break;
        case jul: printf(" July %d", d.d); break;
        case aug: printf(" August %d", d.d); break;
        case sep: printf(" September %d", d.d); break;
        case oct: printf(" October %d", d.d); break;
        case nov: printf(" November %d", d.d); break;
        case dec: printf(" December %d", d.d); break;
        default: printf("%d is an error", d);
    }
}    

int main(){
    date some_date = {jan,2};
    printdate(some_date);
    return 0;
}