#include <iostream>
#include <bitset>

void Arithmetic(int binary1, int binary2, char TypeOfArithmetic){
    int binary3 = 0;
    switch(TypeOfArithmetic){
        case 'A':
            binary3 = binary1 + binary2;
            std :: cout << std :: bitset<32>(binary3);
            break;
        case 'B':
            binary3 = binary1 - binary2;
            std :: cout << std :: bitset<32>(binary3);
            break;

        case 'C':
            binary3 = binary1 >> 1;
            std :: cout << std :: bitset<32>(binary3);
            binary3 = binary2 >> 1;
            std :: cout << std :: bitset<32>(binary3);
            break;
        
        case 'D':
            binary3 = binary1 >> 1;
            std :: cout << std :: bitset<32>(binary3);
            binary3 = binary2 >> 1;
            std :: cout << std :: bitset<32>(binary3);
            break;
    }
    }


int main(){
    int binary1 = 0b111011101011;
    int binary2 = 0b111011101011;
    char TypeOfArithmetic = 'A';
    Arithmetic(binary1,binary2, TypeOfArithmetic);
    return 0;
}
