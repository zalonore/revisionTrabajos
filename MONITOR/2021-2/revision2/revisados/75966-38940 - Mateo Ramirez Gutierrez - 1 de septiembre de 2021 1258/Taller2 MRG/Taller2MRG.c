#include <stdio.h>
#include <stdlib.h>

void asteriskPrinter()
{
	int i = 0, j, numForLine;
	while(i < 10){
		printf("\nDigit the number for the line: ");
		scanf("%d", &numForLine);
		if(numForLine > 15) continue;
		else if(numForLine <= 0) break;

		printf("\n%d ", numForLine);
		for(j = 0; j < numForLine; j++){
			printf("* ");
		}
		printf("%d \n", numForLine);

		printf("%d ", numForLine);
		for(j = 0; j < numForLine; j++){
			printf("* ");
		}
		printf("%d \n", numForLine);
		i++;
	}
	return;
}

void seventyFirstGaming()
{
	int i, j, seventyOneCounter = 0, fiftySixtyCounter = 0, totalNumberSum = 0, totalNumberCounter = 0; 
	float totalNumberAverage;
	printf("Welcome to a game where you can type numbers between 50 and 80 \nand see what crazy things may happen! \n");
	printf("How many times are you gonna input numbers, hotshot? ");
	scanf("%d", &i);

	for(j = 0; j < i; j++){
		int inputtedNum;
		printf("Alright then, input your number: ");
		scanf("%d", &inputtedNum);

		if(inputtedNum < 50 || inputtedNum > 80){
			printf("Not that number, silly. Make sure it's between 50 and 80, ok? \n");
			continue;
		}

		totalNumberSum += inputtedNum;
		totalNumberCounter += 1;
		if(inputtedNum >= 50 && inputtedNum <= 60) fiftySixtyCounter += 1;
		else if(inputtedNum == 71){
			if(seventyOneCounter == 0) printf("Congratulations! \n");
			else if(seventyOneCounter == 1) printf("Congratulations, come again tomorrow for your prize. \n");
			else if(seventyOneCounter >= 2) printf("You're being pretty suspicious. \n");
			seventyOneCounter += 1;
			totalNumberSum -= inputtedNum;
			totalNumberCounter -= 1;
		}
	}
	totalNumberAverage = (float)totalNumberSum/(float)totalNumberCounter;

	printf("\nHere's the magic that came with your numbers, hotshot! \n");
	printf("The average of the numbers you inputted is: %f\n", totalNumberAverage);
	return;
}



void truckTracker()
{
	int i, aTruckAmount, bTruckAmount, bTruckType, b3and4Trucks = 0;
	int potatoes = 0, tomatoes = 0, onions = 0, oranges = 0, mangoes = 0;
	printf("\nHow many A trucks came to La Farra today, chief? ");
	scanf("%d", &aTruckAmount);
	for(i = 0; i < aTruckAmount; i++){
		int potatoesOnTruck;
		printf("\n How many potato kilos do you have, sir? ");
		scanf("%d", &potatoesOnTruck);
		potatoes += potatoesOnTruck;
		printf("\n");
	}
	printf("\nHow many B trucks came to La Farra today, chief? ");
	scanf("%d", &bTruckAmount);
	for(i = 0; i < bTruckAmount; i++){
		int tomatoesOnTruck, onionsOnTruck, orangesOnTruck, mangoesOnTruck;
		printf("\nHow many products are you carrying? ");
		scanf("%d", &bTruckType);
		switch(bTruckType){
			case 2:
				printf("\n How many tomato kilos do you have? ");
				scanf("%d", &tomatoesOnTruck);
				tomatoes += tomatoesOnTruck;
				printf("\n How many onion kilos do you have? ");
				scanf("%d", &onionsOnTruck);
				onions += onionsOnTruck;
				break;
			case 3:
				b3and4Trucks++;
				printf("\n How many tomato kilos do you have? ");
				scanf("%d", &tomatoesOnTruck);
				tomatoes += tomatoesOnTruck;
				printf("\n How many onion kilos do you have? ");
				scanf("%d", &onionsOnTruck);
				onions += onionsOnTruck;
				printf("\n How many orange kilos do you have? ");
				scanf("%d", &orangesOnTruck);
				oranges += orangesOnTruck;
				break;
			case 4:
				b3and4Trucks++;
				printf("\n How many tomato kilos do you have? ");
				scanf("%d", &tomatoesOnTruck);
				tomatoes += tomatoesOnTruck;
				printf("\n How many onion kilos do you have? ");
				scanf("%d", &onionsOnTruck);
				onions += onionsOnTruck;
				printf("\n How many orange kilos do you have? ");
				scanf("%d", &orangesOnTruck);
				oranges += orangesOnTruck;
				printf("\n How many mango kilos do you have? ");
				scanf("%d", &mangoesOnTruck);
				mangoes += mangoesOnTruck;
				break;
			default:
				printf("\n Sorry sir, that's an invalid amount of products you have. \n");
				break;
		}
	}
	printf("\n\n=== TOTAL STATISTICS FOR TODAY ===\n");
	printf("\n La Farra received %d type-A trucks.", aTruckAmount);
    printf("\n La Farra received %d type-B trucks that contained 3 or 4 products.", b3and4Trucks);
    printf("\n La Farra acquired %d onion kilos, \n %d orange kilos, \n and %d mango kilos.\n", onions, oranges, mangoes);
	return;
}

int primeChecker(int a)
{
   int i;
   for(i = 2; i <= a - 1; i++){
   		if (a%i == 0) return 0;
   }
   if (i == a) return 1;
}

int digitByDigitSum(int a)
{
	int sumToReturn = 0, modulus;
	while(a > 0){
		modulus = a%10;
		sumToReturn += modulus;
		a /= 10;
	}
	return sumToReturn;
}

void thousandPrimeNumbers()
{
	int i, primePrintingCap, threeDigitNumCounter = 0, summedDigitsNum;
	printf("Input a number that's the same as or above 1000: ");
	scanf("%d", &primePrintingCap);

	if(primePrintingCap >= 1000){
		printf("\nThe list of prime numbers, from 1 to %d, are the following: \n", primePrintingCap);
		for(i = 2; i <= primePrintingCap; i++){
			if(primeChecker(i) == 1) printf("%d, ", i);
		}

		printf("\n\nThe list of prime numbers that have 3 digits are the following: \n");
		for(i = 99; i <= 999; i++){
			if(primeChecker(i) == 1){
				printf("%d, ", i); 
				threeDigitNumCounter++;
			} 
		}
		printf("\nWith a grand total of %d of these specific prime numbers. \n", threeDigitNumCounter);

		printf("\nThe list of prime numbers, whose summed digits still result in a prime number, are the following: \n");
		for(i = 10; i <= primePrintingCap; i++){
			if(primeChecker(i) == 1){
				summedDigitsNum = digitByDigitSum(i);
				if(primeChecker(summedDigitsNum) == 1) printf("%d, ", i);
			}
		}
		printf("\n");
	}else{
		printf("\nError: Number is smaller than 1000. Cannot do operations. Try again with another number! \n");
		return;
	}
	return;
}


int main()
{
	int selectedOption;
	printf("\nWelcome to the Taller-2 program, \nbrought you by @gozocongonzo and his fellow student. \n");
	do{
		printf("\nTo start using the app, digit one of the following numbers for their respective options: \n");
		printf("(1) Asterisk Printer \n(2) 71st Gaming \n(3) Truck Tracker \n(4) Prime Numbers in Thousands \n(8) Exit the program \n");
		scanf("%d", &selectedOption);

		switch(selectedOption){
			case 1:
				asteriskPrinter();
				break;
			case 2:
				seventyFirstGaming();
				break;
			case 3:
				truckTracker();
				break;
			case 4:
				thousandPrimeNumbers();
				break;
			case 8:
				printf("Thank you for using this program.\n");
				return 0;
			default:
				break;
		}
	}while(selectedOption != 8);
	return 0;
}