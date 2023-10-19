#include <stdio.h>

#define ARRAY_SIZE 3

//GLOBAL VARIABLES
char* row1[ARRAY_SIZE] = {};
char* row2[ARRAY_SIZE] = {};
char* row3[ARRAY_SIZE] = {};
char* position[2];

// DECLARATION OF FUNCTIONS
void reset();

int main(void){
	reset();
	
	
	
	return(0);
}

void reset(){
	printf("Welcome to the tictactoe game!\n");
	printf("Instructions:\nTake note of the board positions.\n");
	printf("For example, To place an X in the center, wait for your turn, type B2 and press enter.\n\n");
	int i;
	for(i=0; i<=2; i++){
		row1[i]="[_]";
		row2[i]="[_]";
		row3[i]="[_]";
	}
	printf("  ");
	for(i=0; i<=2; i++){
		printf("%d  ", i+1);
	}
	printf("\nA");
	for(i=0; i<=2; i++){
		printf("%s", row1[i]);
	}
	printf("\nB");
	for(i=0; i<=2; i++){
		printf("%s", row2[i]);
	}
	printf("\nC");
	for(i=0; i<=2; i++){
		printf("%s", row3[i]);
	}
}
