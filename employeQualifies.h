#ifndef EMPLOYEQUALIFIE
#define EMPLOYEQUALIFIE
#include "employe.h"


class employeQualifies: public employe{
public:

    employeQualifies(const std::string nom, int indice, int niveauQualification);

  double salaireMensuel() const override;

  void affiche(std::ostream& ost) const override;

  int niveauQualification() const;

private:
int d_niveauQualification;
};




#endif // EMPLOYEQUALIFIE

