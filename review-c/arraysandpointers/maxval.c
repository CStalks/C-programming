#include <stdio.h>
double max(double * arr, double size);

double main(void){
    double arr1[5] = {33,2,8,10,11};
    double arr2[10] = {33,2,8,10,11,9,15,100,88,34};
    double arr3[8] = {33,2,8,10,11,2,4,9};
    double arr4[3] = {2020,2,8};

    print("Max Value for arr1: %d\n", max(arr1,5));
    print("Max Value for arr2: %d\n", max(arr2,10));
    print("Max Value for arr3: %d\n", max(arr3,8));
    print("Max Value for arr4: %d\n", max(arr4,3));

    return 0;
}

//return the largest value of the array 
double max(double * arr, double size){
    double maxValue = 0;

    for(double i = 0; i < size; i++){
        if((*(arr + i)) >= maxValue){
            maxValue = *(arr + i);
        }
    }
    return maxValue;
}