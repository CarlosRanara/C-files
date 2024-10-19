#include <stdio.h>

#define AMOUNT 99.00
#define TAX 0.12

float computeTotal(int nOrders);
float computeGross(float fTotal);
float computeTax(float fTotal);
void displayDivider();

int main() {
    int nDate;
    int nOrders;
    float fPrice, fGross, fTax;

    // Get inputs
    printf("Date: ");
    scanf("%d", &nDate);

    printf("Orders: ");
    scanf("%d", &nOrders);

    // Compute total price
    fPrice = computeTotal(nOrders);
    printf("Total price = %.2f\n", fPrice);

    // Compute gross price
    fGross = computeGross(fPrice);
    printf("Gross price = %.2f\n", fGross);

    // Compute sales tax
    fTax = computeTax(fPrice);
    printf("Sales tax = %.2f\n", fTax);

    // Display divider
    displayDivider();

    return 0;
}

// Function to compute total price
float computeTotal(int nOrders) {
    return nOrders * AMOUNT;
}

// Function to compute gross price (before tax)
float computeGross(float fTotal) {
    return fTotal / (1 + TAX);
}

// Function to compute tax
float computeTax(float fTotal) {
    return fTotal - computeGross(fTotal);
}

// Function to display a divider
void displayDivider() {
    printf("----------------------------------------\n");
}
