//Week 6 PAL
//Create, Analyze, and Understand Data Structures
//Program - how to initialize a struct

#include <stdio.h>
#include <string.h>
#include <string.h> 

#define MAXLENGTH		25

//Create a struct detailing information for a car (Owner, Car Brand, Model Number (int), and Number of Kilometers (float))

struct car
{
	char owner[MAXLENGTH];
	char carBrand[MAXLENGTH];
	int modelNO;
	float kmNO;
};

int main()
{
	//How do we access the struct? (Hard-code entire struct / User Input specific components / Initializing components

	int array[] = { 0, 1, 2, 3 }; //[0][1][2][3] --> [owner][carBrand][modeNO][kmNO]

	
	//Hard Code

	struct car CAR = {.owner = "Owen Wilson", .carBrand = "Toyota", .modelNO = 26384, .kmNO = 1896.35};
	

	//User Input

	puts("Enter a new owner: ");
	//scanf_s("%s", CAR.owner, MAXLENGTH);
	fgets(CAR.owner, MAXLENGTH, stdin);

	puts("Enter a new model: ");
	scanf_s("%d", &CAR.modelNO);


	//Initialize to valuable

	char newBrand[] = "Honda";
	//CAR.carBrand[] = newBrand[MAXLENGTH]; //Right now, this is an error (Strings don't like being initialized to other strings, what can we do?)
	strcpy_s(CAR.carBrand, MAXLENGTH, newBrand, strlen(newBrand));

	float newKM = 8453932;
	CAR.kmNO = newKM;

	
	return 0;
}