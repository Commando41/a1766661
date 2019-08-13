#include <iostream>
#include <string.h>
void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents){

std::cout << "ReportCard      ";

for (int k = 0; k < 4; k++){
std::cout << courses[k] << " ";
}
std::cout << std::endl;

for (int i = 0; i < nstudents; i++){
//for (int j = 0; j < nstudents; j++){
std::cout << students[i] << " " << report_card[i][0] << " " << report_card[i][1] << " " << report_card[i][2] << " " << report_card[i][3] << std::endl;
//}
}

return ;
}
