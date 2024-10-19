#include <stdio.h>

void useGas(int* gas) { //(2 pts)
    /*
        This function will display "Gas decreased by 5 liters." and will 
        decrease the gas value by 5 each time this function is called.
    */
    *gas -= 5;
    printf("Gas decreased by 5 liters.\n");
}

float accelerate() { //(1 pt)
    // This function will display "The vehicle accelerated by 5.5 kph." and will return 5.5
    printf("The vehicle accelerated by 5.5 kph.\n");
    return 5.5;
}

void displayGas(int gas) { //(2 pts)
    /*
        This function will display the remaining gas level.
    */
    printf("Remaining gas: %d liters.\n", gas);
}

void displayCurSpeed(float acc) { //(2 pts)
    /*
        This function will display the current acceleration level/speed.
    */
    printf("Current speed: %.2f kph.\n", acc);
}

void moveCar(int* gas, float* acc) { //(4 pts)
    /*
        This function will do the following:
            1. Will update the acc value using an assignment statement that will update acc value. Must call the accelerate function().
            2. Use gas by calling the useGas() function.
            3. Display the current gas level (gas value) by calling the displayGas() function.
            4. Display the current speed (acc value) by calling the displayCurSpeed() function.
    */
    *acc += accelerate(); // Update acceleration
    useGas(gas);         // Decrease gas
    displayGas(*gas);    // Display current gas level
    displayCurSpeed(*acc); // Display current speed

    printf("\n"); // DO NOT DELETE THIS LINE! Place your codes above this line.
}

int main() { //(4 pts)
    // Declare the variable for gas and initialize it with a value of twenty-five(25).
    int gas = 25;
    // Declare the variable for acceleration and initialize it with a value of zero(0).
    float acc = 0.0;
    
    printf("The vehicle was started and will now move.\n\n");
    
    // Call the moveCar() function five(5) times.
  	moveCar(&gas, &acc);
    moveCar(&gas, &acc);
    moveCar(&gas, &acc);
    moveCar(&gas, &acc);
    moveCar(&gas, &acc);
	
    printf("The vehicle achieved a speed of %.2f kph before running out of gas.\n", acc);
    
    return 0;
}
