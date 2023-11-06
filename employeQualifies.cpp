
#include<iostream>
#include<string>
#include"gestionnaireEmployes.h"

#include "employe.h"
#include "employeQualifies.h"

 employeQualifies::employeQualifies(const std::string nom, int indice, int niveauQualification):employe{nom,indice},d_niveauQualification{niveauQualification}
     {

     }

  double  employeQualifies::salaireMensuel() const
  {
    return  ( 50*indice())+ (d_niveauQualification*10);
  }
  void employeQualifies::affiche(std::ostream& ost) const
  {
      employe::affiche(ost);

      ost<<"qualification"<< d_niveauQualification;

  }

  int employeQualifies::niveauQualification() const{

  return d_niveauQualification;
  }
