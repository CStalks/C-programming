#include <stdio.h>
#define SIZE 4
void sumArr(int *arr1,int *arr2,int *arr3, int size);

int main(void){
    //sums the value of arr1 and 2 to arr3
    int arr1[SIZE] = {2,4,5,8};
    int arr2[SIZE] = {1,0,4,6};
    int arr3[SIZE];

    sumArr(arr1,arr2,arr3,SIZE);
    for(int i = 0; i < SIZE; i++){
        printf("%d + %d = %d",   *(arr1 + i),*(arr2 + i), *(arr3 + i));
        printf("\n");
    }

    return 0;
}

void sumArr(int *arr1,int *arr2,int *arr3, int size){
    for(int i = 0; i < size; i++){
        *(arr3 + i) = *(arr1 + i) + *(arr2 + i);
    }
}