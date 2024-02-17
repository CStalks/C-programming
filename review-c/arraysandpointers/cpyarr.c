#include <stdio.h>
#define SIZE 5

void copy_arr(double target[], double source[], int size);
void copy_ptr(double* target2, double* source, int size);
void copy_ptrs(double* target3, double* source, double *size);
void printArrCpy(double* target, int size);

int main(){

    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};

    double target1[SIZE];
    copy_arr(target1, source, SIZE); 
    printArrCpy(target1,SIZE);

    double target2[SIZE];
    copy_ptr(target2, source, SIZE);
    printArrCpy(target2,SIZE);


    double target3[SIZE];
    copy_ptrs(target3,source, source + SIZE);
    printArrCpy(target3,SIZE);

    return 0;
}

//copy by array notation
void copy_arr(double target[], double source[], int size){
    for(int i = 0; i < size; i++){
        target[i] = source[i];
    }
}

//copy by pointer notation
void copy_ptr(double* target, double* source, int size){
    for(int i = 0; i < size; i++){
        *(target + i) = *(source + i);
    }
}

//copy by pointer notation
void copy_ptrs(double* target, double* source, double* size){
    while(target < size){
        *target++ = *source++;
    }
}

//prints the contents in the array
void printArrCpy(double* target, int size) {
    for(int i = 0; i < size; i++){
        printf("%lf ", target[i]);  
    } printf("\n");
}