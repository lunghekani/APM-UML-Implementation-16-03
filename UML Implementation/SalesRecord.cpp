#include "SalesRecord.hpp"

SalesRecord::SalesRecord()
{
	counter = 0;
}
// during method implementation this is a paramater it has defined type and identifier as a name

void SalesRecord::addEmployee(Employee emp)
{
	_employee[counter] = emp;
	counter++;
}
double SalesRecord::calcCommission()
{
	double comm = 0.0;
	for (int i = 0; i < 5; ++i)
	{
		if ( _employee->getSales() < 10000)	
			comm = _employee[i].getSales() * 0.05;
		else if (_employee->getSales() < 30000)
			comm = _employee[i].getSales() * 0.07;
		else if (_employee[i].getSales() < 30001)
			comm = _employee[i].getSales() * 0.085;
	}
	return comm;
}
Employee SalesRecord::determineEmpHighSales()
{
	Employee high = _employee[0];

	for (int i = 1; i < 5; ++i)
	{
		if (_employee->getSales() > high.getSales())
		{
			high = _employee[i];
		}
	}
	return high;
}



