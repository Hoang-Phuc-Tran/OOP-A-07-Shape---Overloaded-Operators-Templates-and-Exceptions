#include "Shape.h"



/// \class Square
/// 
/// \brief The purpose of this class is to create Square objects.
/// 
/// NAME: Square
/// 
/// PURPOSE: The purpose of this class is to create Square objects. This class is inherited attributes and methods from the Shape class.
/// From this class, we can create concrete classes by redefining four virtual methods from the Shape class.
class Square : public Shape
{
private:
	
	double sideLength;		///< This variable is used to hold the side length value of the Square object

public:

	// Constructors
	Square(string newColour, double newSideLength);
	Square(void);

	// Destructors
	~Square(void);

	// Accessors
	double GetSideLength(void);

	// Mutators
	bool SetSideLength(double newRadius);

	// Methods
	void Show(void);				// this function prints out the name, colour, radius, perimeter and area of the Square object
	double Perimeter(void);			// this function calculates perimeter of the Square
	double Area(void);				// this function calculates area of the Square
	double OverallDimension(void);	// this function returns overall dimension of the Square


	// overloaded + operation
	Square operator+(const Square& op2) const;

	// overloaded * operation
	Square operator*(const Square& op2) const;

	// overloaded = operation
	const Square& operator=(const Square& op2);

	// overloaded == operation
	bool operator==(const Square& op2) const;
};