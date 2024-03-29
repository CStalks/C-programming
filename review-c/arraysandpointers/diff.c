#include <stdio.h>
int diff(int * arr, int size);

int main(void){
    int arr1[5] = {33,2,8,10,11};
    int arr2[10] = {33,2,8,10,11,9,15,100,88,34};
    int arr3[8] = {33,2,8,10,11,2,4,9};
    int arr4[3] = {2020,2,8};

    printf("Difference for highest - lowest value for arr1: %d\n", diff(arr1,5));
    printf("Difference for highest - lowest value for arr1: %d\n", diff(arr2,10));
    printf("Difference for highest - lowest value for arr1: %d\n", diff(arr3,8));
    printf("Difference for highest - lowest value for arr1: %d\n", diff(arr4,3));

    return 0;
}

//return the largest value of the array 
int diff(int * arr, int size){
    int largestVal = *(arr + 0);
    int smallestVal = *(arr + 0);

    for(int i = 0; i < size; i++){
        if(*(arr + i) >= largestVal)
            largestVal = *(arr + i);
       
        if(*(arr + i) < smallestVal)
            smallestVal = *(arr + i);
    }

    return largestVal - smallestVal;
}