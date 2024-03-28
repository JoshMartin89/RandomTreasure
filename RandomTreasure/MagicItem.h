#include <iostream>
#include <string>

class MagicItem : public Treasure {

public:

	MagicItem(char itemTable) {
		setChalRating(itemTable);
		setName(itemTable);
	}
	void setChalRating(char itemTable) {
		this->itemTable = itemTable;
	}
	int getChalRating() {
		return itemTable;
	}
	void setName(char itemTable) {
		this->name = name;
		this->description = description;
		this->aura = aura;
		this->itemCost = itemCost;
		switch (itemTable) {
		case 'A':
			roll = 1 + (rand() % 100);
			if (roll >= 1 && roll <= 50) {
				name = "Potion of Healing";
				description = "Red liquid that glimmers when aggitated. Restores 2d4+2 hit points.";
				aura = "Evocation";
				itemCost = 50;
			}
			if (roll >= 51 && roll <= 60) {
				Scroll(0);
				itemCost = 50;
			}
			if (roll >= 61 && roll <= 70) {
				name = "Potion of Climbing";
				description = "This potion is seperated into brown, silver and gray layers that even shaking will not mix. You gain climbing speed equal to your walking speed for 1 hour. You have advantage on Strength(Athletic) checks you make to climb.";
				aura = "Transmutation";
				itemCost = 50;
			}
			if (roll >= 71 && roll <= 90) {
				Scroll(1);
				itemCost = 100;
			}
			if (roll >= 91 && roll <= 94) {
				Scroll(2);
				itemCost = 120;
			}
			if (roll >= 95 && roll <= 98) {
				name = "Potion of Greater Healing";
				description = "This large red potion glimmers when aggitated. Restores 4d4+4 hit points.";
				aura = "Evocation";
				itemCost = 100;
			}
			if (roll == 99) {
				name = "Bag of Holding";
				description = "This bag has an interior space considerably larger than its appearance. Roughly 2 feet in diameter at the mouth and 4 feet deep can hold up to 500 lbs. The bag weighs 15 lbs regardless of its contents. Retriving items from it requires one action.";
				aura = "Conjuration";
				itemCost = 5000;
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
		return itemCost;
	}
	void Scroll(int spellLevel) {
		this->name = name;
		this->description = description;
		this->aura = aura;
		if (spellLevel == 0) {
			roll = 1 + (rand() % 48);
			switch (roll) {
			case 1:
				name = "Scroll of Acid Splash";
				description = "Hurl a bubble of acid. Choose one creature within range, or two that are within 5 feet of each other. A target must succeed on a Dex saving throw or take 1d6 acid damage.";
				aura = "Conjuration";
				break;
			case 2:
				name = "Scroll of Blade Ward";
				description = "Create a sigil of warding in the air. Until the end of your next turn, you have resistance against bludgeoning, piercing, and slashing damage dealt by weapon attacks.";
				aura = "Abjuration";
				break;
			case 3:
				name = "Scroll of Booming Blade";
				description = "You brandish the weapon used in the spell’s casting and make a melee attack with it against one creature within 5 feet of you. On a hit, the target suffers the weapon attack’s normal effects and then becomes sheathed in booming energy until the start of your next turn. If the target willingly moves 5 feet or more before then, the target takes 1d8 thunder damage, and the spell ends.";
				aura = "Evocation";
				break;
			case 4:
				name = "Scroll of Chill Touch";
				description = "You create a ghostly, skeletal hand in the space of a creature within range. Make a ranged spell attack against the creature to assail it with the chill of the grave. On a hit, the target takes 1d8 necrotic damage, and it can’t regain hit points until the start of your next turn.";
				aura = "Necromancy";
				break;
			case 5:
				name = "Scroll of Control Flames";
				description = "Choose a nonmagical flame you can see within range. You can expand, extinguish, double or half its brightness, change its color, you cause simple shapes to appear within the flames.";
				aura = "Transmutation";
				break;
			case 6:
				name = "Scroll of Dancing Lights";
				description = "You create up to four torch-sized lights within range, making them appear as torches, lanterns, or glowing orbs that hover in the air for the duration.";
				aura = "Evocation";
				break;
			case 7:
				name = "Scroll of Create Bonfire";
				description = "You create a bonfire on ground that you can see within range. Until the spell ends, the bonfire fills a 5-foot cube. Any creature in the bonfire’s space when you cast the spell must succeed on a Dexterity saving throw or take 1d8 fire damage.";
				aura = "Conjuration";
				break;
			case 8:
				name = "Scroll of Druid Craft";
				description = "Whisper to the spirits of nature to: create a tiny harmless sensory effect that predicts the weather, make a flower blossem, make a puff of wind or skunk odor, instantly light or snuff out a candel, torch of small fire.";
				aura = "Transmutation";
				break;
			case 9:
				name = "Scroll of Eldrich Blast";
				description = "A beam of crackling energy streaks toward a creature within range. Make a ranged spell attack against the target. On a hit, the target takes 1d10 force damage.";
				aura = "Evocation";
				break;
			case 10:
				name = "Scroll of Encode Thoughts";
				description = "You pull a memory, an idea, or a message from your mind and transform it into a tangible string of glowing energy called a thought strand, which persists for the duration or until you cast this spell again.";
				aura = "Enchantment";
				break;
			case 11:
				name = "Scroll of Fire Bolt";
				description = "You hurl a mote of fire at a creature or object within range. Make a ranged spell attack against the target. On a hit, the target takes 1d10 fire damage.";
				aura = "Evocation";
				break;
			case 12:
				name = "Scroll of Friends";
				description = "For the duration, you have advantage on all Charisma checks directed at one creature of your choice that isn’t hostile toward you. ";
				aura = "Enchantment";
				break;
			case 13:
				name = "Scroll of Frostbite";
				description = "You cause numbing frost to form on one creature that you can see within range.";
				aura = "Evocation";
				break;
			case 14:
				name = "Scroll of Green-Flame Blade";
				description = "You brandish the weapon used in the spell’s casting and make a melee attack with it against one creature within 5 feet of you. On a hit, the target suffers the weapon attack’s normal effects, and you can cause green fire to leap from the target to a different creature of your choice that you can see within 5 feet of it.";
				aura = "Evocation";
				break;
			case 15:
				name = "Scroll of Guidance";
				description = "You touch one willing creature. Once before the spell ends, the target can roll a d4 and add the number rolled to one ability check of its choice.";
				aura = "Divination";
				break;
			case 16:
				name = "Scroll of Gust";
				description = "You seize the air and compel it to create a number of minor effects of your choice.";
				aura = "Transmutation";
				break;
			case 17:
				name = "Scroll of Hand of Radiance";
				description = "You raise your hand, and burning radiance erupts from it.";
				aura = "Evocation";
				break;
			case 18:
				name = "Scroll of Infestation";
				description = "You cause a cloud of mites, fleas, and other parasites to appear momentarily on one creature you can see within range.";
				aura = "Conjuration";
				break;
			case 19:
				name = "Scroll of Druid Craft";
				description = ".";
				aura = "Transmutation";
				break;
			case 20:
				name = "Scroll of Light";
				description = "Until the spell ends, one object sheds bright light in a 20-foot radius and dim light for an additional 20 feet.";
				aura = "Evocation";
				break;
			case 21:
				name = "Scroll of Lightning Lure";
				description = "You create a lash of lightning energy that strikes at one creature of your choice that you can see within 15 feet of you.";
				aura = "Evocation";
				break;
			case 22:
				name = "Scroll of Mage Hand";
				description = "A spectral, floating hand appears at a point you choose within range.";
				aura = "Conjuration";
				break;
			case 23:
				name = "Scroll of Magic Stone";
				description = "You touch one to three pebbles and imbue them with magic. You or someone else can make a ranged spell attack with one of the pebbles by throwing it or hurling it with a sling.";
				aura = "Transmutation";
				break;
			case 24:
				name = "Scroll of Mending";
				description = "This spell repairs a single break or tear in an object you touch, such as a broken chain link, two halves of a broken key, a torn cloak, or a leaking wineskin.";
				aura = "Transmutation";
				break;
			case 25:
				name = "Scroll of Message";
				description = "You point your finger toward a creature within range and whisper a message.";
				aura = "Transmutation";
				break;
			case 26:
				name = "Scroll of Mind Sliver";
				description = "You drive a disorienting spike of psychic energy into the mind of one creature you can see within range.";
				aura = "Transmutation";
				break;
			case 27:
				name = "Scroll of Minor Illusion";
				description = "You create a sound or an image of an object within range that lasts for the duration.";
				aura = "Illusion";
				break;
			case 28:
				name = "Scroll of Mold Earth";
				description = "You seize a portion of stone or dirt and compel it to create a number of minor effects of your choice.";
				aura = "Transmutation";
				break;
			case 29:
				name = "Scroll of Poison Spray";
				description = "You extend your hand toward a creature you can see within range and project a puff of noxious gas from your palm.";
				aura = "Conjuration";
				break;
			case 30:
				name = "Scroll of Prestidigitation";
				description = "This spell is a minor magical trick that novice spellcasters use for practice.";
				aura = "Transmutation";
				break;
			case 31:
				name = "Scroll of Primal Savagery";
				description = "You channel primal magic to cause your teeth or fingernails to sharpen, ready to deliver a corrosive attack.";
				aura = "Transmutation";
				break;
			case 32:
				name = "Scroll of Produce Flame";
				description = "A flickering flame appears in your hand.";
				aura = "Conjuration";
				break;
			case 33:
				name = "Scroll of Ray of Frost";
				description = "A frigid beam of blue-white light streaks toward a creature within range.";
				aura = "Evocation";
				break;
			case 34:
				name = "Scroll of Resistance";
				description = "Once before the spell ends, the target can roll a d4 and add the number rolled to one saving throw of its choice.";
				aura = "Abjuration";
				break;
			case 35:
				name = "Scroll of Sacred Flame";
				description = "Flame-like radiance descends on a creature that you can see within range.";
				aura = "Evocation";
				break;
			case 36:
				name = "Scroll of Sapping Sting";
				description = "You sap the vitality of one creature you can see in range.";
				aura = "Necromancy";
				break;
			case 37:
				name = "Scroll of Shape Water";
				description = "You seize a portion of water and compel it to create a number of minor effects of your choice.";
				aura = "Transmutation";
				break;
			case 38:
				name = "Scroll of Shillelagh";
				description = "The wood of a club or quarterstaff you are holding is imbued with nature’s power.";
				aura = "Transmutation";
				break;
			case 39:
				name = "Scroll of Shocking Grasp";
				description = "Lightning springs from your hand to deliver a shock to a creature you try to touch.";
				aura = "Evocation";
				break;
			case 40:
				name = "Scroll of Spare the Dying";
				description = "Touch a living creature that has 0 hit points and the creature becomes stable.";
				aura = "Necromancy";
				break;
			case 41:
				name = "Scroll of Sword Burst";
				description = "You create a momentary circle of spectral blades that sweep around you.";
				aura = "Conjuration";
				break;
			case 42:
				name = "Scroll of Thaumaturgy";
				description = "You manifest a minor wonder, a sign of supernatural power, within range.";
				aura = "Transmutation";
				break;
			case 43:
				name = "Scroll of Thorn Whip";
				description = "You create a long, vine-like whip covered in thorns that lashes out at your command toward a creature in range.";
				aura = "Transmutation";
				break;
			case 44:
				name = "Scroll of Thunderclap";
				description = "You create a burst of thunderous sound, which can be heard 100 feet away.";
				aura = "Evocation";
				break;
			case 45:
				name = "Scroll of Toll the Dead";
				description = "You point at one creature you can see within range, and the sound of a dolorous bell fills the air around it for a moment.";
				aura = "Necromancy";
				break;
			case 46:
				name = "Scroll of True Strike";
				description = "You extend your hand and point a finger at a target in range. Your magic grants you a brief insight into the target’s defenses.";
				aura = "Divination";
				break;
			case 47:
				name = "Scroll of Vicious Mockery";
				description = "You unleash a string of insults laced with subtle enchantments at a creature you can see within range.";
				aura = "Enchantment";
				break;
			case 48:
				name = "Scroll of Virtue";
				description = "You touch one creature, imbuing it with vitality and 1d4 + your spellcasting modifier in temporary hit points.";
				aura = "Abjuration";
				break;
			case 49:
				name = "Scroll of Word of Radiance";
				description = "You utter a divine word, and burning radiance erupts from you.";
				aura = "Evocation";
				break;
			}
		}
		if (spellLevel == 1) {
			roll = 1 + (rand() % 89);
			switch (roll) {
			case 1:
				name = "Scroll of Absorb Elements";
				description = "The spell captures some of the incoming energy, lessening its effect on you and storing it for your next melee attack.";
				aura = "Abjuration";
				break;
			case 2:
				name = "Scroll of Acid Stream";
				description = "A stream of acid emanates from you in a line 30 feet long and 5 feet wide in a direction you choose.";
				aura = "Evocation";
				break;
			case 3:
				name = "Scroll of Alarm";
				description = "You set an alarm against unwanted intrusion.";
				aura = "Abjuration";
				break;
			case 4:
				name = "Scroll of Animal Friendship";
				description = "This spell lets you convince a beast that you mean it no harm.";
				aura = "Enchantment";
				break;
			case 5:
				name = "Scroll of Arcane Weapon";
				description = "You channel arcane energy into one simple or martial weapon you’re holding, and choose one damage type: acid, cold, fire, lightning, poison, or thunder.";
				aura = "Transmutation";
				break;
			case 6:
				name = "Scroll of Armor of Agathys";
				description = "A protective magical force surrounds you, manifesting as a spectral frost that covers you and your gear.";
				aura = "Abjuration";
				break;
			case 7:
				name = "Scroll of Arms of Hadar";
				description = "Tendrils of dark energy erupt from you and batter all creatures within 10 feet of you.";
				aura = "Conjuration";
				break;
			case 8:
				name = "Scroll of Bane";
				description = "Up to three creatures of your choice that you can see within range must make Charisma saving throws. If failed, the target must subtract 1d4 from rolls for attacks or saving for the duration of the spell.";
				aura = "Enchantment";
				break;
			case 9:
				name = "Scroll of Beast Bond";
				description = "You establish a telepathic link with one beast you touch that is friendly to you or charmed by you.";
				aura = "Divination";
				break;
			case 10:
				name = "Scroll of Bless";
				description = "You bless up to three creatures of your choice within range.";
				aura = "Enchantment";
				break;
			case 11:
				name = "Scroll of Burning Hands";
				description = "As you hold your hands with thumbs touching and fingers spread, a thin sheet of flames shoots forth from your outstretched fingertips.";
				aura = "Evocation";
				break;
			case 12:
				name = "Scroll of Compelled Duel";
				description = "You attempt to compel a creature into a duel.";
				aura = "Enchantment";
				break;
			case 13:
				name = "Scroll of Catapult";
				description = "One object flies in a straight line up to 90 feet in a direction you choose before falling to the ground, stopping early if it impacts against a solid surface.";
				aura = "Transmutation";
				break;
			case 14:
				name = "Scroll of Cause Fear";
				description = "You awaken the sense of mortality in one creature you can see within range.";
				aura = "Necromancy";
				break;
			case 15:
				name = "Scroll of Ceremony";
				description = "You perform one of several religious ceremonies. Atonement, Bless Water, Coming of Age, Dedication, Funeral Rite, or Wedding";
				aura = "Evocation";
				break;
			case 16:
				name = "Scroll of Chaos Bolt";
				description = "You hurl an undulating, warbling mass of chaotic energy at one creature in range.";
				aura = "Evocation";
				break;
			case 17:
				name = "Scroll of Charm Person";
				description = "You attempt to charm a humanoid you can see within range.";
				aura = "Enchantment";
				break;
			case 18:
				name = "Scroll of Chromatic Orb";
				description = "You hurl a 4-inch-diameter sphere of energy at a creature that you can see within range.";
				aura = "Evocation";
				break;
			case 19:
				name = "Scroll of Color Spray";
				description = "A dazzling array of flashing, colored light springs from your hand.";
				aura = "Illusion";
				break;
			case 20:
				name = "Scroll of Command";
				description = "You speak a one-word command to a creature you can see within range. The target must succeed on a Wisdom saving throw or follow the command on its next turn.";
				aura = "Enchantment";
				break;
			case 21:
				name = "Scroll of Comprehend Languages";
				description = "For the duration, you understand the literal meaning of any spoken language that you hear.";
				aura = "Divination";
				break;
			case 22:
				name = "Scroll of Create/Destroy Water";
				description = "You create/destroy up to 10 gallons of water within range in an open container.";
				aura = "Transmutation";
				break;
			case 23:
				name = "Scroll of Cure Wounds";
				description = "A creature you touch regains a number of hit points equal to 1d8 + your spellcasting ability modifier.";
				aura = "Evocation";
				break;
			case 24:
				name = "Scroll of Detect Evil and Good";
				description = "For the duration, you know if there is an aberration, celestial, elemental, fey, fiend, or undead within 30 feet of you, as well as where the creature is located.";
				aura = "Divination";
				break;
			case 25:
				name = "Scroll of Detect Magic";
				description = "For the duration, you sense the presence of magic within 30 feet of you.";
				aura = "Divination";
				break;
			case 26:
				name = "Scroll of Detect Poison and Disease";
				description = "For the duration, you can sense the presence and location of poisons, poisonous creatures, and diseases within 30 feet of you.";
				aura = "Divination";
				break;
			case 27:
				name = "Scroll of Disguise Self";
				description = "You make yourself – including your clothing, armor, weapons, and other belongings on your person – look different until the spell ends or until you use your action to dismiss it.";
				aura = "Illusion";
				break;
			case 28:
				name = "Scroll of Dissonant Whispers";
				description = "You whisper a discordant melody that only one creature of your choice within range can hear, wracking it with terrible pain.";
				aura = "Enchantment";
				break;
			case 29:
				name = "Scroll of Distort Value";
				description = "You cast this spell on an object no more than 1 foot on a side, doubling the object's perceived value by adding illusionary flourish or reducing its perceived value by half with the help of illusionary dents and scratches.";
				aura = "Illusion";
				break;
			case 30:
				name = "Scroll of Divine Favor";
				description = "Your prayer empowers you with divine radiance.";
				aura = "Evocation";
				break;
			case 31:
				name = "Scroll of Earth Tremor";
				description = "You cause a tremor in the ground in a 10-foot radius.";
				aura = "Evocation";
				break;
			case 32:
				name = "Scroll of Ensaring Strike";
				description = "The next time you hit a creature with a weapon attack before this spell ends, a writhing mass of thorny vines appears at the point of impact, and the target must succeed on a Strength saving throw or be restrained by the magical vines until the spell ends.";
				aura = "Conjuration";
				break;
			case 33:
				name = "Scroll of Entangle";
				description = "Grasping weeds and vines sprout from the ground in a 20-foot square starting from a point within range.";
				aura = "Conjuration";
				break;
			case 34:
				name = "Scroll of Expeditious Retreat";
				description = "This spell allows you to move at an incredible pace.";
				aura = "Transmutation";
				break;
			case 35:
				name = "Scroll of Faerie Fire";
				description = "Each object in a 20-foot cube within range is outlined in blue, green, or violet light (your choice).";
				aura = "Evocation";
				break;
			case 36:
				name = "Scroll of False Life";
				description = "Bolstering yourself with a necromantic facsimile of life, you gain 1d4 + 4 temporary hit points for the duration.";
				aura = "Necromancy";
				break;
			case 37:
				name = "Scroll of Feather Fall";
				description = "A falling creature’s rate of descent slows to 60 feet per round until the spell ends.";
				aura = "Transmutation";
				break;
			case 38:
				name = "Scroll of Find Familar";
				description = "You gain the service of a familiar, a spirit that takes an animal form you choose: bat, cat, crab, frog (toad), hawk, lizard, octopus, owl, poisonous snake, fish (quipper), rat, raven, sea horse, spider, or weasel.";
				aura = "Conjuration";
				break;
			case 39:
				name = "Scroll of Fog Cloud";
				description = "You create a 20-foot-radius sphere of fog centered on a point within range.";
				aura = "Conjuration";
				break;
			case 40:
				name = "Scroll of Frost Fingers";
				description = "Freezing cold blasts from your fingertips in a 15-foot cone.";
				aura = "Evocation";
				break;
			case 41:
				name = "Scroll of Gift of Alacrity";
				description = "You touch a willing creature. For the duration, the target can add 1d8 to its initiative rolls.";
				aura = "Divination";
				break;
			case 42:
				name = "Scroll of Goodberry";
				description = "Up to ten berries appear in your hand and are infused with magic for the duration.";
				aura = "Transmutation";
				break;
			case 43:
				name = "Scroll of Grease";
				description = "Slick grease covers the ground in a 10-foot square centered on a point within range and turns it into difficult terrain for the duration.";
				aura = "Conjuration";
				break;
			case 44:
				name = "Scroll of Guiding Bolt";
				description = "A flash of light streaks toward a creature of your choice within range.";
				aura = "Evocation";
				break;
			case 45:
				name = "Scroll of Guiding Hand";
				description = "You create a Tiny incorporeal hand of shimmering light that can guide you to a major landmark within your current plane of existance.";
				aura = "Divination";
				break;
			case 46:
				name = "Scroll of Hail of Thorns";
				description = "The next time you hit a creature with a ranged weapon attack before the spell ends, this spell creates a rain of thorns that sprouts from your ranged weapon or ammunition.";
				aura = "Conjuration";
				break;
			case 47:
				name = "Scroll of Healing Exilir";
				description = "You create a healing elixir in a simple vial that appears in your hand.";
				aura = "Conjuration";
				break;
			case 48:
				name = "Scroll of Healing Word";
				description = "A creature of your choice that you can see within range regains hit points equal to 1d4 + your spellcasting ability modifier.";
				aura = "Evocation";
				break;
			case 49:
				name = "Scroll of Hellish Rebuke";
				description = "You point your finger, and the creature that damaged you is momentarily surrounded by hellish flames.";
				aura = "Evocation";
				break;
			case 50:
				name = "Scroll of Heroism";
				description = "A willing creature you touch is imbued with bravery.";
				aura = "Enchantment";
				break;
			case 51:
				name = "Scroll of Hex";
				description = "You deal an extra 1d6 necrotic damage to the target whenever you hit it with an attack";
				aura = "Enchantment";
				break;
			case 52:
				name = "Scroll of Hunter's Mark";
				description = "You choose a creature you can see within range and mystically mark it as your quarry.";
				aura = "Divination";
				break;
			case 53:
				name = "Scroll of Ice Knife";
				description = "You create a shard of ice and fling it at one creature within range.";
				aura = "Conjuration";
				break;
			case 54:
				name = "Scroll of Id Insinuation";
				description = "You unleash a torrent of conflicting desires in the mind of one creature you can see within range, impairing its ability to make decisions.";
				aura = "Enchantment";
				break;
			case 55:
				name = "Scroll of Identify";
				description = "Identify the properties and functonality of a magic item or object.";
				aura = "Divination";
				break;
			case 56:
				name = "Scroll of Illusory Script";
				description = "You write on parchment, paper, or some other suitable writing material and imbue it with a potent illusion that lasts for the duration.";
				aura = "Illusion";
				break;
			case 57:
				name = "Scroll of Infallible Relay";
				description = "Create a magical communication device with a creature you have spoken to previously on this plane of existance.";
				aura = "Divination";
				break;
			case 58:
				name = "Scroll of Inflict Wounds";
				description = "Make a melee spell attack against a creature you can reach. On a hit, the target takes 3d10 necrotic damage.";
				aura = "Necromancy";
				break;
			case 59:
				name = "Scroll of Jump";
				description = "You touch a creature. The creature’s jump distance is tripled until the spell ends.";
				aura = "Transmutation";
				break;
			case 60:
				name = "Scroll of Longstrider";
				description = "You touch a creature. The target’s speed increases by 10 feet until the spell ends.";
				aura = "Transmutation";
				break;
			case 61:
				name = "Scroll of Mage Armor";
				description = "You touch a willing creature who isn’t wearing armor, and a protective magical force surrounds it until the spell ends.";
				aura = "Abjuration";
				break;
			case 62:
				name = "Scroll of Magic Missle";
				description = "You create three glowing darts of magical force. Each dart hits a creature of your choice that you can see within range.";
				aura = "Evocation";
				break;
			case 63:
				name = "Scroll of Magnify Gravity";
				description = "Create a point of gravitational pull that crushes and draws creatures toward it.";
				aura = "Transmutation";
				break;
			case 64:
				name = "Scroll of Protection from Good and Evil";
				description = "Until the spell ends, one willing creature you touch is protected against certain types of creatures: aberrations, celestials, elementals, fey, fiends, and undead.";
				aura = "Abjuration";
				break;
			case 65:
				name = "Scroll of Puppet";
				description = "Gesture one humanoid creature in sight to move in a direction of your choosing";
				aura = "Enchantment";
				break;
			case 66:
				name = "Scroll of Purify Food and Drink";
				description = "All nonmagical food and drink within a 5-foot-radius sphere centered on a point of your choice within range is purified and rendered free of poison and disease.";
				aura = "Transmutation";
				break;
			case 67:
				name = "Scroll of Ray of Sickness";
				description = "A ray of sickening greenish energy lashes out toward a creature within range.";
				aura = "Necromancy";
				break;
			case 68:
				name = "Scroll of Sanctuary";
				description = "You ward a creature within range against attack.";
				aura = "Abjuration";
				break;
			case 69:
				name = "Scroll of Searing Smite";
				description = "The next time you hit a creature with a melee weapon attack during the spell’s duration, your weapon flares with white-hot intensity, and the attack deals an extra 1d6 fire damage to the target and causes the target to ignite in flames.";
				aura = "Evocation";
				break;
			case 70:
				name = "Scroll of Sense Emotion";
				description = "You attune your senses to pick up the emotions of others for the duration.";
				aura = "Divination";
				break;
			case 71:
				name = "Scroll of Shield";
				description = "An invisible barrier of magical force appears and protects you.";
				aura = "Abjuration";
				break;
			case 72:
				name = "Scroll of Shield of Faith";
				description = "A shimmering field appears and surrounds a creature of your choice within range, granting it a +2 bonus to AC for the duration.";
				aura = "Abjuration";
				break;
			case 73:
				name = "Scroll of Silent Image";
				description = "You create the illusion of an object, a creature, or some other visible phenomenon that is no larger than a 15-foot cube that produces no sound or noise.";
				aura = "Illusion";
				break;
			case 74:
				name = "Scroll of Silvery Barbs";
				description = "You magically distract the triggering creature and turn its momentary uncertainty into encouragement for another creature.";
				aura = "Enchantment";
				break;
			case 75:
				name = "Scroll of Sleep";
				description = "Sends creatures into a magical slumber. Roll 5d8, the total is how many hit points of creatures this spell can affect.";
				aura = "Enchantment";
				break;
			case 76:
				name = "Scroll of Snare";
				description = "While you cast this spell, you use the cord or rope to create a circle with a 5-foot radius on a flat surface within your reach. When you finish casting, the cord or rope disappears to become a magical trap.";
				aura = "Abjuration";
				break;
			case 77:
				name = "Scroll of Speak with Animals";
				description = "You gain the ability to comprehend and verbally communicate with beasts for the duration.";
				aura = "Divination";
				break;
			case 78:
				name = "Scroll of Sudden Awakening";
				description = "Each sleeping creature you choose within range awakens, and then each prone creature within range can stand up without expending any movement.";
				aura = "Enchantment";
				break;
			case 79:
				name = "Scroll of Tasha's Caustic Brew";
				description = "A stream of acid emanates from you in a line 30 feet long and 5 feet wide in a direction you choose.";
				aura = "Evocation";
				break;
			case 80:
				name = "Scroll of Tasha's Hideous Laughter";
				description = "A creature of your choice that you can see within range perceives everything as hilariously funny and falls into fits of laughter if this spell affects it.";
				aura = "Enchantment";
				break;
			case 81:
				name = "Scroll of Tenser's Floating Disk";
				description = "This spell creates a circular, horizontal plane of force, 3 feet in diameter and 1 inch thick, that floats 3 feet above the ground in an unoccupied space of your choice that you can see within range.";
				aura = "Conjuration";
				break;
			case 82:
				name = "Scroll of Thunderous Smite";
				description = "The first time you hit with a melee weapon attack during this spell’s duration, your weapon rings with thunder that is audible within 300 feet of you, and the attack deals an extra 2d6 thunder damage to the target.";
				aura = "Evocation";
				break;
			case 83:
				name = "Scroll of Thunderwave";
				description = "A wave of thunderous force sweeps out from you.";
				aura = "Evocation";
				break;
			case 84:
				name = "Scroll of Unearthly Chorus";
				description = "Music of a style you choose fills the air around you in a 30-foot radius.";
				aura = "Illusion";
				break;
			case 85:
				name = "Scroll of Unseen Servent";
				description = "This spell creates an invisible, mindless, shapeless, Medium force that performs simple tasks at your command until the spell ends.";
				aura = "Conjuration";
				break;
			case 86:
				name = "Scroll of Wild Cunning";
				description = "You call out to the spirits of nature to aid you and choose from a variety of effects this spell can take.";
				aura = "Transmutation";
				break;
			case 87:
				name = "Scroll of Witch Bolt";
				description = "A beam of crackling, blue energy lances out toward a creature within range, forming a sustained arc of lightning between you and the target.";
				aura = "Evocation";
				break;
			case 88:
				name = "Scroll of Wrathful Smite";
				description = "The next time you hit with a melee weapon attack during this spell’s duration, your attack deals an extra 1d6 psychic damage.";
				aura = "Evocation";
				break;
			case 89:
				name = "Scroll of Zephyr Strike";
				description = "You move like the wind. For the duration, your movement doesn’t provoke opportunity attacks and you gain advantage on one weapon attack roll on your turn.";
				aura = "Transmutation";
				break;
			}
		}
		if (spellLevel == 2) {
			roll = 1 + (rand() % 21);
			switch (roll) {
			case 1:
				name = "Scroll of Aganazzar's Scorcher";
				description = "A line of roaring flame 30 feet long and 5 feet wide emanates from you in a direction you choose.";
				aura = "Evocation";
				break;
			case 2:
				name = "Scroll of Aid";
				description = "Your spell bolsters your allies with toughness and resolve.";
				aura = "Abjuration";
				break;
			case 3:
				name = "Scroll of Alter Self";
				description = "You can assume a different form from a few options such as aquatic adaption, change apperance and natural weapons.";
				aura = "Transmutation";
				break;
			case 4:
				name = "Scroll of Animal Messanger";
				description = "By means of this spell, you use an animal to deliver a message.";
				aura = "Enchantment";
				break;
			case 5:
				name = "Scroll of Arcane Lock";
				description = "You touch a closed door, window, gate, chest, or other entryway, and it becomes locked for the duration.";
				aura = "Abjuration";
				break;
			case 6:
				name = "Scroll of Augury";
				description = "By casting gem-inlaid sticks, rolling dragon bones, laying out ornate cards, or employing some other divining tool, you receive an omen from an otherworldly entity.";
				aura = "Divination";
				break;
			case 7:
				name = "Scroll of Barkskin";
				description = "Until the spell ends, the target’s skin has a rough, bark-like appearance, and the target’s AC can’t be less than 16, regardless of what kind of armor it is wearing.";
				aura = "Transmutation";
				break;
			case 8:
				name = "Scroll of Beast Sense";
				description = "For the duration of the spell, you can use your action to see through the beast’s eyes and hear what it hears, and continue to do so until you use your action to return to your normal senses.";
				aura = "Divination";
				break;
			case 9:
				name = "Scroll of Blindness/Deafness";
				description = "You can blind or deafen a foe.";
				aura = "Necromancy";
				break;
			case 10:
				name = "Scroll of Blur";
				description = "Your body becomes blurred, shifting and wavering to all who can see you. For the duration, any creature has disadvantage on attack rolls against you.";
				aura = "Illusion";
				break;
			case 11:
				name = "Scroll of Borrowed Knowledge";
				description = "You draw on knowledge from spirits of the past.";
				aura = "Divination";
				break;
			case 12:
				name = "Scroll of Branding Smite";
				description = "The next time you hit a creature with a weapon attack before this spell ends, the weapon gleams with astral radiance as you strike.";
				aura = "Evocation";
				break;
			case 13:
				name = "Scroll of Calm Emotions";
				description = "You attempt to suppress strong emotions in a group of people.";
				aura = "Enchantment";
				break;
			case 14:
				name = "Scroll of Cloud of Daggers";
				description = "You fill the air with spinning daggers in a cube 5 feet on each side, centered on a point you choose within range.";
				aura = "Conjuration";
				break;
			case 15:
				name = "Scroll of Continual Flame";
				description = "A flame, equivalent in brightness to a torch, springs forth from an object that you touch.";
				aura = "Evocation";
				break;
			case 16:
				name = "Scroll of Cordon of Arrows";
				description = "You plant four pieces of nonmagical ammunition – arrows or crossbow bolts – in the ground within range and lay magic upon them to protect an area.";
				aura = "Transmutation";
				break;
			case 17:
				name = "Scroll of Crown of Madness";
				description = "One humanoid of your choice that you can see within range must succeed on a Wisdom saving throw or become charmed by you for the duration.";
				aura = "Enchantment";
				break;
			case 18:
				name = "Scroll of Darkness";
				description = "Magical darkness spreads from a point you choose within range to fill a 15-foot radius sphere for the duration.";
				aura = "Evocation";
				break;
			case 19:
				name = "Scroll of Darkvision";
				description = "You touch a willing creature to grant it the ability to see in the dark.";
				aura = "Transmutation";
				break;
			case 20:
				name = "Scroll of Detect Thoughts";
				description = "For the duration, you can read the thoughts of certain creatures.";
				aura = "Divination";
				break;
			
			}
		}
	};

private:
	char itemTable;
	int itemCost;
	int spellLevel;
	string name;
	string description;
	string aura;
	int roll;
};

