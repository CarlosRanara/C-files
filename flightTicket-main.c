/*
	This file is only for testing. You will compile this file when you are ready to test your solution.
	You are not allowed to make any changes to this file except for line #8.
	
	You must edit line #8. Replace lastname with your last name. Example: flightTicket-santillana.c	
*/
#include <stdio.h>
#include "flightTicket-RANARA.c"

int main(){
	
	float ipsc; //Variable for the IPSC amount in USD
	float zeroRated; //Variable for the zeroRated amount of the ticket
	float vatAmt; //Variable for the VAT amount
	float vatSales; //Variable for the VAT sales amount
	float totalSales; //Variable for the Total sales
	float usdEx; //Variable for the exchange rate amount in pesos
	
	printf("How much is 1 USD in PHP? ");
	scanf("%f", &usdEx);

	printf("Enter the Zero-Rated amount (in USD): ");
	scanf("%f", &zeroRated);

	ipsc = IPSC / usdEx; //Converts 550 PHP to USD using the current exchange rate
	vatAmt = computeVAT(ipsc); //Get the VAT amount
	computeVATSales(ipsc, vatAmt, &vatSales); //Computes and updates the vatSales variable
	totalSales = vatSales + vatAmt + zeroRated; //Get the total sales amount
	
	displayTaxInformation(vatSales, vatAmt, ipsc, zeroRated, totalSales, usdEx); //Display the breakdown

	return 0;
}

