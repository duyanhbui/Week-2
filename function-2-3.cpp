#include <iostream>


bool is_palindrome(int integers[], int length){

    bool isPalindrome = true;
    int i = 0;
    while (i < length){
        int front = 0 + i,back = (length-1) - i;
            
        if(front < back){
            if(integers[front] != integers[back]){
                isPalindrome = false;
                return isPalindrome;
            }            
        }
        i++;
        }
    return isPalindrome;
}


int sum_array_elements(int integers[], int length){
    int sum = 0;
    for (int i = 0; i < length; i ++){
        sum += integers[i];
    }
    return sum;
}

int sum_if_palindrome(int integers[], int length){
    if (length < 1){
        return -1;
    } else if(is_palindrome(integers,length) == false) {
        return -2;
    }
    else{
        return sum_array_elements(integers,length);
    }
}