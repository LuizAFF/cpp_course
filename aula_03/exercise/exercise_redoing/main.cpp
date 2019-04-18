#include <iostream>
#include <string>
#include <vector>

#include "student.h"
#include "functions.h"

int main()
{
    //  using std::string_literals;
    using school::Student;

    // TODO: initialize a vector called `students` here
    std::vector<Student> students = {Student("Luiz", 2010, 0, 6, 7), Student("bsdfa", 2015, 9, 5, 4)};

    for (auto s: school::approved(students)) {
        std::cout << s.name()
                  << " is approved by grade with average "
                  << s.average() << ".\n";
    }

    for (auto s: school::dismissed_by_time(students, 2019)) {
        std::cout << s.name()
                  << " was dismissed for being in the course for too long: "
                  << s.years_enrolled(2019) << " years.\n";
    }
}