
#include<iostream>
#include<string>
#include"gestionnaireemployes.h"
#include "employe.h"
#include <limits>


using std::cout;
using std::cin;

void gestionnaireEmployes::execute()
{
  auto choix = choixMenu();
  while (choix != 4)
  {
    switch (choix)
    {
      case 1 : ajouteEmploye(); break;
      case 2 : afficheEmployes(); break;
      case 3 : afficheChargeMensuelleEmployes(); break;
    }
    choix = choixMenu();
  }
}

int gestionnaireEmployes::choixMenu()
{
  int choix {-1};
  do
  {
    cout<<"##########MENU-TELEPHONIQUE#######\n";

    cout<<"Voulez-vous :\n";
    cout<<"1- Ajouter un employe\n";
    cout<<"2- Afficher les employes\n";
    cout<<"3- Afficher la charge mensuelle des employes\n";
    cout<<"4- Quitter le programme\n";
     cout<<"##################################\n";
    cout<<"Votre choix : ";


    cin>>choix;
  }
  while (choix<0 || choix >4);
  return choix;
}
void gestionnaireEmployes::ajouteEmploye() {
    std::string nom;
    int indice;

    cout << "Entrer votre nom :\n";
    cin >> nom;

    // Validation pour l'indice
    while (true) {
        cout << "Entrer votre indice :\n";
        cin >> indice;

        if (cin.fail()) {
            cin.clear(); // Réinitialiser l'état d'erreur du flux cin
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignorer la ligne erronée
            cout << "Erreur : Veuillez entrer un indice valide (entier)." << std::endl;
        } else {
            break;
        }
    }

    employe empl{nom, indice};
    d_employes.push_back(empl);
}


void gestionnaireEmployes::afficheEmployes() const
{
    if(d_employes.empty())
    {
        cout<<"pas d'employer \n\n";
    }
    else
    {
        for(const auto& e: d_employes)
        {
            e.affiche(cout);
        }
    }
}

void gestionnaireEmployes::afficheChargeMensuelleEmployes() const
{
  cout<<"charge mensuelle des employes : "<<chargeMensuelleEmployes()<<'\n';
}

double gestionnaireEmployes::chargeMensuelleEmployes() const
{
    double cMensuelle{0};
  //À completer
   for(const auto& e: d_employes)
        {
         cMensuelle+= e.salaireMensuel() ;
        }
return cMensuelle;
}

