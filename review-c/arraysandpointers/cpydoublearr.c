#include <stdio.h>
#define ROW 3
#define COL 3

void copy_arr(double target[], double source[], int size);
void printArrCpy(double* target, int size);

int main() {
    double source2DArr[ROW][COL] = { {1,2,3},
                                           {4,5,6},
                                           {7,8,9},
                                        };

    double target2DArr[ROW][COL];
    copy_arr(target2DArr[0], source2DArr[0], ROW);
    copy_arr(target2DArr[1], source2DArr[1], ROW);
    copy_arr(target2DArr[2], source2DArr[2], ROW);

    printArrCpy(target2DArr[0], ROW);
    printArrCpy(target2DArr[1], ROW);
    printArrCpy(target2DArr[2], ROW);

    return 0;
}

//copy by array notation
void copy_arr(double target[], double source[], int size){
    for(int i = 0; i < size; i++){
        target[i] = source[i];
    }
}

//prints the contents in the array
void printArrCpy(double* target, int size) {
    for(int i = 0; i < ROW; i++){
        printf("%lf ", target[i]);  
    } printf("\n");
}