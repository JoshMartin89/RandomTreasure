#include <iostream>
#include <string>

class Gemstone : public Treasure {

public:

	Gemstone(int gpGems) {
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
		this->description = description;
		switch (gpGems) {
		case 10:
			roll = 1 + (rand() % 12);
			switch (roll) {
			case 1:
				name = "Azurite";
				description = "Opaque mottled deep blue.";
				break;
			case 2:
				name = "Banded agate";
				description = "Translucent striped brown, blue white or red.";
				break;
			case 3:
				name = "Blue quartz";
				description = "Transparent pale blue.";
				break;
			case 4:
				name = "Eye agate";
				description = "Translucent circles of gray";
				break;
			case 5:
				name = "Hematite";
				description = "Opaque gray or black";
				break;
			case 6:
				name = "Lapis lazuli";
				description = "Opaque light and dark blue with golden flecks";
				break;
			case 7:
				name = "Malachite";
				description = "Opaque straiated light and dark green";
				break;
			case 8:
				name = "Moss agate";
				description = "Translucent pink or yellow-white with mossy gray or green markings";
				break;
			case 9:
				name = "Obsidian";
				description = "Opaque black";
				break;
			case 10:
				name = "Rhodochrosite";
				description = "Opaque light pink";
				break;
			case 11:
				name = "Tiger eye";
				description = "Transluent brown with golden center";
				break;
			case 12:
				name = "Turquoise";
				description = "Opaque light blue-green";
				break;
			}
			break;

		case 50:
			roll = 1 + (rand() % 12);
			switch (roll) {
			case 1:
				name = "Bloodstone";
				description = "Opaque dark gray with red flecks";
				break;
			case 2:
				name = "Carnelian";
				description = "Opaque orange to red-brown";
				break;
			case 3:
				name = "Chalcedony";
				description = "Opaque white";
				break;
			case 4:
				name = "Chrysoparse";
				description = "Translucent green";
				break;
			case 5:
				name = "Citrine";
				description = "Transparent pale yellow-brown";
				break;
			case 6:
				name = "Jasper";
				description = "Opaque blue, black or brown";
				break;
			case 7:
				name = "Moonstone";
				description = "Translucent whhite with pale blue glow";
				break;
			case 8:
				name = "Onyx";
				description = "Opaque bands of black and white or pure black or white";
				break;
			case 9:
				name = "Quartz";
				description = "Transparent white, smoky gray or yellow";
				break;
			case 10:
				name = "Sardonyx";
				description = "Opaque bands of red and white";
				break;
			case 11:
				name = "Star rose quartz";
				description = "Translucent rosy stone with white star-shaped center";
				break;
			case 12:
				name = "Zircon";
				description = "Transparent pale blue-green";
				break;
			}

		case 100:
			roll = 1 + (rand() % 10);
			switch (roll) {
			case 1:
				name = "Amber";
				description = "Transparent watery rich gold";
				break;
			case 2:
				name = "Amethyst";
				description = "Transparent deep purple";
				break;
			case 3:
				name = "Chrysoberyl";
				description = "Transparent yellow green to pale green";
				break;
			case 4:
				name = "Coral";
				description = "Opaque crimson";
				break;
			case 5:
				name = "Garnet";
				description = "Transparent red, brown-green or violet";
				break;
			case 6:
				name = "Jade";
				description = "Translucent light green, deep green, or white";
				break;
			case 7:
				name = "Jet";
				description = "Opaque deep black";
				break;
			case 8:
				name = "Pearl";
				description = "Opaque lustrous white, yellow or pink";
				break;
			case 9:
				name = "Spinel";
				description = "Transparent red, red-brown, or deep green";
				break;
			case 10:
				name = "Tourmaline";
				description = "Transparent pale green, blue, brown or red";
				break;
			}
		case 500:
			roll = 1 + (rand() % 6);
			switch (roll) {
			case 1:
				name = "Alexandrite";
				description = "Transparent dark green";
				break;
			case 2:
				name = "Aquamarine";
				description = "Transparent pale blue-green";
				break;
			case 3:
				name = "Black pearl";
				description = "Opaque pure black";
				break;
			case 4:
				name = "Blue spinel";
				description = "Transparent deep blue";
				break;
			case 5:
				name = "Peridot";
				description = "Transparent rich olive green";
				break;
			case 6:
				name = "Topaz";
				description = "Transparent golden yellow";
				break;
			}
		case 1000:
			roll = 1 + (rand() % 8);
			switch (roll) {
			case 1:
				name = "Black opal";
				description = "Translucent dark green with black mottling and golden flecks";
				break;
			case 2:
				name = "Blue sapphire";
				description = "Transparent blue-white to medium blue";
				break;
			case 3:
				name = "Emerald";
				description = "Transparent deep bright green";
				break;
			case 4:
				name = "Fire opal";
				description = "Translucent fire red";
				break;
			case 5:
				name = "Opal";
				description = "Translucent pale blue with green and golden mottling";
				break;
			case 6:
				name = "Star ruby";
				description = "Translucent ruby with white star-shaped center";
				break;
			case 7:
				name = "Star sapphire";
				description = "Translucent sapphire with white star-shaped center";
				break;
			case 8:
				name = "Yellow sapphire";
				description = "Transparent firey yellow or yellow-green";
				break;
			}
		case 5000:
			roll = 1 + (rand() % 4);
			switch (roll) {
			case 1:
				name = "Black sapphire";
				description = "Translucent lustrous black with glowing highlights";
				break;
			case 2:
				name = "Diamond";
				description = "Transparent blue-white, canary, pink, brown or blue";
				break;
			case 3:
				name = "Jacinth";
				description = "Transparent fire orange";
				break;
			case 4:
				name = "Ruby";
				description = "Transparent clear red to deep crimson";
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
	string description;
	string aura = "None";
	int roll;
};
