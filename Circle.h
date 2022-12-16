#include"Shape.h"


/// \class Circle
/// 
/// \brief The purpose of this class is to create Circle objects.
/// 
/// NAME: Circle
/// 
/// PURPOSE: The purpose of this class is to create Circle objects. This class is inherited attributes and methods from the Shape class.
/// From this class, we can create concrete classes by redefining four virtual methods from the Shape class.
class Circle : public Shape
{
private:

	double radius;			///< This variable is used to hold the radius value of the Circle object

public:
	
	// Constructors
	Circle(string newColour, double newRadius);
	Circle(void);

	// Destructors
	~Circle(void);

	// Accessors
	double GetRadius(void);

	// Mutators
	bool SetRadius(double newRadius);

	// Methods
	void Show(void);				// this function prints out the name, colour, radius, perimeter and area of the Circle object
	double Perimeter(void);			// this function calculates perimeter of the Circle
	double Area(void);				// this function calculates area of the Circle
	double OverallDimension(void);	// this function returns overall dimension of the Circle


	// overloaded + operation
	Circle operator+(const Circle& op2) const;

	// overloaded * operation
	Circle operator*(const Circle& op2) const;

	// overloaded = operation
	const Circle& operator=(const Circle& op2);

	// overloaded == operation
	bool operator==(const Circle& op2) const;
};