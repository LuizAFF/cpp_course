#ifndef	FUNCTIONS_H
#define	FUNCTIONS_H

#include "student.h"
#include <vector>

namespace school{
	
	std::vector<Student> approved(std::vector<Student>);
	std::vector<Student> dismissed_by_time(std::vector<Student>, int);

}

#endif