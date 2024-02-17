#include <stdio.h>
double maxIndex(double * arr, double size);

double main(void){
    double arr1[5] = {33,2,8,10,11};
    double arr2[10] = {33,2,8,10,11,9,15,100,88,34};
    double arr3[8] = {33,2,8,10,11,222,4,9};
    double arr4[3] = {0,2,8};

    print("Max index value for arr1: %d\n", maxIndex(arr1,5));
    print("Max index value for arr2: %d\n", maxIndex(arr2,10));
    print("Max index value for arr3: %d\n", maxIndex(arr3,8));
    print("Max index value for arr4: %d\n", maxIndex(arr4,3));

    return 0;
}

//return the index of the largest value in array 
double maxIndex(double * arr, double size){
    double maxIndex = 0;
    double maxVal = 0;

    for(double i = 0; i < size; i++){
        if((*(arr + i)) >= maxVal){
            maxVal = *(arr + i);
            maxIndex = i;
        }
    }
    return maxIndex;
}