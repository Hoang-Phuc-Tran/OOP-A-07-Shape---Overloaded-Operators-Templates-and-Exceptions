#pragma once

#include<iostream>
#include<string>
#include<iomanip>
#include<limits>
#include<stdlib.h>
#include<stdio.h>
using namespace std;



/// \class Shape
/// 
/// \brief The purpose of this class is to create an abstract base class.
/// 
/// NAME: Shape
/// 
/// PURPOSE: The purpose of this class is to create an abstract base class. It is like a template to be inherited.
/// From this class, we can create concrete classes.
class Shape
{
protected:

	string name;			///< The name of an object 

	string colour;			///< The colour of an object 

	int validateInput(string inputInfo); // This method is used to validate the user's input

public:

	const int MAX_LENGTH_NAME = 50;			///< This constant represents a maximum string of 50 characters from the name entered by a user.
	const int MAX_LENGTH_COLOUR = 10;		///< This constant represents a maximum string of 10 characters from the colour entered by a user.
	const int NOT_VALID = 0;				///< This constant represents an invalid input by a user.
	const int NAME_VALID = 1;				///< This constant represents an valid input from the name entered by a user.
	const int COLOUR_VALID = 2;				///< This constant represents an valid input from the colour entered by a user.
	const double PI = 3.1415926;			///< This constant represents the PI number.

	// Constructors
	Shape(string newName, string newColour); 
	Shape(void);

	// Destructors
	virtual ~Shape(void);

	// Accessors
	string GetName(void) const;
	string GetColour(void) const;

	// Mutators
	bool SetName(string newName);
	bool SetColour(string newColour);

	// Pure virtual functions
	virtual double Perimeter(void) = 0;			///< Pure virtual function that calculates perimeter of the Shape
	virtual double Area(void) = 0;				///< Pure virtual function that calculates area of the Shape
	virtual double OverallDimension(void) = 0;	///< Pure virtual function that returns overall dimension of the Shape
	virtual void Show(void) = 0;				///< Pure virtual function that prints out the name, colour, radius, perimeter and area of the Shape

};

