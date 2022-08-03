#include <iostream>
#include <stdlib.h>

extern void count_digits(int[][4]);

int main(int argc,char **argv)
{
    int array[4][4] ={  {2, 4, 5, 4}, 
                        {9, 0, 19,5},
                        {2, 4, 1, 43},
                        {5, 5, 5, 5}};
	count_digits(array);
	return 0 ;
}