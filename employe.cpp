#include "employe.h"
using std::cout;
using std::cin;
using std::string;

 employe::employe(string nom, int indice):d_nom{nom},d_indice{indice}
 {

 }
    int indice() const
    {
        return d_indice;
    }
    string nom() const
    {
        return d_nom;
    }

    int salaireMensuel() const
    {
        return 40*d_indice;
    }
    void affiche(std::ostream& ost) const
    {
       ost<< "Employer"<<d_nom<< "indice"<<d_indice<<"salaire"<< salaireMensuel();
    }
