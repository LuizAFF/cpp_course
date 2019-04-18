#ifndef	STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

namespace school{

class Student	{

public:

	Student(
		std::string name,
		int year,
		double p1,
		double p2,
		double p3
	);

	Student() = default;
	Student(const Student&) = default;
		
	std::string name() const;
	int years_enrolled(int) const;
	double average() const;

private:
	int year_{2019};
	std::string name_;
	double p1_{0}, p2_{0}, p3_{0};
	
};

}
#endif