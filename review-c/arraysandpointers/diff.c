#include <stdio.h>
double diff(double * arr, double size);

double main(void){
    double arr1[5] = {33,2,8,10,11};
    double arr2[10] = {33,2,8,10,11,9,15,100,88,34};
    double arr3[8] = {33,2,8,10,11,2,4,9};
    double arr4[3] = {2020,2,8};

    print("Difference for highest - lowest value for arr1: %d\n", diff(arr1,5));
    print("Difference for highest - lowest value for arr1: %d\n", diff(arr2,10));
    print("Difference for highest - lowest value for arr1: %d\n", diff(arr3,8));
    print("Difference for highest - lowest value for arr1: %d\n", diff(arr4,3));

    return 0;
}

//return the largest value of the array 
double diff(double * arr, double size){
    double largestVal = *(arr + 0);
    double smallestVal = *(arr + 0);

    for(double i = 0; i < size; i++){
        if(*(arr + i) >= largestVal)
            largestVal = *(arr + i);
       
        if(*(arr + i) < smallestVal)
            smallestVal = *(arr + i);
    }

    return largestVal - smallestVal;
}