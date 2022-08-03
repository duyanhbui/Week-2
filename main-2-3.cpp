#include <iostream>
#include <stdlib.h>

extern int sum_if_palindrome(int*,int);

int main(int argc,char **argv)
{
    int array[4] ={1,2,2,1};
	
    sum_if_palindrome(array,4);
	return 0 ;
}