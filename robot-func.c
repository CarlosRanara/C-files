
int hasEnergy(int energy){
if (energy > 0)
	return 1;
else
	return 0;

}

int getAction(int action) {
	switch (action)
  {
		case 1: return -3;
		case 2: return -7;
		case 3: return 3;
		default: {
			printf("Not a valid command! Action wasted!\n");
			return 0;
		}
	}
}

void useEnergy(int action, int *energy) {
int i = getAction(action);

	if (hasEnergy(*energy) == 1)
	{	
		if (*energy >= action)
			{
			*energy += i;
			if (action == 1)
				printf("The robot walked! Energy reduced by 3!\n");
				
 			else if (action == 2)
				printf("The robot fired a shot! Energy reduced by 7!\n");
			
			else
				printf("The robot recharged some energy! Energy raised by 3!");
			}
		else
			printf("Not enough energy!\n");
	}
	
	else {
		printf("No more energy! \n Recharging... Energy raised by 3\n");
		*energy += getAction(3);
		}

}
