/* -- this is a FILEHEADER COMMENT --
	NAME	:	myShape.cpp
	AUTHOR	:	Hoang Phuc Tran
	ID		:	8789102
	PURPOSE :	This file will be a testHarness to create Circle and Square objects, then 
	it uses overloaded operators to add, multiply, assign, and compare the objects to each other.
*/
#include "Circle.h"
#include "Square.h"



int main(void) 
{
	// Create Circle objects
	Circle round1("red", 5.5);
	Circle round2("blue", 10.5);
	Circle playARound;

	// create Square objects
	Square square1("orange", 5);
	Square square2("purple", 12);
	Square playASquare;

	// Display all Shapes
	round1.Show();
	round2.Show();
	playARound.Show();

	square1.Show();
	square2.Show();
	playASquare.Show();

	// Add round1 and round2 into playARound
	playARound = round1 + round2;

	// Add square2 and square1 into playASquare
	playASquare = square2 + square1;

	// Display playARound and playASquare
	playARound.Show();
	playASquare.Show();

	// Multiply round1 by round2 into playARound
	playARound = round1 * round2;

	// Multiply square2 by square1 into playASquare
	playASquare = square2 * square1;

	// Display playARound and playASquare
	playARound.Show();
	playASquare.Show();

	// Assign round1 to playAround
	playARound = round1;

	// Check to see it is equal or not
	if (playARound == round1) 
	{
		printf("\nHurray !!");
	}
	else 
	{
		printf("\nAwww !!");
	}

	return 0;
}