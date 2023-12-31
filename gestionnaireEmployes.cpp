
#include<iostream>
#include<string>
#include"gestionnaireemployes.h"
#include "employe.h"
#include "employeQualifies.h"
#include <limits>
#include <memory>


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
    int niveauQualification;

    cout << "Voulez-vous ajouter un employe (1) ou un employe qualifie (2) ? ";
    int choix;
    cin >> choix;

    if (choix == 1) {
        cout << "Entrer le nom de l'employe : ";
        cin >> nom;
        cout << "Entrer l'indice de l'employe : ";
        cin >> indice;

        auto emp = std::make_unique<employe>(nom, indice);

        d_employes.push_back(std::move(emp));

    } else if (choix == 2) {
        cout << "Entrer le nom de l'employe qualifie : ";
        cin >> nom;
        cout << "Entrer l'indice de l'employe qualifie : ";
        cin >> indice;
        // Demander d'autres informations sp�cifiques aux employ�s qualifi�s
        cout << "Entrer le niveau de qualification de remployer Qualifier : ";
        cin >> niveauQualification;

        auto empQualifie = std::make_unique<employeQualifies>(nom, indice, niveauQualification);

        d_employes.push_back(std::move(empQualifie));
    } else {
        cout << "Choix invalide." ;
    }
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
            e->affiche(cout);
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
  //� completer
   for(const auto& e: d_employes)
        {
         cMensuelle+= e->salaireMensuel() ;
        }
return cMensuelle;
}

