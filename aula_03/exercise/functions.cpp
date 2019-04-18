#include "functions.h"

namespace school{

std::vector<Student> approved(std::vector<Student> v){

	std::vector<Student> list_approved;

	for (auto a: v){
		if (a.average() >= 5.75){
			list_approved.push_back(a);
		}
	}

	return list_approved;

}

std::vector<Student> dismissed_by_time(std::vector<Student> w, int i)	{

	std::vector<Student> list_dismissed;

	for (auto a: w){
		if (a.years_enrolled(i) > 7){
			list_dismissed.push_back(a);
		}
	}

	return list_dismissed;

}

}