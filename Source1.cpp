#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"

using namespace std;

int main() {
	system("chcp 1251");
	Employee emp1("Bob", "Jones", 2875.00);
	Employee emp2("Susan", "Baker", 3150.75);
	cout << "Employee 1: " << emp1.getfirstName() << " " << emp1.getmonthlySalary() * 12 <<"$" << endl;
	cout << "Employee 2: " << emp2.getfirstName() << " " << emp2.getmonthlySalary() * 12 << "$" << endl;
	cout << "Salary increase of 10%: " << endl;
	emp1.setmonthlySalary(emp1.getmonthlySalary() * 1.1);
	emp2.setmonthlySalary(emp2.getmonthlySalary() * 1.1);
	cout << "Employee 1: " << emp1.getfirstName() << " " << emp1.getlastName() << emp1.getmonthlySalary() * 12 << "$" << endl;
	cout << "Employee 2: " << emp2.getfirstName() << " " << emp2.getlastName() << emp2.getmonthlySalary() * 12 << "$" << endl;
return 0;
}