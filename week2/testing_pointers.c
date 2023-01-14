#include <stdio.h>

typedef enum month{ jan, feb, mar, apr, may, jun, jul, aug, sep, oct ,nov, dec} month;
typedef struct date{ month m; int d;} date;


void add_one_day(date* date){
    date -> d++; 
}

int main(){
    date some_date = {jan,2};
    printf("dates before add some value %d", some_date.d);
    add_one_day(&some_date);
    printf("dates after add value day %d", some_date.d);
    return 0;
}