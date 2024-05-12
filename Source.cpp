/*/
Ce programme vous demande simplement de deviner le nombre choisi de fa�on al�atoire
par l�ordinateur. � chaque essai, il vous indique si votre chiffre est sup�rieur ou inf�rieur �
la solution. Lorsque vous trouvez le r�sultat, le programme vous indique le nombre de
tentatives qui ont �t� n�cessaires pour y arriver.
*/
//EKKS

#include <iostream>
#include <cstdlib>
#include <ctime>

#define NO 0
#define YES (!NO)

int main() {
    int aDeviner = -1;
    int nombre;
    int nombre_essai = 0;
    int trouve = NO;

    std::cout << "Donnez d�un nombre al�atoire\n";

    // Le temps entre dans le calcul du nombre al�atoire
    srand(time(NULL));
    nombre = rand();

    while (trouve == NO) {
        std::cout << "\nDonnez un nombre entre 0 et " << RAND_MAX << "> ";
        std::cin >> aDeviner; // Lecture du nombre
        nombre_essai++;

        if (nombre == aDeviner) {
            trouve = YES;
        }
        else if (nombre < aDeviner) {
            std::cout << "\nCe nombre est trop grand !";
        }
        else {
            std::cout << "\nCe nombre est trop petit !";
        }
    }

    std::cout << "\n\nF�licitations! Vous avez trouv� en " << nombre_essai << " essais !";
    std::cout << "\n\nLa r�ponse �tait " << nombre << "\n\n";

    return 0;
}
