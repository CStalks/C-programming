#include <stdio.h>
int maxIndex(int * arr, int size);

int main(void){
    int arr1[5] = {33,2,8,10,11};
    int arr2[10] = {33,2,8,10,11,9,15,100,88,34};
    int arr3[8] = {33,2,8,10,11,222,4,9};
    int arr4[3] = {0,2,8};

    printf("Max index value for arr1: %d\n", maxIndex(arr1,5));
    printf("Max index value for arr2: %d\n", maxIndex(arr2,10));
    printf("Max index value for arr3: %d\n", maxIndex(arr3,8));
    printf("Max index value for arr4: %d\n", maxIndex(arr4,3));

    return 0;
}

//return the index of the largest value in array 
void reverse(double * arr, int size){
    double *start, *end;

    for(int i = 0; i < size; i++){
        if(*start)
        double tmp = *(arr + i);
        *(arr
    }
}