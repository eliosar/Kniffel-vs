#include "Source.h"
#include <conio.h>

void gesamt(short i) {
	Gesamt[i] = 0;
	for (short x = 0; x < 13; x++) {
		if (ers[i][x] > 0) {
			Gesamt[i] += ers[i][x];
		}
	}
}

short Wurf() {
	short Wurfwert = rand() % 6 + 1;
	return Wurfwert;
}

void W�rfeln() {
	for (short i = 0; i < 5; i++)
	{
		wuerfel[i] = Wurf();
	}
}

void Auswahlergebnis(short i) {
	std::cout << sp::Gelb;
		if (ers[sp::i][i] >= 0) {
			std::cout << ers[sp::i][i];
		}

		else {
			std::cout << "-";
		}
std::cout << sp::Wei� << std::endl;
}

void W�rfeloutput() {
	                   std::cout << "                                                   einer:             "; Auswahlergebnis(0);
					   std::cout << "                                                   zweier:            "; Auswahlergebnis(1);
	                   std::cout << "                                                   dreier:            "; Auswahlergebnis(2);
	                   std::cout << "                                                   vierer:            "; Auswahlergebnis(3);
	std::cout << "(" << sp::Cyanblau << "1" << sp::Wei� << "). W\x81 \brfel:       " << sp::Gelb << wuerfel[0] << sp::Wei� << "                               f\x81 \bnfer:            "; Auswahlergebnis(4);
	std::cout << "(" << sp::Cyanblau << "2" << sp::Wei� << "). W\x81 \brfel:       " << sp::Gelb << wuerfel[1] << sp::Wei� << "                               sechser:           "; Auswahlergebnis(5);
	std::cout << "(" << sp::Cyanblau << "3" << sp::Wei� << "). W\x81 \brfel:       " << sp::Gelb << wuerfel[2] << sp::Wei� << "                               dreierpasch:       "; Auswahlergebnis(6);
	std::cout << "(" << sp::Cyanblau << "4" << sp::Wei� << "). W\x81 \brfel:       " << sp::Gelb << wuerfel[3] << sp::Wei� << "                               viererpasch:       "; Auswahlergebnis(7);
	std::cout << "(" << sp::Cyanblau << "5" << sp::Wei� << "). W\x81 \brfel:       " << sp::Gelb << wuerfel[4] << sp::Wei� << "                               Full-House:        "; Auswahlergebnis(8);
					   std::cout << "                                                   kleine Stra\xE1 \be:     "; Auswahlergebnis(9);
					   std::cout << "                                                   gro\xE1 \be Stra\xE1 \be:      "; Auswahlergebnis(10);
					   std::cout << "                                                   Kniffel:           "; Auswahlergebnis(11);
					   std::cout << "                                                   Chance:            "; Auswahlergebnis(12);
}

void W�rfeloutpuzanzahl() {
	std::cout << "                                                   einer:             "; Auswahlergebnis(0);
	std::cout << "                                                   zweier:            "; Auswahlergebnis(1);
	std::cout << "                                                   dreier:            "; Auswahlergebnis(2);
	std::cout << "                                                   vierer:            "; Auswahlergebnis(3);
	std::cout << sp::Gr�n << "1" << sp::Wei� << ". W\x81 \brfel:       " << sp::Gelb << wuerfel[0] << sp::Wei� << "                                 f\x81 \bnfer:            "; Auswahlergebnis(4);
	std::cout << sp::Gr�n << "2" << sp::Wei� << ". W\x81 \brfel:       " << sp::Gelb << wuerfel[1] << sp::Wei� << "                                 sechser:           "; Auswahlergebnis(5);
	std::cout << sp::Gr�n << "3" << sp::Wei� << ". W\x81 \brfel:       " << sp::Gelb << wuerfel[2] << sp::Wei� << "                                 dreierpasch:       "; Auswahlergebnis(6);
	std::cout << sp::Gr�n << "4" << sp::Wei� << ". W\x81 \brfel:       " << sp::Gelb << wuerfel[3] << sp::Wei� << "                                 viererpasch:       "; Auswahlergebnis(7);
	std::cout << sp::Gr�n << "5" << sp::Wei� << ". W\x81 \brfel:       " << sp::Gelb << wuerfel[4] << sp::Wei� << "                                 Full-House:        "; Auswahlergebnis(8);
	std::cout << "                                                   kleine Stra\xE1 \be:     "; Auswahlergebnis(9);
	std::cout << "                                                   gro\xE1 \be Stra\xE1 \be:      "; Auswahlergebnis(10);
	std::cout << "                                                   Kniffel:           "; Auswahlergebnis(11);
	std::cout << "                                                   Chance:            "; Auswahlergebnis(12);
}

void W�rfeloutputohneauswahl() {
	for (short i = 0; i < 5; i++) {
		std::cout << sp::Gr�n << i + 1 << sp::Wei� << ". W\x81 \brfel:       " << sp::Gelb << wuerfel[i] << sp::Wei� << std::endl;
	}
}

void streichenout() {
	std::cout << "welche Wahl willst du ausstreichen:\n\n\n";
	std::cout << "(" << sp::Cyanblau << "1" << sp::Wei� << ").einer:              "; Auswahlergebnis(0);
	std::cout << "(" << sp::Cyanblau << "2" << sp::Wei� << ").zweier:             "; Auswahlergebnis(1);
	std::cout << "(" << sp::Cyanblau << "3" << sp::Wei� << ").dreier:             "; Auswahlergebnis(2);
	std::cout << "(" << sp::Cyanblau << "4" << sp::Wei� << ").vierer:             "; Auswahlergebnis(3);
	std::cout << "(" << sp::Cyanblau << "5" << sp::Wei� << ").f\x81 \bnfer:             "; Auswahlergebnis(4);
	std::cout << "(" << sp::Cyanblau << "6" << sp::Wei� << ").sechser:            "; Auswahlergebnis(5);
	std::cout << "(" << sp::Cyanblau << "7" << sp::Wei� << ").dreierpasch:        "; Auswahlergebnis(6);
	std::cout << "(" << sp::Cyanblau << "8" << sp::Wei� << ").viererpasch:        "; Auswahlergebnis(7);
	std::cout << "(" << sp::Cyanblau << "9" << sp::Wei� << ").Full-House:         "; Auswahlergebnis(8);
	std::cout << "(" << sp::Cyanblau << "10" << sp::Wei� << ").kleine Stra\xE1 \be:     "; Auswahlergebnis(9);
	std::cout << "(" << sp::Cyanblau << "11" << sp::Wei� << ").gro\xE1 \be Stra\xE1 \be:      "; Auswahlergebnis(10);
	std::cout << "(" << sp::Cyanblau << "12" << sp::Wei� << ").Kniffel:           "; Auswahlergebnis(11);
	std::cout << "(" << sp::Cyanblau << "13" << sp::Wei� << ").Chance:            "; Auswahlergebnis(12);
}

void Auswahloutput() {
	std::cout << "\n\n\n";
	std::cout << "(" << sp::Cyanblau << "1" << sp::Wei� << ") einer: nur Einser z\x84 \bhlen:           "; Auswahlergebnis(0);
	std::cout << "(" << sp::Cyanblau << "2" << sp::Wei� << "). zweier: nur zweier z\x84 \bhlen:         "; Auswahlergebnis(1);
	std::cout << "(" << sp::Cyanblau << "3" << sp::Wei� << "). dreier: nur dreier z\x84 \bhlen:         "; Auswahlergebnis(2);
	std::cout << "(" << sp::Cyanblau << "4" << sp::Wei� << "). vierer: nur vierer z\x84 \bhlen:         "; Auswahlergebnis(3);
	std::cout << "(" << sp::Cyanblau << "5" << sp::Wei� << "). f\x81 \bnfer: nur F\x81 \bnfer z\x84 \bhlen:         "; Auswahlergebnis(4);
	std::cout << "(" << sp::Cyanblau << "6" << sp::Wei� << "). sechser: nur sechser z\x84 \bhlen:       "; Auswahlergebnis(5);
	std::cout << "(" << sp::Cyanblau << "7" << sp::Wei� << "). dreierpasch: alle Augen z\x84 \bhlen:    "; Auswahlergebnis(6);
	std::cout << "(" << sp::Cyanblau << "8" << sp::Wei� << "). viererpasch: alle Augen z\x84 \bhlen:    "; Auswahlergebnis(7);
	std::cout << "(" << sp::Cyanblau << "9" << sp::Wei� << "). Full-House:                        "; Auswahlergebnis(8);
	std::cout << "(" << sp::Cyanblau << "10" << sp::Wei� << "). kleine Stra\xE1 \be:                    "; Auswahlergebnis(9);
	std::cout << "(" << sp::Cyanblau << "11" << sp::Wei� << "). gro\xE1 \be Stra\xE1 \be:                     "; Auswahlergebnis(10);
	std::cout << "(" << sp::Cyanblau << "12" << sp::Wei� << "). Kniffel:                          "; Auswahlergebnis(11);
	std::cout << "(" << sp::Cyanblau << "13" << sp::Wei� << "). Chance:                           "; Auswahlergebnis(12);
	std::cout << "                                     -------" << std::endl;
	std::cout << "gesamt:                                 " << sp::Gelb << Gesamt[sp::i] << sp::Wei� << std::endl << std::endl << std::endl;


	std::cout << "(" << sp::Cyanblau << "14" << sp::Wei� << "). streichen:                       " << std::endl;
}

void Spielerout() {
	for (short i = 0; i < SpielerAnzahl[0]; i++) {
		std::cout << Farbe[i].c_str() << Spieler[i].c_str() << sp::Wei� << ": " << sp::Gelb << Gesamt[i] << sp::Wei� << "     ";
	}
	std::cout << std::endl << std::endl;
	std::cout << "Aktueller Spieler:  " << Farbe[sp::i].c_str() << Spieler[sp::i].c_str() << sp::Wei� << "\n\n\n";
}

void clear() {
	system("cls");
	Spielerout();
}

void schonbenutzt() {
	std::cout << "diese Wahl wurde schon benutzt, nimm bitte eine andere: " << std::endl << std::endl << std::endl;
}

void �berarbeite() {
	std::cout << "\x81 \bberarbeite deine Wahl nochmal:\n\n\n";
}

void gibtsnicht() {
	std::cout << "diese Wahl gibt es nicht, versuch es nochmal:\n\n\n";
}

void Wahlstreichen() {
	short input = 0;
	std::cin >> input;
	clear();
	switch (input) {

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 13:
		if ((ers[sp::i][input - 1] > 0) || (ers[sp::i][input - 1] < 0)) {
			schonbenutzt();
			streichenout();
			Wahlstreichen();
		}
		else {
			ers[sp::i][input - 1] = -1;
			std::cout << "du hast die " << input << ". Wahl gestrichen\n\n\n";
		}
		break;
	case 12:
		if ((ers[sp::i][input - 1] > 0) || (ers[sp::i][input - 1] < 0)) {
			schonbenutzt();
			streichenout();
			Wahlstreichen();
		}
		else {
			ers[sp::i][input - 1] = -1;
		}
		break;
	default:
		gibtsnicht();
		streichenout();
		Wahlstreichen();
		break;
	}
}

void Auswahl() {

	W�rfeloutputohneauswahl();

	Auswahloutput();

	short input = 0;
	std::cin >> input;
	clear();
	switch (input) {

	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
		if ((ers[sp::i][input - 1] > 0) || (ers[sp::i][input - 1] < 0)) {
			schonbenutzt();
			Auswahl();
		}
		else {
			short x = 0;
			for (short i = 0; i < 5; i++) {
				if (wuerfel[i] == input) {
					x += input;
				}
			}

			if (x == 0) {
				std::cout << "du hast keine " << sp::Cyanblau << input << sp::Wei� << ", \x81 \bberarbeite deine Wahl nochmal:\n\n\n";
				Auswahl();
			}

			else {
				ers[sp::i][input - 1] = x;
			}
		}
		break;
	
	case 7:
		if ((ers[sp::i][input - 1] > 0) || (ers[sp::i][input - 1] < 0)) {
			schonbenutzt();
			Auswahl();
		}
		else {
			short a = wuerfel[0] + wuerfel[1] + wuerfel[2] + wuerfel[3] + wuerfel[4];
			if ((wuerfel[0] == wuerfel[1] && wuerfel[1] == wuerfel[2])
				|| (wuerfel[0] == wuerfel[1] && wuerfel[1] == wuerfel[3])
				|| (wuerfel[0] == wuerfel[1] && wuerfel[1] == wuerfel[4])
				|| (wuerfel[0] == wuerfel[2] && wuerfel[2] == wuerfel[3])
				|| (wuerfel[0] == wuerfel[2] && wuerfel[2] == wuerfel[4])
				|| (wuerfel[0] == wuerfel[3] && wuerfel[3] == wuerfel[4])
				|| (wuerfel[1] == wuerfel[2] && wuerfel[2] == wuerfel[3])
				|| (wuerfel[1] == wuerfel[2] && wuerfel[2] == wuerfel[4])
				|| (wuerfel[1] == wuerfel[3] && wuerfel[3] == wuerfel[4])
				|| (wuerfel[2] == wuerfel[3] && wuerfel[3] == wuerfel[4])) {
				ers[sp::i][input - 1] = a;
			}

			else {
				�berarbeite();
				Auswahl();
			}
		}
		break;
	
	case 8:
		if ((ers[sp::i][input - 1] > 0) || (ers[sp::i][input - 1] < 0)) {
			schonbenutzt();
			Auswahl();
		}
		else {
			short a = wuerfel[0] + wuerfel[1] + wuerfel[2] + wuerfel[3] + wuerfel[4];
			if ((wuerfel[0] == wuerfel[1] && wuerfel[1] == wuerfel[2] && wuerfel[2] == wuerfel[3])
			|| (wuerfel[0] == wuerfel[1] && wuerfel[1] == wuerfel[2] && wuerfel[2] == wuerfel[4])
			|| (wuerfel[0] == wuerfel[1] && wuerfel[1] == wuerfel[3] && wuerfel[3] == wuerfel[4])
			|| (wuerfel[0] == wuerfel[2] && wuerfel[2] == wuerfel[3] && wuerfel[3] == wuerfel[4])
			|| (wuerfel[1] == wuerfel[2] && wuerfel[2] == wuerfel[3] && wuerfel[3] == wuerfel[4])){
				ers[sp::i][input - 1] = a;
			}

			else {
				�berarbeite();
				Auswahl();
			}
		}
		break;
	
	case 9:
		if ((ers[sp::i][input - 1] > 0) || (ers[sp::i][input - 1] < 0)) {
			schonbenutzt();
			Auswahl();
		}
		else {
			if ((wuerfel[0] == wuerfel[1] && wuerfel[1] == wuerfel[2]) && (wuerfel[3] == wuerfel[4])
				|| (wuerfel[0] == wuerfel[1] && wuerfel[1] == wuerfel[3]) && (wuerfel[2] == wuerfel[4])
				|| (wuerfel[0] == wuerfel[1] && wuerfel[1] == wuerfel[4]) && (wuerfel[2] == wuerfel[3])
				|| (wuerfel[0] == wuerfel[2] && wuerfel[2] == wuerfel[3]) && (wuerfel[1] == wuerfel[4])
				|| (wuerfel[0] == wuerfel[2] && wuerfel[2] == wuerfel[4]) && (wuerfel[1] == wuerfel[3])
				|| (wuerfel[0] == wuerfel[3] && wuerfel[3] == wuerfel[4]) && (wuerfel[1] == wuerfel[2])
				|| (wuerfel[1] == wuerfel[2] && wuerfel[2] == wuerfel[3]) && (wuerfel[0] == wuerfel[4])
				|| (wuerfel[1] == wuerfel[2] && wuerfel[2] == wuerfel[4]) && (wuerfel[0] == wuerfel[3])
				|| (wuerfel[1] == wuerfel[3] && wuerfel[3] == wuerfel[4]) && (wuerfel[0] == wuerfel[2])
				|| (wuerfel[2] == wuerfel[3] && wuerfel[3] == wuerfel[4]) && (wuerfel[0] == wuerfel[1])) {
				ers[sp::i][input - 1] += 25;
			}

			else {
				�berarbeite();
				Auswahl();
			}
		}
		break;
	
	case 10:
		if ((ers[sp::i][input - 1] > 0) || (ers[sp::i][input - 1] < 0)) {
			schonbenutzt();
			Auswahl();
		}
		else {
			if ((wuerfel[0] || wuerfel[1] || wuerfel[2] || wuerfel[3] || wuerfel[4] == 1)
			&&  (wuerfel[0] || wuerfel[1] || wuerfel[2] || wuerfel[3] || wuerfel[4] == 2)
			&&  (wuerfel[0] || wuerfel[1] || wuerfel[2] || wuerfel[3] || wuerfel[4] == 3)){
						ers[sp::i][input - 1] += 30;
			}

			else {
				�berarbeite();
				Auswahl();
			}
		}
		break;
	
	case 11:
		if ((ers[sp::i][input - 1] > 0) || (ers[sp::i][input - 1] < 0)) {
			schonbenutzt();
			Auswahl();
		}
		else {
			if (   (wuerfel[0] || wuerfel[1] || wuerfel[2] || wuerfel[3] || wuerfel[4] == 1)
				&& (wuerfel[0] || wuerfel[1] || wuerfel[2] || wuerfel[3] || wuerfel[4] == 2)
				&& (wuerfel[0] || wuerfel[1] || wuerfel[2] || wuerfel[3] || wuerfel[4] == 3)
				&& (wuerfel[0] || wuerfel[1] || wuerfel[2] || wuerfel[3] || wuerfel[4] == 4)) {
				ers[sp::i][input - 1] += 40;
			}

			else {
				�berarbeite();
				Auswahl();
			}
		}
		break;
	
	case 12:
		if (ers[sp::i][input - 1] < 0) {
			schonbenutzt();
			Auswahl();
		}
		if (ers[sp::i][input - 1] == 0) {
			if (wuerfel[0] == wuerfel[1] && wuerfel[1] == wuerfel[2] && wuerfel[2] == wuerfel[3] && wuerfel[3] == wuerfel[4]) {
				ers[sp::i][input - 1] += 50;
				break;
			}
			else {
				�berarbeite();
				Auswahl();
			}
		}
		else {
			if (wuerfel[0] == wuerfel[1] && wuerfel[1] == wuerfel[2] && wuerfel[2] == wuerfel[3] && wuerfel[3] == wuerfel[4]) {
				ers[sp::i][input - 1] += 100;
				break;
			}
			else {
				�berarbeite();
				Auswahl();
			}
		}
		break;
	
	case 13:
		if ((ers[sp::i][input - 1] > 0) || (ers[sp::i][input - 1] < 0)) {
			schonbenutzt();
			Auswahl();
		}
		else {
			short a = wuerfel[0] + wuerfel[1] + wuerfel[2] + wuerfel[3] + wuerfel[4];

			ers[sp::i][input - 1] = a;
		}
		break;
	
	case 14:
		streichenout();
		Wahlstreichen();
		break;
	
	default:
		gibtsnicht();
		Auswahl();
		break;
	}
	gesamt(sp::i);
}

void namenspr�fung(short i) {
	sp::p = 0;
	for (short x = 0; x < i; x++) {
		if (Spieler[x] == Spieler[i]) {
			if (x == i) {
				sp::p = 0;
			}
			else {
				Spieler[i] = "";
				Farbe[i] = "";
				sp::p = 1;
				break;
			}
		}
		else {
			sp::p = 0;
		}
	}
}

void name() {
	for (short i = 0; i < SpielerAnzahl[0]; i++) {
		std::cout << sp::Gr�n << i + 1 << sp::Wei� << ". Name: ";
		std::cin >> Spieler[i];
		std::cout << "\nWelche Farbe soll dein Name haben:\n(" << sp::Wei� << "1" << sp::Wei� << ") Wei\xE1 \b\n(" << sp::Cyanblau << "2" << sp::Wei� << ") " << sp::Cyanblau << "Cyanblau\n" << sp::Wei� << "(" << sp::Karmesinrot << "3" << sp::Wei� << ") " << sp::Karmesinrot << "Cyanblau\n" << sp::Wei� << "(" << sp::Blau << "4" << sp::Wei� << ") " << sp::Blau << "Blau\n" << sp::Wei� << "(" << sp::Gelb << "5" << sp::Wei� << ") " << sp::Gelb << "Gelb\n" << sp::Wei� << "(" << sp::Gr�n << "6" << sp::Wei� << ") " << sp::Gr�n << "Gr\x81 \bn\n" << sp::Wei� << "(" << sp::Rot << "7" << sp::Wei� << ") " << sp::Rot << "Rot\n" << sp::Wei� << "(" << sp::Schwarz_auf_Wei� << "8" << sp::Wei� << ") " << sp::Schwarz_auf_Wei� << "Schwarz_auf_Wei\xE1 \b\n" << sp::Wei�;
		int farbe = 0;
		std::cin >> farbe;
		switch (farbe) {
		case 1:
			Farbe[i] = sp::Wei�;
			break;

		case 2:
			Farbe[i] = sp::Cyanblau;
			break;

		case 3:
			Farbe[i] = sp::Karmesinrot;
			break;

		case 4:
			Farbe[i] = sp::Blau;
			break;

		case 5:
			Farbe[i] = sp::Gelb;
			break;

		case 6:
			Farbe[i] = sp::Gr�n;
			break;

		case 7:
			Farbe[i] = sp::Rot;
			break;

		case 8:
			Farbe[i] = sp::Schwarz_auf_Wei�;
			break;
		}

		if (SpielerAnzahl[0] == 1) {
			break;
		}
		else {
			system("cls");
			namenspr�fung(i);
			if (sp::p == 1) {
				std::cout << "diesen Namen gibt es schon, versuche es noch einmal: " << std::endl << std::endl;
				i--;
			}
		}
	}
}

void W�rfelnull() {
	for (short i = 0; i < 6; i++) {
		versuch[i] = 0;
	}
}

void iWurf(short x) {
	for (sp::p = x; sp::p < 4; sp::p++) {
		clear();

		W�rfeloutpuzanzahl();
		std::cout << std::endl << std::endl << sp::Gr�n << sp::p << sp::Wei� << ". Wurf?\n\n(" << sp::Cyanblau << "1" << sp::Wei� << ") ja\n(" << sp::Cyanblau << "enter" << sp::Wei� << ") Auswahl\n\n";
		char v = _getch();
		clear();
		switch (v) {

		case 13: // ASCII = 0
			sp::p += 1;
			break;

		case 49: // ASCII = 1

			std::cout << "welche W\x81 \brfel sollen neu gew\x81 \brfelt werden?" << std::endl;

			W�rfeloutput();

			std::cout << "(" << sp::Cyanblau << "Enter" << sp::Wei� << ") beenden des Wurfes\n";
			std::cout << "(" << sp::Cyanblau << "back" << sp::Wei� << ") letzter Wurf zur\x81 \bck\n\n";
			W�rfelauswahl();
			break;

		default:
			std::cout << "diese Auswahl gibt es nicht, versuche es erneut: \n\n\n";
			sp::p--;
			break;
		}
		W�rfelnull();
		clear();
	}
}

void ab(short v, short i) {
	short b = v - 49;
	if (versuch[b] == 1) {
		std::cout << "keine Zahl 2 mal, versuche es erneut: ";
		ac[0] = i -= 2;
	}

	else {
		wuerfel[b] = Wurf();
		std::cout << b + 1 << ", ";
		versuch[b] = 1;
	}
}

void W�rfelauswahl() {
	for (short i = 0; i < 5; i++) {
		short f = 0;
		char v = _getch();
		short b = v - 49;
		switch (v) {
		case 13: // ASCII = CR
			clear();
			W�rfelnull();
			iWurf(sp::p += 1);
			f = 1;
			break;

		case 49: // ASCII = 1
		case 50: // ASCII = 2
		case 51: // ASCII = 3
		case 52: // ASCII = 4
		case 53: // ASCII = 5
			W�rfelvorher[0] = b;
			ak[0] = wuerfel[b];
			ab(v, i);
			i = ac[0];
			break;

		case 8: // ASCII = BackSpace
			if (versuch[5] == 1) {
				std::cout << "du kannst nur einen W\x81 \brfel zur\x81 \bcknehmen";
			}
			
			else {
				versuch[W�rfelvorher[0]] = 0;
				wuerfel[W�rfelvorher[0]] = ak[0];
				i -= 2;
				std::cout << "\b\b\b   \b\b\b";
				versuch[5] = 1;
			}
			break;

		default:
			std::cout << "diese Auswahl gibt es nicht, versuche es erneut: ";
			i--;
			break;
		}
		if (f == 1) {
			break;
		}
		else {

		}
	}
}

void Spieleranzahl() {
	std::cout << "Anzahl Spieler: ";
	std::cin >> SpielerAnzahl[0];
	system("cls");

	if (SpielerAnzahl[0] <= 0) {
		std::cout << "leider kann man nicht zu " << sp::Gr�n << SpielerAnzahl[0] << sp::Wei� << ". spielen. Versuche es erneut" << std::endl << std::endl;
		Spieleranzahl();
	}
}

int main() {

	srand(time(NULL));

	Spieleranzahl();

	system("cls");

	name();

	clear();

	for (short i = 0; i < 13; i++) {

		for (sp::i = 0; sp::i < SpielerAnzahl[0]; sp::i++) {

			W�rfeln();

			iWurf(2);
			
			Auswahl();
		}
	}

	system("cls");

	for (sp::i = 0; sp::i < SpielerAnzahl[0]; sp::i++) {
		std::cout << Spieler[sp::i] << ": " << std::endl << std::endl << std::endl;


		std::cout << "einer:                                  "; Auswahlergebnis(0);
		std::cout << "zweier:                                 "; Auswahlergebnis(1);
		std::cout << "dreier:                                 "; Auswahlergebnis(2);
		std::cout << "vierer:                                 "; Auswahlergebnis(3);
		std::cout << "f\x81 \bnfer:                                 "; Auswahlergebnis(4);
		std::cout << "sechser:                                "; Auswahlergebnis(5);
		std::cout << "dreierpasch:                            "; Auswahlergebnis(6);
		std::cout << "viererpasch:                            "; Auswahlergebnis(7);
		std::cout << "Full-House:                             "; Auswahlergebnis(8);
		std::cout << "kleine Stra\xE1 \be:                          "; Auswahlergebnis(9);
		std::cout << "gro\xE1 \be Stra\xE1 \be:                           "; Auswahlergebnis(10);
		std::cout << "Kniffel:                                "; Auswahlergebnis(11);
		std::cout << "Chance:                                 "; Auswahlergebnis(12);
		std::cout << "                                     -------" << std::endl;
		std::cout << "gesamt:                                 " << sp::Gelb << Gesamt[sp::i] << sp::Wei� << std::endl << std::endl << std::endl;
	}

	for (short i = 0; i < SpielerAnzahl[0]; i++) {
		std::cout << Farbe[i] << Spieler[i] << sp::Wei� << ":      " << sp::Gelb << Gesamt[i] << sp::Wei� << std::endl;
	}
	std::cout << std::endl;

	system("pause");

	return 0;
}