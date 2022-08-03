#include <iostream>
#include <stdlib.h>

extern int is_identity(int[10][10]);

int main(int argc,char **argv)
{
    int array[10][10] ={0};
    
    for(int i =0; i < 10; i++){
        array[i][i] = 1;
    }

	std :: cout <<  is_identity(array) << std :: endl;
	return 0 ;
}

