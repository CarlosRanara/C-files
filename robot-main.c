/*
	DO NOT EDIT ANY CODE IN THIS FILE! ONLY USE THIS FILE FOR TESTING!
*/

#include <stdio.h>
#include "robot-func.c"

void chooseAction(int *action, int *energy) {
	printf("Energy Remaining: %d\n", *energy);
	printf("Select an action:\n");
	printf("1 - Walk (-3 energy)\n");
	printf("2 - Shoot (-7 energy)\n");
	printf("3 - Recharge (+3 energy)\n");
	printf("Choice: ");
	scanf("%d", action);
	
	useEnergy(*action, energy);
}

int main(){
	
	int action, energy = 7;
		
	printf("You may select 5 actions that the robot will perform.\n\n");
	printf("Action 1:\n\n");
	chooseAction(&action, &energy);
	printf("Action 2:\n\n");
	chooseAction(&action, &energy);
	printf("Action 3:\n\n");
	chooseAction(&action, &energy);
	printf("Action 4:\n\n");
	chooseAction(&action, &energy);
	printf("Action 5:\n\n");
	chooseAction(&action, &energy);
	printf("Energy Level: %d\n", energy);
	printf("THANK YOU FOR PLAYING!\n");
	
	return 0;
}

