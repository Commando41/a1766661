#include <iostream>

void count_numbers(int array[4][4]){

int zeroes, ones, twos, threes, fours, fives, sixes, sevens, eights, nines;
zeroes = ones = twos = threes = fours = fives = sixes = sevens = eights = nines = 0;

for (int i = 0; i < 4; i++){
for (int j = 0; j < 4; j++){

switch (array[i][j]){

	case 1:
		ones++;
		break;

	case 2:
twos++;
break;

case 3:
threes++;
break;

case 4:
fours++;
break;

case 5:
fives++;
break;

case 6:
sixes++;
break;

case 7:
sevens++;
break;

case 8:
eights++;
break;

case 9:
nines++;
break;

case 0:
zeroes++;
break;
}
}
}

std::cout << "0:" << zeroes << ";1:" << ones << ";2:" << twos << ";3:" << threes << ";4:" << fours << ";5:" << fives << ";6:" << sixes << ";7:" << sevens << ";8:" << eights << ";9:" << nines << ";" << std::endl;
return;
}
