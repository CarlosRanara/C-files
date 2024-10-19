#define VAT 0.12 //VAT rate of 12%
#define IPSC 550.00 //This is the International Passenger Service Charge and it is fixed at 550 pesos

/*
    TASK #1: Implement the computeVAT() function. (1 pts)
    
    @param ipsc - the ipsc amount    
    returns: The computed VAT amount
    
    This function will return the computed VAT amount.
    You may declare variables that you may need for this function.
*/
float computeVAT(float ipsc) {
    return ipsc * VAT; // Returns the VAT which is 12% of the IPSC amount
}

/*
    TASK #2: Implement the computeVATSales() function. (3 pts)
    
    @param ipsc - the ipsc amount
    @param vatAmt - the VAT amount
    @param *vatSales - vatSales amount
    returns: nothing
    
    This function will compute and update the VAT Sales amount.
    You may declare variables that you may need for this function.
*/
void computeVATSales(float ipsc, float vatAmt, float *vatSales) {
    *vatSales = ipsc - vatAmt; // VAT Sales is the IPSC amount minus the VAT amount
}

/*
    TASK #3: Implement the convertToPhp() function. (2 pts)
    
    @param usd - the USD amount
    @param usdEx - the current exchange rate amount
    
    This function will return the computed PHP amount.
    You may declare variables that you may need for this function.
*/
float convertToPhp(float usd, float usdEx) {
    return usd * usdEx; // Returns the USD amount converted to PHP using the exchange rate
}

/*
    TASK #4: Complete the displayTaxInformation() function. (4 pts)
    
    @param vatSales - VAT Sales amount
    @param vatAmt - VAT amount
    @param ipsc - IPSC amount in USD
    @param zeroRated - Zero Rated amount
    @param totalSales - the Total Sales amount
    @param usdEx - the exchange rate amount in pesos
    
    This function will display the Tax Information breakdown.
    
    Fill in the missing arguments to complete the function.
    
    NOTE: If the printf statement does not have a format specifier then do not change it!
    
*/
void displayTaxInformation(float vatSales, float vatAmt, float ipsc, float zeroRated, float totalSales, float usdEx) {
    printf("\nTAX INFORMATION\n");
    printf("\nVAT Sales\t\t\t%8.2f USD \t %8.2f PHP\n", vatSales, convertToPhp(vatSales, usdEx));
    printf("VAT (12%%)\t\t\t%8.2f USD \t %8.2f PHP\n", vatAmt, convertToPhp(vatAmt, usdEx));
    printf("-------------------------------------------------------------\n");
    printf("IPSC Sales\t\t\t%8.2f USD \t %8.2f PHP\n", ipsc, convertToPhp(ipsc, usdEx));
    printf("\nZero-Rated\t\t\t%8.2f USD \t %8.2f PHP\n", zeroRated, convertToPhp(zeroRated, usdEx));
    printf("-------------------------------------------------------------\n");
    printf("Total Sales\t\t\t%8.2f USD \t %8.2f PHP\n", totalSales, convertToPhp(totalSales, usdEx));
}
