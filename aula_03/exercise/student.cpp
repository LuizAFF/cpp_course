#include "student.h"

namespace school{

	Student::Student(
		std::string name,
		int year,
		double p1,
		double p2,
		double p3)	:

	name_{name},
	year_{year},
	p1_{p1},
	p2_{p2},
	p3_{p3}
{}

std::string Student::name() const
{
	return name_;
}

int Student::years_enrolled(int n) const
{
	return (n - year_);
}

double Student::average() const
{
	return ((p1_ + p2_ + p3_)/3);
}

}