#include<iostream>
#include "Treasure.h"
#include "Gemstone.h"
#include "Art.h"
#include "MagicItem.h"
#include <vector>
#include <cstdlib>

int main() {
	vector<Treasure*> allTheTreasure;
	int gpAmount;
	int challangeRateing = 2;
	srand(time(0));

	if (challangeRateing <=4) { //Starting on treasrue horad challage 0-4 table pg 137
		int roll = (1 + rand() % 44);
		cout << roll << endl;
		if (roll <= 6) {
			cout << "There was nothing of value in this treasure hoard";
		}
		else if (roll >= 7 && roll <= 16) {
			for (int i = 0; i < (2 + rand() % 12); i++) {
				allTheTreasure.push_back(new Gemstone(10));
			}
		}
		else if (roll >= 17 && roll <= 26) {
			for (int i = 0; i < (2 + rand() % 8); i++) {
				allTheTreasure.push_back(new Art(25));
			}
		}
		else if (roll >= 27 && roll <= 36) {
			for (int i = 0; i < (2 + rand() % 12); i++) {
				allTheTreasure.push_back(new Gemstone(50));
			}
		}
		else if (roll >= 37 && roll <= 44) {
			for (int i = 0; i < (2 + rand() % 12); i++) {
				allTheTreasure.push_back(new Gemstone(10));
			}
			for (int i = 0; i < (1 + rand() % 6); i++) {
				allTheTreasure.push_back(new MagicItem('A'));
			}
		}
	};
	
	


	for (int i = 0; i < allTheTreasure.size(); i++) {  //For loop to print out whatAmI and getArea for the shapes in the vector allTheShapes
		cout << allTheTreasure.at(i)->whatAmI() << endl << "Description: " << allTheTreasure.at(i)->Description() << endl << "Worth: " << allTheTreasure.at(i)->Cash() << " Gold" << endl <<"Aura: " << allTheTreasure.at(i)->Aura() << endl <<endl;
	}

	while (!allTheTreasure.empty())                 //begin vector cleanup
	{
		auto shapes = allTheTreasure.back();
		allTheTreasure.pop_back();
		delete shapes;
	}

	allTheTreasure.clear();                         //end vector cleanup
	cout << allTheTreasure.size();
	return 0;
}