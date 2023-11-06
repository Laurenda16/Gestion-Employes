#ifndef EMPLOYE_H
#define EMPLOYE_H

#include<string>
#include<iostream>

using std::string;
using std::cout;
using std::cin;

class employe {
public:
    employe(string nom, int indice);
    int indice() const;
    string nom() const;
    int salaireMensuel() const;
    void affiche(std::ostream& ost) const;

private:
string d_nom;
int d_indice;

};

#endif // EMPLOYE_H

