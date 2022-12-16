#include "Square.h"


///\brief To instantiate a new Square object - given a set of attribute values
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. It will instantiate a new object with colour and side length value entered by user. 
/// The colour and the side length is set if these values is valid, otherwise it will set colour is "undefined" and radius is 0.
/// \param newColour - <b>string </b> -representation of the Circle's colour
/// \param newSideLength - <b>double </b> -representation of the Circle's radius
///
///\return As this is a <i>constructor</i> for the Square class, nothing is returned
Square::Square(string newColour, double newSideLength) : Shape("Square", newColour)
{
	if (newSideLength >= 0)
	{
		sideLength = newSideLength;
	}
	else
	{
		sideLength = 0;
	}
}

///\brief To instantiate a new Circle object by default
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. By default, This constructor will initialize an Circle object with the
/// colour is "undefned", the side length is 0 and the name is "Unknown".
/// \param None <b>void</b>
///
///\return As this is a <i>constructor</i> for the Shape class, nothing is returned
Square::Square(void)
{
	sideLength = 0;

	name = "Square";

	colour = "undefined";
}

/// \brief Called upon to <i>destroy</i> a Square object - once it loses <b>scope</b>
/// \details <b>Details</b>
///
/// A detailed description of what this method. By default, This destructor will destroy the Square object once it loses its scope and display
/// a message "The square is squished..."
///
/// \param NONE - <b>void</b>
///
/// \return As this is a <i>destructor</i> for the Square class, nothing is returned
Square::~Square(void)
{
	cout << "\nThe square is squished ...";
}

///\brief Called to return a float data-type of "sideLength" data members
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to return a float data-type of "sideLength" data members
/// \param None <b>void</b>
///
///\return It returns a <b>double</b>
double Square::GetSideLength(void)
{
	return sideLength;
}

///\brief Called to set a new side length to "sideLength" data members
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to set a float data-type of "sideLength" data member.
///  If newSideLength parameter is valid, the value will be set and it will return a true, otherwise it will leave the "sideLength" data member as it was and return false.
/// \param newName - <b>double </b> -representation of the side length of the Square
///
///\return It returns a <b>bool</b>
bool Square::SetSideLength(double newSideLength)
{
	bool redCode = false;

	if (newSideLength >= 0)
	{
		sideLength = newSideLength;
		redCode = true;
	}

	return redCode;
}

///\brief Called to print out the name, colour, radius, perimeter and area of the Square object. 
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to print out all the data members following the provided format. It includes 
/// the name, colour, radius, perimeter and area of the Square. 
///
/// \param NONE - <b>void</b>
///
///\return nothing is returned
void Square::Show(void)
{
	double perimeter = 0;

	double area = 0;

	perimeter = Perimeter();

	area = Area();

	cout << "\nShape Information" << endl;
	cout << "Name\t\t: " << name <<endl;
	cout << "Colour\t\t: " << colour << endl;
	printf("Side-Length\t: %.2f cm\n", sideLength);
	printf("Perimeter\t: %.2f cm\n", perimeter);
	printf("Area\t\t: %.2f square cm\n", area);
}

///\brief Called to caculate the perimeter of the Square object.
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to caculate the perimeter of the Square object according to the formula
/// \param None <b>void</b>
///
///\return It returns a <b>double</b>
double Square::Perimeter(void)
{
	double result = 0;

	result = 4 * sideLength;

	return result;
}

///\brief Called to caculate the area of the Square object.
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to caculate the area of the Square object according to the formula
/// \param None <b>void</b>
///
///\return It returns a <b>double</b>
double Square::Area(void)
{
	double result = 0;

	result = sideLength * sideLength;

	return result;
}

///\brief Called to return the overal dimension of the Square object.
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to return the overal dimension of the Square object according to the formula
/// \param None <b>void</b>
///
///\return It returns a <b>double</b>
double Square::OverallDimension(void)
{
	return sideLength;
}

///\brief Called to add one Square object to another.
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to add one Square object to another. The
///  resultant Square will take on the colour of the left-hand operand (the LHS) and the resultant radius is the sum of the left and right operand’s radius
/// \param op2 - <b>Square </b> -representation a Square object
///
///\return It returns a <b>Square</b> - a Square object
Square Square::operator+(const Square& op2) const 
{
	Square temp;

	temp.sideLength = sideLength + op2.sideLength;
	temp.colour = colour;

	return temp;
}

///\brief Called to multiply one Square object to another.
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to multily one Square object to another. The
///  resultant Square will take on the colour of the right-hand operand (the RHS) and the resultant radius is the product of the left and right operand’s radius
/// \param op2 - <b>Square </b> -representation a Square object
///
///\return It returns a <b>Square</b> - a Square object
Square Square::operator*(const Square& op2) const 
{
	Square temp;

	temp.sideLength = sideLength * op2.sideLength;
	temp.colour = op2.colour;

	return temp;
}

///\brief Called to assign one Square object to another.
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to assign one Circle object to another. The
///  sideLength and colour of Square on the right-hand operand (the RHS) will be assigned to Square object on the left-hand operand (the LHS)
/// \param op2 - <b>Square </b> -representation a Square object
///
///\return It returns a <b>*this</b> - a Square object on the left-hand side
const Square& Square::operator=(const Square& op2) 
{
	sideLength = op2.sideLength;

	colour = op2.colour;

	return *this;
}

///\brief Called to compare one Square object to another.
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to compare one Square object to another. The
///  sideLength and colour of Square on the right-hand operand (the RHS) will be compared to Square on the left-hand operand (the LHS)
/// \param op2 - <b>Square </b> -representation a Square object
///
///\return It returns a <b>bool</b> - a true represents two Square objects are qual, otherwise a false
bool Square::operator==(const Square& op2) const 
{
	if ((this->sideLength == op2.sideLength) && (this->colour == op2.colour)) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}