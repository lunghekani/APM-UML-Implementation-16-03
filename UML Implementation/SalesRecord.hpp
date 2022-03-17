#ifndef SalesRecord_hpp
#define SalesRecord_hpp
#include "Employee.hpp"
class SalesRecord
{
private:
	Employee _employee[5];
	int counter;
public:
	SalesRecord();
	void addEmployee(Employee);
	double calcCommission();
	Employee determineEmpHighSales();
};
#endif
