

#include <stdio.h>

int NP = 14;

int ask(){

	puts("Press CTRL+C to exit.");



	printf("Enter a positive integer for a key size: ");
	// LOOP1:
	while(1){

		int a;
		// scanf("%d",&a);

		if(scanf("%d",&a) == 0){ //check if the program doesn't work properly!
			
			puts("Sorry, did not understand your input. Repeating question.");
			// printf("Enter a positive integer for a key size: ");
			// continue LOOP1;


		} else{
			if(a<=4){
				
				puts("Whoops! That's too small. Please enter a higher number!");
				// continue LOOP1;
				// break;

			} else{


				if(NP < a){
					
					puts("Whoops! That's too big. Please enter a smaller number!");
					// continue LOOP1;
					// break;


				} else{

					printf("%d is just right!\n",a);
					return a;
				}
			}
		}
		while(getchar() != '\n');

	}
	

    


// return 0;
}

// int main(){
// 	ask();
// 	return 0;
// }

