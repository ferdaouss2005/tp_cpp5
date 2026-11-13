
#include <iostream>
#include <string>
using namespace std;

class Utilisateur {
private:
    string nom;
    string role;
    static int nbUtilisateursConnectes;

public:
    Utilisateur(string n, string r) {
        nom = n;
        role = r;
        nbUtilisateursConnectes++;
    }

    ~Utilisateur() {
        nbUtilisateursConnectes--;
    }

    static int getNbUtilisateursConnectes() {
        return nbUtilisateursConnectes;
    }

    void afficher() {
        cout << "Nom : " << nom << endl;
        cout << "Role : " << role << endl;
    }
};

int Utilisateur::nbUtilisateursConnectes = 0;

int main() {
    cout << "Nombre d'utilisateurs : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur* u1 = new Utilisateur("Amine", "admin");

    cout << "Apres connexion de Amine : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur* u2 = new Utilisateur("Sara", "visiteur");

    cout << "Apres connexion de Sara : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    Utilisateur* u3 = new Utilisateur("Youssef", "admin");

    cout << "Apres connexion de Youssef : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    delete u2;

    cout << "Apres deconnexion de Sara : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    delete u1;

    cout << "Apres deconnexion de Amine : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    delete u3;

    cout << "Apres deconnexion de Youssef : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    return 0;
}
