#include <stdio.h>
#define SIZE 5

void reverse(double* start, double* end);

int main(){
    double arr[SIZE] = {1.1,2.2,3.3,4.4,5.5};

    //before calling reverse
    for(int i = 0; i < SIZE; i++){
        printf("%lf ", arr[i]);  
    } printf("\n");

    reverse(arr, arr + SIZE - 1);

    //after calling reverse
    for(int i = 0; i < SIZE; i++){
        printf("%lf ", arr[i]);  
    } printf("\n");

    return 0;
}

void reverse(double* start, double* end){
    while(start < end ){
        double tmp = *start;
        *start++ = *end;
        *end-- = tmp;
    }
}