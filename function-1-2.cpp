#include <iostream>

int is_identity(int array[10][10]){
    int is_identity = 1;
    for (int i = 0; i < 10; i++){
        if(array[i][i] == 1){
            array[i][i] = 0;
        } else {
            is_identity = 0;
            return is_identity;                
        }
       
    int zeros[10][10] = {0};
    if(array == zeros){
        is_identity = 0; 
    } else{
        return is_identity;
    }

    return is_identity;

    }
}