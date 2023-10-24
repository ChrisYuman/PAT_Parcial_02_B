#include "Ejercicio02.h"
#include <vector>
#include <algorithm>

int Ejercicio02::countStudents(vector<char>* students, vector<char>* sandwiches)
{
    int n = students->size();

    std::vector<int> studentCount(128, 0);  
    std::vector<int> sandwichCount(128, 0); 

    for (int i = 0; i < n; i++) {
        studentCount[(*students)[i]]++;
        sandwichCount[(*sandwiches)[i]]++;
    }

    int studentsLeft = n;

    for (int i = 0; i < n; i++) {
        char studentPreference = (*students)[i];
        if (studentCount[studentPreference] > 0 && sandwichCount[studentPreference] > 0) {
            studentCount[studentPreference]--;
            sandwichCount[studentPreference]--;
            studentsLeft--;
        }
        else {
            break;
        }
    }

    return studentsLeft;
}
