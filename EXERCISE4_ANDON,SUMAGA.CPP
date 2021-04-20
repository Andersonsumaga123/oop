// POLYMORPHISM //
// Sumaga Anderson Valentino //
// EXERCISE 4 //

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;  

struct employee {
	string name, department;
	int age;
	char gender;
	float days, rate;
};

main(){
	
	float solve=0.00;
	string sex;
	employee user;
	
	cout << "\t\tEmployee's Payroll System in C++";
	cout << "\n\n";
	cout << "\t Created BY: Sumaga Anderson Valentino";
	cout << "\n\n";
	cout << "Enter the Name of Employee       : ";
	getline(cin,user.name);
	cout << "Enter the Name of Department     : ";
	getline(cin,user.department);
	cout << "Enter the Gender of the Employee : ";
	user.gender = getchar();
	cout << "Enter the Number of Days Worked  : ";
	cin >>user.days;
	cout << "Enter the Daily Rate             : ";
	cin >> user.rate;
	
	solve = (user.days * user.rate);
	if (user.gender == 'M' || user.gender == 'm')
	{
		sex = "Male";
	}
	else if (user.gender == 'F' || user.gender == 'f')
	{
		sex = "Female";
	}
	cout << fixed;
	cout << setprecision(2);
	    cout << "\n\n";
	    cout << "\t ===== GENERATED REPORT =====";
	    cout << "\n\n";
	    cout << "\nEmployee Name : " << user.name;
		cout << "\nDepartment    : " << user.department;
		cout << "\nGender        : " << sex;
		cout << "\nSalary        : $" << solve;
		cout << "\n\n";
		system("pause"); 
	
}

