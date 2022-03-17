#include <iostream>
#include "Employee.hpp"
#include "SalesRecord.hpp"
using namespace std;

int main()
{
	Employee obj_employee, obj_employee1, obj_employee2;
	// during method invoking this is an argument it has the actual value

	obj_employee.setValues("Sam", "001", 12000);
	obj_employee1.setValues("Pam", "002", 42000);
	obj_employee2.setValues("Jow", "003", 42000);

	cout << obj_employee.getName() << "\t Sales " << obj_employee.getSales() << endl;

	SalesRecord obj_record;

	obj_record.addEmployee(obj_employee);
	obj_record.addEmployee(obj_employee1);
	obj_record.addEmployee(obj_employee2);
	//cout<< "Sales Commission " <<	obj_record.calcCommission()<< endl;
	cout << "Employee with the highest sales record: " << obj_record.determineEmpHighSales().getEmpId()<< endl;

	system("pause");
	return 0;
}
