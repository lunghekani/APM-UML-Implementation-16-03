#ifndef Employee_hpp
#define Employee_hpp
#include <string>
using namespace std;
class Employee
{
private:
	string name;
	string empId;
	double sales;

public:
	Employee();
	void setValues(string, string, double);
	string getName();
	string getEmpId();
	double getSales();

};
#endif
