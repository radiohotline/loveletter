#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string word(char type) {
    string word;

    string g1[] = {"DEAR", "DARLING", "DEAREST", "BELOVED", "SWEET"};
    string g2[] = {"FELLOW FEELING", "FANCY", "JEWEL", "DOLL", "LOVE", "AMOUR", "BELOVED", "HONEY"};

    string noun[] = {"SWEETHEART", "LOVE", "HEART", "PARAMOUR", "BEAU", "AMOUR", "FELLOW FEELING", "SYMPATHY", "WISH", "FLAME", "BELOVED", "TRUELOVE", "WONDER", "GEM", "DREAM", "PEACH", "SUGAR", "DAISY", "TREASURE", "DOOZY", "BEAUTY", "ADORATION", "AFFECTION", "DEVOTION", "RAPTURE", "FERVOUR", "WARMTH", "ARDOR", "CHARM", "FLAME", "FELICITY", "FANCY", "BEING"};

    string adj[] = {"SWEET", "LOVELY", "AVID", "WISTFUL", "PASSIONATE", "ADORABLE", "BEAUTIFUL", "AFFECTIONATE", "FOND", "TENDER", "DEVOTED", "ADORING", "KIND", "FERVENT", "CORDIAL", "ENAMORED", "BELOVED", "PRECIOUS", "CHERISHED", "FAVOURITE", "FAIR", "ESTEEMED", "REVERED", "RELISHED", "ENCHANTING", "PLEASANT", "GRACEFUL", "TRUE", "DREAMY", "BURNING"};

    string adv[] = {"TENDERLY", "BEAUTIFULLY", "CURIOUSLY", "LOYALLY", "TRULY", "WARMLY", "EAGERLY", "LOVINGLY", "AVIDLY", "KEENLY", "MARVELOUSLY", "ENTICINGLY", "CHARMINGLY", "DREAMILY"};

    string verb[] = {"LONGS FOR", "YEARNS FOR", "CLINGS TO", "HOLDS DEAR", "TREASURES", "LIKES", "HUNGERS FOR", "ADORES", "THIRSTS FOR", "DESIRES", "SEEKS", "WISHES FOR", "STRIVES FOR", "PINES FOR", "WISHES FOR", "SIGHS FOR"};
    
    switch(type) {
        case 's': { //salutation
            srand(time(NULL));
            word = g1[rand() % 5];
            break;
        }

        case 'g': { //greeting
            srand(time(NULL));
            word = g2[rand() % 8];
            break;
        }

        case 'n': {
            word = noun[rand() % 34];
            break;
        }

        case 'a': { //adj
            word = adj[rand() % 30];
            break;
        }

        case 'd': { //adv
            word = adv[rand() % 14];
            break;
        }

        case 'v': {
            word = verb[rand() % 16];
            break;
        }
    }
    return word;
}

int main() {
    cout << word('s') << " " << word('g') << "," << endl << endl; //greeting
    
    srand(time(NULL));

    for(int i = 0; i < 5; i++) {
        if(rand()%2 == 0) {
            if(rand()%2 == 0) {
                cout << "YOU ARE MY " << word('a') << " " << word('n') << ". "; //short
            }

            else if(rand() % 2 == 1) {
                cout << "YOU ARE MY " << word('a') << " " << word('n') << ": MY " << word('a') << " " << word('n') << ". ";                
            }
        }

        else if(rand()%2 == 1) {
            cout << "MY " << word('a') << " " << word('n') << " " << word('d')
            << " " << word('v') << " YOUR " << word('a') << " " << word('n') << ". "; //long
        }
    }
    
    cout << endl << endl << "YOURS " << word('d') << "," << endl; //closing
    cout << "TROY." << endl;

    return 0; 
}
