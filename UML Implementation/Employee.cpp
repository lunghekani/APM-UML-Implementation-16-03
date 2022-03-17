#include "Employee.hpp" // linking the header file

Employee::Employee()
{
	name = "";
	empId = "";
	sales = 0.0;
}
void Employee::setValues(string na, string id, double sa)
{
	if (!na.empty())
	{
		name = na;
		name[0] = toupper(name[0]);
	}
	else
		name = "EMPTY";

	empId.empty() ? empId = id : empId = "EMPTY";

	sa < 0 ? sales = sa : sales =0;

	
}

// accessor methods
string Employee::getName()
{
	return name;
}
string Employee::getEmpId()
{
	return empId;
}
double Employee::getSales()
{
	return sales;
}