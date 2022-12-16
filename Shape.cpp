#include "Shape.h"



///\brief Called to validate a name and a colour entered by a user
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. It will validate user's input; it will return 0 if the input is invalid either a name of a colour
/// . It will return 1 if the the name is "Circle", "Square" or "Unknown" and it will return 2 if the colour is red, green, blue, yellow, purple, pink, orange or undefined.
/// \param inputInfo - <b>string </b> -representation of user's input
///
///\return An interger: NO_VALID represents 0, NAME_VALID represents 1, COLOUR_VALID represents 2.
int Shape::validateInput(string inputInfo)
{
	if (inputInfo.length() <= MAX_LENGTH_NAME && (inputInfo == "Circle" || inputInfo == "Square" || inputInfo == "Unknown"))
	{
		return NAME_VALID;
	}
	else if (inputInfo.length() <= MAX_LENGTH_COLOUR && (inputInfo == "red" || inputInfo == "green" || inputInfo == "blue"
		|| inputInfo == "yellow" || inputInfo == "purple" || inputInfo == "pink" || inputInfo == "orange" || inputInfo == "undefined"))
	{
		return COLOUR_VALID;
	}
	else
	{
		return NOT_VALID;
	}
}

///\brief To instantiate a new Shape object - given a set of attribute values
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. It will instantiate a new object with name and colour entered by user. 
/// The name and the colour is set if these values is valid, otherwise it will set name is "Unkown" and colour is "undefined".
/// \param newName - <b>string </b> -representation of the Shape's name
/// \param newColour - <b>string </b> -representation of the Shape's colour
///
///\return As this is a <i>constructor</i> for the Shape class, nothing is returned
Shape::Shape(string newName , string newColour	)
{
	if (validateInput(newName) == NAME_VALID)
	{
		name = newName;
	}
	else
	{
		name = "Unknown";
	}

	if (validateInput(newColour) == COLOUR_VALID)
	{
		colour = newColour;
	}
	else
	{
		colour = "undefined";
	}
}

///\brief To instantiate a new Shape object by default
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. By default, This constructor will initialize an Shape object with name is "Unknown" and colour is "undefned"
/// \param None <b>void</b>
///
///\return As this is a <i>constructor</i> for the Shape class, nothing is returned
Shape::Shape(void)
{
	name = "Unknown";

	colour = "undefined";
}

/// \brief Called upon to <i>destroy</i> a Shape object - once it loses <b>scope</b>
/// \details <b>Details</b>
///
/// A detailed description of what this method. By default, This destructor will destroy the Circle object once it loses its scope.
///
/// \param NONE - <b>void</b>
///
/// \return As this is a <i>destructor</i> for the Shape class, nothing is returned
Shape::~Shape(void)
{
}

///\brief Called to return a string contain "name" data members
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to return a const string of "name" data members
/// \param None <b>void</b>
///
///\return It returns a <b>const string</b>
string Shape::GetName(void) const
{
	return name;
}

///\brief Called to return a string contain "colour" data members
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to return a const string of "colour" data members
/// \param None <b>void</b>
///
///\return It returns a <b>const string</b>
string Shape::GetColour(void) const
{
	return colour;
}

///\brief Called to set a new string to "name" data members
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to set a new string of "name" data member.
///  If newName parameter is valid, the string will be set and it will return a true, otherwise it will set the "name" data member is "Unkown" and return false.
/// \param newName - <b>string </b> -representation of the Shape's name
///
///\return It returns a <b>bool</b>
bool Shape::SetName(string newName)
{
	bool retCode = false;

	if (validateInput(newName) == NAME_VALID)
	{
		name = newName;
		retCode = true;
	}
	else
	{
		name = "Unknown";
	}

	return retCode;
}

///\brief Called to set a new string to "colour" data members
/// \details <b>Details</b>
/// 
/// A detailed description of what this method. This method is called to set a new string of "colour" data member.
///  If newName parameter is valid, the string will be set and it will return a true, otherwise it will set the "name" data member is "undefined" and return false.
/// \param newName - <b>string </b> -representation of the Shape's colour
///
///\return It returns a <b>bool</b>
bool Shape::SetColour(string newColour)
{
	bool retCode = false;

	if (validateInput(newColour) == COLOUR_VALID)
	{
		colour = newColour;
		retCode = true;
	}
	else
	{
		colour = "undefined";
	}

	return retCode;
}
