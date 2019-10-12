
#include <stdio.h>
#include <stdint.h>

void gp(unsigned int* Array, unsigned int length){
	
	int c = 0;
	int d = 0;
	*Array = 2;
	c = 0;

	for(unsigned int i = 3; c < length ; i+=2){

			if((i < length * length)){

				d = 1;
				for(int j = 0; j < c; j++){
					if(i%(*(Array+j)) == 0){
						d = 0;
						break;
					}
				}

				if(d != 0){
					c = c + 1;
					(*(c + Array)) = i;
				}
				
			}

		
	

	}
}

