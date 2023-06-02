#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iterator>

using namespace std;

string word(string type[]) {
    string word;
    
    word = type[rand() % size(type)];
    
    return word;
}

int main() {
    srand(time(NULL));

    string g1[] = {"DEAR", "DARLING", "DEAREST", "BELOVED", "SWEET"};
    
    string g2[] = {"FELLOW FEELING", "FANCY", "JEWEL", "DOLL", "LOVE", "AMOUR", "BELOVED", "HONEY"};

    string noun[] = {"SWEETHEART", "LOVE", "HEART", "PARAMOUR", "BEAU", "AMOUR", "FELLOW FEELING", "SYMPATHY", "WISH", "FLAME", "BELOVED", "TRUELOVE", "WONDER", "GEM", "DREAM", "PEACH", "SUGAR", "DAISY", "TREASURE", "DOOZY", "BEAUTY", "ADORATION", "AFFECTION", "DEVOTION", "RAPTURE", "FERVOUR", "WARMTH", "ARDOR", "CHARM", "FLAME", "FELICITY", "FANCY", "BEING"};

    string adj[] = {"SWEET", "LOVELY", "AVID", "WISTFUL", "PASSIONATE", "ADORABLE", "BEAUTIFUL", "AFFECTIONATE", "FOND", "TENDER", "DEVOTED", "ADORING", "KIND", "FERVENT", "CORDIAL", "ENAMORED", "BELOVED", "PRECIOUS", "CHERISHED", "FAVOURITE", "FAIR", "ESTEEMED", "REVERED", "RELISHED", "ENCHANTING", "PLEASANT", "GRACEFUL", "TRUE", "DREAMY", "BURNING"};

    string adv[] = {"TENDERLY", "BEAUTIFULLY", "CURIOUSLY", "LOYALLY", "TRULY", "WARMLY", "EAGERLY", "LOVINGLY", "AVIDLY", "KEENLY", "MARVELOUSLY", "ENTICINGLY", "CHARMINGLY", "DREAMILY"};

    string verb[] = {"LONGS FOR", "YEARNS FOR", "CLINGS TO", "HOLDS DEAR", "TREASURES", "LIKES", "HUNGERS FOR", "ADORES", "THIRSTS FOR", "DESIRES", "SEEKS", "WISHES FOR", "STRIVES FOR", "PINES FOR", "WISHES FOR", "SIGHS FOR"};

    cout << word(g1) << " " << word(g2) << "," << endl << endl; //greeting

    for(int i = 0; i < 5; i++) {
        if(rand()%2 == 0) {
            if(rand()%2 == 0) {
                cout << "YOU ARE MY " << word(adj) << " " << word(noun) << ". "; //short
            }

            else {
                cout << "YOU ARE MY " << word(adj) << " " << word(noun) << ": MY " << word(adj) << " " << word(noun) << ". ";                
            }
        }

        else {
            cout << "MY " << word(adj) << " " << word(noun) << " " << word(adv)
            << " " << word(verb) << " YOUR " << word(adj) << " " << word(noun) << ". "; //long
        }
    }
    
    cout << endl << endl << "YOURS " << word(adv) << "," << endl; //closing
    cout << "TROY." << endl;

    return 0; 
}
