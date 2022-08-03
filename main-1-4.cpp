#include <iostream>
#include <stdlib.h>

extern void print_scaled(int[][3],int);

int main(int argc,char **argv)
{
    int array[3][3] ={  {2, 4, 5}, 
                        {9, 0, 19},
                        {2, 4, 1}};
	int scale = 3;
    print_scaled(array,scale);
	return 0 ;
}