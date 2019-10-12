#include <stdio.h>
#include <stdint.h>

int ncmp ;

//check if this function actually works!!!
void x (unsigned int* A, unsigned int* B){
	
	unsigned int temp = *A;
	*A = *B;
	*B = temp;

}

void s (unsigned int* C, int len){
	// int i = 1;
	for(int i = 1; i< len; i++){
		// int j = i;
		for(int j = i; j>0; j--){

			if(C[j-1] < C[j]){
				x(&C[j-1],&C[j]);
				ncmp ++;
			}

		}

	}


}