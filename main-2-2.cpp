#include <iostream>
#include <stdlib.h>

extern int binary_to_int(int*,int);

int main(int argc,char **argv)
{
    int array[4] ={1,0,0,1};
	
    binary_to_int(array,4);
	return 0 ;
}