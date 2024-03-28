#include <iostream>
#include <string>

class Art : public Treasure {

public:

	Art(int gpGems) {
		setGpGems(gpGems);
		setName(gpGems);
	}
	void setGpGems(int gpGems) {
		this->gpGems = gpGems;
	}
	int getGpGems() {
		return gpGems;
	}
	void setName(int gpGems) {
		this->name = name;
		switch (gpGems) {
		case 25:
			roll = 1 + (rand() % 10);
			switch (roll) {
			case 1:
				name = "Silver ewer";
				break;
			case 2:
				name = "Carved bone statuette";
				break;
			case 3:
				name = "Small gold bracelet";
				break;
			case 4:
				name = "Cloth-of-gold vestments";
				break;
			case 5:
				name = "Black velvet mask stiched with fine silver thread";
				break;
			case 6:
				name = "Copper chalice with silver filigree";
				break;
			case 7:
				name = "Pair of engraved bone dice";
				break;
			case 8:
				name = "Small mirror set in painted wooden frame";
				break;
			case 9:
				name = "Embroidered silk handkerchief";
				break;
			case 10:
				name = "Gold locket";
				break;
			}
			break;

		case 250:
			roll = 1 + (rand() % 10);
			switch (roll) {
			case 1:
				name = "Gold ring set with gemstones";
				break;
			case 2:
				name = "Carved ivory statuette";
				break;
			case 3:
				name = "Large gold bracelet";
				break;
			case 4:
				name = "Silver necklace with a gemstone pendant";
				break;
			case 5:
				name = "Bronze crown";
				break;
			case 6:
				name = "Silk robe with gold embroidery";
				break;
			case 7:
				name = "Large well-made tapestry";
				break;
			case 8:
				name = "Brass mug with jade inlay";
				break;
			case 9:
				name = "Box of turquoise animal figures";
				break;
			case 10:
				name = "Gold bird cage with electrum filigree";
				break;
			}

		case 750:
			roll = 1 + (rand() % 10);
			switch (roll) {
			case 1:
				name = "Silver chalice with moonstones";
				break;
			case 2:
				name = "Ceremonial silver-plated steel longsword with jet set in hilt";
				break;
			case 3:
				name = "Carved harp of exotic wood with ivory inlay and zircon gems";
				break;
			case 4:
				name = "Small golden idol";
				break;
			case 5:
				name = "Gold dragon comb set with red garnet as eyes";
				break;
			case 6:
				name = "Bottle stopper cork embossed with gold leaf and set with amethysts";
				break;
			case 7:
				name = "Cermonial electrum dagger with black peral in the pommel";
				break;
			case 8:
				name = "Silver and gold brooch";
				break;
			case 9:
				name = "Obsidian statueete with gold fittings and inlay";
				break;
			case 10:
				name = "Painted gold war mask";
				break;
			}
		case 2500:
			roll = 1 + (rand() % 10);
			switch (roll) {
			case 1:
				name = "Fine gold chain set with a fire opal";
				break;
			case 2:
				name = "Old masterpiece painting";
				break;
			case 3:
				name = "Embroidered silk and velvet mantel set with numerous moonstones";
				break;
			case 4:
				name = "Platinum bracelet set with a sapphire";
				break;
			case 5:
				name = "Embroidered glove set with jewel chips";
				break;
			case 6:
				name = "Jeweled anklet";
				break;
			case 7:
				name = "Gold music box";
				break;
			case 8:
				name = "Gold circlet set with four aquamarines";
				break;
			case 9 :
				name = "Eye patch with a mock eye set in blue sapphire and moonstone";
				break;
			case 10:
				name = "A necklace string of small pink pearls";
				break;
			}
		case 7500:
			roll = 1 + (rand() % 8);
			switch (roll) {
			case 1:
				name = "Jeweled gold crown";
				break;
			case 2:
				name = "Jeweled platinum ring";
				break;
			case 3:
				name = "Small gold statuette set with rubies";
				break;
			case 4:
				name = "Gold cup set with emeralds";
				break;
			case 5:
				name = "Gold jewelry box with platinum filigree";
				break;
			case 6:
				name = "Painted gold childs sarcophagus";
				break;
			case 7:
				name = "Jade game board with solid gold playing pieces";
				break;
			case 8:
				name = "Bejeweled ivory drinking horn with gold filigree";
				break;
			}
		}
	}
	virtual string whatAmI() {
		return name;
	}
	virtual string Description() {
		return description;
	}
	virtual string Aura() {
		return aura;
	}
	virtual int Cash() {
		return gpGems;
	}
private:
	int gpGems;
	string name;
	string description = "None";
	string aura = "None";
	int roll;
};
