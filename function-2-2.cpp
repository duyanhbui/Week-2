#include <iostream>


int binary_to_int(int binary_digits[], int number_of_digits){
    int decimal = 0;
    int step = 1;
    for (int i = number_of_digits-1;i >= 0; i--){
        decimal += binary_digits[i]*step;
        step += step;
    }
    return decimal;
}