#include "Ejercicio02.h"
#include <vector>

int Ejercicio02::countStudents(std::vector<char>* students, std::vector<char>* sandwiches)
{
    

    int studentI = 0;
    int sandwichI = 0;
    while (studentI < students->size() && sandwichI < sandwiches->size()) {
        if (students->at(studentI) == sandwiches->at(sandwichI)) {
            students->erase(students->begin() + studentI);
            sandwiches->erase(sandwiches->begin() + sandwichI);
            studentI = 0;
            sandwichI = 0;
        }
        else {
            studentI++;
        }
    }
    return students->size();

    if (students->empty() || sandwiches->empty()) {
        return students->size();
    }
}
