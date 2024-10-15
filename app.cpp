#include <iostream>
#include <string>

using namespace std;

void afficherInfos(string prenom, int age) {
    cout << "Bonjour " << prenom << "! Tu as " << age << " ans." << endl;
}

void afficherInfos(string prenom, int age, float taille) {
    cout << "Bonjour " << prenom << "! Tu as " << age << " ans et ta taille est de " << taille << " mètres." << endl;
}

int main() {

    string prenom;
    int age;
    float taille;

    cout << "Entrez votre prénom : ";
    cin >> prenom;

    cout << "Entrez votre âge : ";
    cin >> age;

    cout << "Entrez votre taille en mètres (ex: 1.75) : ";
    cin >> taille;

    afficherInfos(prenom, age);
    afficherInfos(prenom, age, taille);

    return 0;
}
