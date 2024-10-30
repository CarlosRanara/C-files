
#include <stdio.h>

/*
    Implement hasEnergy()
    @param energy - energy value
    returns: 1 or 0
    If the energy value is greater than zero, the function will return 1.
    Otherwise, the function returns 0.
*/
int hasEnergy(int energy) {
    return energy > 0 ? 1 : 0;
}

/*
    Implement getAction()
    @param action - selected action
    returns: energy value of the selected action.
    This function will return a value equivalent to the energy required by the selected action.
    Action key:
    1 - walk (3 energy)
    2 - shoot (7 energy)
    3 - recharge (-3 energy)
*/
int getAction(int action) {
    if (action == 1) return 3;    // Walk
    if (action == 2) return 7;    // Shoot
    if (action == 3) return -3;   // Recharge
    return 0;
}

/*
    Implement useEnergy()
    @param action - selected action by the user
    @param *energy - energy level
    returns: nothing
    - This function will first check if the energy level is not zero(0).
    - If energy is greater than zero(0), check if there's enough energy to perform the selected action.
    - If there is enough energy for the action, action is performed and energy is deducted based on the selected action.
    - If the action walk is selected, display "The robot walked! Energy reduced by 3!"
    - If the action shoot is selected, display "The robot fired a shot! Energy reduced by 7!"
    - If the action recharge is selected, display "The robot recharged some energy! Energy raised by 3!"
    NOTE: For each action, you must call the getAction() function for updating the energy level.
    - If the selected action requires more energy than you currently have, display "Not enough energy!".
    - If energy is equal to zero:
        - Display "No more energy!"
        - Display "Recharging... Energy raised by 3!"
        - Update energy by adding 3 to energy (call the getAction() function).
*/
void useEnergy(int action, int *energy) {
    if (hasEnergy(*energy)) {  // Check if there's any energy
        int energyChange = getAction(action); // Get energy required or added by action
        
        if (*energy >= energyChange || energyChange < 0) {  // Check if there's enough energy or it's a recharge
            *energy -= energyChange;  // Adjust energy

            switch (energyChange) {
                case 3:
                    printf("The robot walked! Energy reduced by 3!\n");
                    break;
                case 7:
                    printf("The robot fired a shot! Energy reduced by 7!\n");
                    break;
                case -3:
                    printf("The robot recharged some energy! Energy raised by 3!\n");
                    break;
            }
        } else {
            printf("Not enough energy!\n");
        }
    } else {
        printf("No more energy!\nRecharging... Energy raised by 3!\n");
        *energy += 3;  // Recharge
    }
}
