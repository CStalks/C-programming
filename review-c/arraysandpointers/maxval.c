#include <stdio.h>
int max(int * arr, int size);

int main(void){
    int arr1[5] = {33,2,8,10,11};
    int arr2[10] = {33,2,8,10,11,9,15,100,88,34};
    int arr3[8] = {33,2,8,10,11,2,4,9};
    int arr4[3] = {2020,2,8};

    printf("Max Value for arr1: %d\n", max(arr1,5));
    printf("Max Value for arr2: %d\n", max(arr2,10));
    printf("Max Value for arr3: %d\n", max(arr3,8));
    printf("Max Value for arr4: %d\n", max(arr4,3));

    return 0;
}

//return the largest value of the array 
int max(int* arr, int size){
    int maxValue = 0;

    for(int i = 0; i < size; i++){
        if((*(arr + i)) >= maxValue){
            maxValue = *(arr + i);
        }
    }
    return maxValue;
}