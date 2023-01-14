/*  Natural or Social Science Focus assigment
    Christian Rua
    Jan 4, 2023

    Write enumerated types that supports dates—such as december 12. Then add a function that produces a next day.  

    So nextday(date) of december 12 is december 13. Also write a function printdate(date) that prints a date legibly.

    The function can assume that February has 28 days and it most know how many days are in each month. 
    Use a struct with two members; one is the month and the second  is the day of the month—an int (or short).
*/

#include <stdio.h>

typedef enum month{ jan, feb, mar, apr, may, jun, jul, aug, sep, oct ,nov, dec} month;
typedef struct date{ month m; int d;} date;

void add_one_day(date* date){
    date -> d++; 
}

void add_one_month(date* date){
    date -> m++;
}

void nextday(date* date){

    switch(date -> d){
        case 28: 
            if(date -> m == 1){
                add_one_day(date);
                add_one_month(date);
            } else {
                add_one_day(date);
            }
            break;
        case 30: 
            if(date -> m == 3 || date -> m == 5 || date -> m == 10 ){
                    add_one_day(date);
                    add_one_month(date);
                } else {
                    add_one_day(date);
            }
            break;
        case 31: 
            if(date -> m == 0 || date -> m == 2 || date -> m == 4 || date -> m == 6 || date -> m == 7 || date -> m == 9 || date -> m == 11  ){
                    add_one_day(date);
                    add_one_month(date);
                } else {
                    add_one_day(date);
            }
            break;        
        }
    }

void printdate(date d){
    switch(d.m){
        case jan: printf(" January %d", d.d); break;
        case feb: printf(" February %d", d.d); break;
        case mar: printf(" March %d", d.d); break;
        case apr: printf(" April %d", d.d); break;
        case may: printf(" May %d", d.d); break;
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
    // Do this for the following dates:  February 28, March 14, October 31, and  December 31
   
    struct date arr_date[4] = {
                            {feb,28},
                            {mar,14},
                            {oct,31},
                            {dec,31}
                        };

    for(int i=0; i < 5; i++){
        printdate(arr_date[i]);
        nextday(&arr_date[i]);
        printdate(arr_date[i]);
    };
    return 0;
}