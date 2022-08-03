#include <iostream>
#include <stdlib.h>

extern int sum_min_max(int*,int);

int main(int argc,char **argv)
{
    int array[5] ={54,2,5,69,3};
	
    sum_min_max(array,5);
	return 0 ;
}