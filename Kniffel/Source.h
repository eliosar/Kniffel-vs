#include <iostream>

namespace sp {
	short i;
	short p;
	std::string Weiß = "\x1B[0;37;40m";
	std::string Cyanblau = "\x1B[0;36;40m";
	std::string Karmesinrot = "\x1B[0;35;40m";
	std::string Blau = "\x1B[0;34;40m";
	std::string Gelb = "\x1B[0;33;40m";
	std::string Grün = "\x1B[0;32;40m";
	std::string Rot = "\x1B[0;31;40m";
	std::string Schwarz_auf_Weiß = "\x1B[0;30;47m";
}

void Würfelauswahl();
std::string Spieler[10];
std::string Farbe[10];
short SpielerAnzahl[1];
short wuerfel[5] = { 0 };
short versuch[6] = { 0 };
short ers[10][13] = { 0 };
short Würfelvorher[1] = { 0 };
short ak[1] = { 0 };
short ac[1] = { 0 };
short Gesamt[10] = { 0 };