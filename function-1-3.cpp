#include <iostream>

void count_digits(int array[4][4]){
    int cnt_array[11] = {0};
    for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if (array[i][j] < 10){
                    cnt_array[array[i][j]] += 1;
                }
    }
    }
    std :: cout << "1:" << cnt_array[1] <<";2:" << cnt_array[2]<< ";3:" << cnt_array[3] <<";4:" << cnt_array[4]<< ";5:" << cnt_array[5] << ";6:" << cnt_array[6] <<";7:" << cnt_array[7]<< ";8:" << cnt_array[8] <<";9:" << cnt_array[9]<< ";" << std :: endl;
    
}