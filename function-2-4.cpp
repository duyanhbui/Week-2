#include <iostream>

int array_min(int integers[], int length){
    int min = 1000000;
    for (int i =0; i <length;i++){
        if (integers[i] < min){
            min = integers[i];
        }
    }
    return min;
}


int array_max(int integers[], int length){
    int max = -1000;
    for (int i =0; i <length;i++){
        if (integers[i] > max){
            max = integers[i];
        }
    }
    return max;
}

int sum_min_max(int integers[], int length){
    int max = array_max(integers,length);
    int min = array_min(integers,length);
    int sum = min + max;
    if (length < 1 || min < 0 || max < 0 ){
        return -1;
    }else{
        return sum;
    }
}