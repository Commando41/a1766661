k#include <iostream>
#include <string.h>
void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main(){

std::string courses[4] = {"Math", "Chem", "Psyc", "Food"};

std::string students[5] = {"Lanny Terran       ",
                           "Ben Shapiro        ", 
                           "Jordan Peterson    ", 
                           "Steven Crowder     ",
                           "Milo Yiannopolous  "};

int report_card[5][4] = {{55, 66, 77, 99},
                         {11, 22, 33, 44},
                         {12, 23, 34, 45},
                         {56, 67, 78, 89},
                         {90, 10, 20, 30}};

print_class(courses, students, report_card, 5);

return 0;
}
