#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number){
    std::string::size_type sz; 
    int decimalNum = std :: stoi(decimal_number, &sz);


    long binaryNum = 0;
    int i = 1;
    int base = 2;

    while (decimalNum > 0){
        binaryNum += (decimalNum % base)* i;
        decimalNum /= base;
        
        i *= 10;
    };

    std :: string binary_str = std :: to_string(binaryNum);
    std :: cout << binary_str << "\n";
    

}
