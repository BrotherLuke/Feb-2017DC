# include <iostream>
# include <string>
using namespace std;
int main() {
	string song; string Juicy; string DancingQueen; string LaVieEnRose;
	cout << "Would you like to hear MyDingaling, DancingQueen, or Juicy? (Enter as is with no sppaces)" << endl;
	cin >> song;
	if (song == "Juicy") {
		cout << "It was all a dream I use to read word up magaize" << endl;
		cout << "Salt n pepper and heavy D up in the limozine" << endl;
		cout << "Hangigng pictures on my wall =, evry saturday rap attack Mr.Magic Marley Marl" << endl;
	}//juicy lyrics
	else if  (song == "DancingQueen") {
		cout << "Ooh You can dance You can jive Having the time of your life" << endl;
		cout << "Ooh see that girl, Watch that scene digging. Dig in the dancing queen" << endl;
	}
	else if(song == "LaVieEnRose") {
		cout << "Hold me close and hold me fast" << endl;
		cout << "The magic spell you cast" << endl;
		cout << "This is la vie en rose" << endl;
		cout << "When you kiss me heaven sighs" << endl;
		cout << "And tho I close my eyes" << endl;
		cout << "I see la vie en rose." << endl;
	}
	else
		cout << "You have entered it wrong" << endl;



		
	




}

