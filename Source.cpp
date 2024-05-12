/*/
Ce programme vous demande simplement de deviner le nombre choisi de façon aléatoire
par l’ordinateur. À chaque essai, il vous indique si votre chiffre est supérieur ou inférieur à
la solution. Lorsque vous trouvez le résultat, le programme vous indique le nombre de
tentatives qui ont été nécessaires pour y arriver.
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

    std::cout << "Donnez d’un nombre aléatoire\n";

    // Le temps entre dans le calcul du nombre aléatoire
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

    std::cout << "\n\nFélicitations! Vous avez trouvé en " << nombre_essai << " essais !";
    std::cout << "\n\nLa réponse était " << nombre << "\n\n";

    return 0;
}
