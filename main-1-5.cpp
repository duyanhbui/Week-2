#include <iostream>
#include <stdlib.h>

extern void print_summed(int[][3],int[][3]);

int main(int argc,char **argv)
{
    int array1[3][3] ={ {2, 4, 5}, 
                        {9, 0, 19},
                        {2, 4, 1}};
    int array2[3][3] ={ {2, 4, 5}, 
                        {9, 0, 19},
                        {2, 4, 1}};    
	print_summed(array1,array2);
	return 0 ;
}