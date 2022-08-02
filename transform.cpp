#include <iostream>

int DecimalToBinary(int decimal){
    long binaryNum = 0;
    int i = 1;
    int base = 2;
    int remainder = 0;

    while (decimal > 0){
        binaryNum = (decimal % base)* i;
        decimal /= base;
        
        i *= 10;
    }
    return binaryNum;

}

int main(){
    int decimal = 75;
    std :: cout << DecimalToBinary(decimal);
    return 0;
}