#include <stdio.h>
#include <stdlib.h>

void twoDArray(){
	int i, j, k;
	k = 0;
	int memArray[5][5];
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			memArray[i][j] = k;
			k++;
		}
	}
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf("%i ", memArray[i][j]);
			if (memArray[i][j] < 10){
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			printf("%i : %p\n", memArray[i][j], &memArray[i][j]);
		}
		printf("\n");
	}
	
	//This function shows that the array elements can be accessed directly
	//by using a counter with the address and consecutively adding
	/*int *counter = &memArray[0][0];
	for (i=0; i<25; i++){
		printf("%p %i\n", counter, *counter);
		counter++;
	}*/
}

void threeDArray(){
	int i, j, k, x;
	x = 0;
	int memArray[3][3][3];
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			for (k=0; k<3; k++){
				memArray[i][j][k] = x;
				x++;
			}
		}
	}
	
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			for (k=0; k<3; k++){
				printf("%i ", memArray[i][j][k]);
				if (memArray[i][j][k] < 10){
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			for (k=0; k<3; k++){
				printf("%i : %p\n", memArray[i][j][k], &memArray[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
	//This function shows that the array elements can be accessed directly
	//by using a counter with the address and consecutively adding
	/*int *counter = &memArray[0][0][0];
	for (i=0; i<27; i++){
		printf("%p %i\n", counter, *counter);
		counter++;
	}*/
}
