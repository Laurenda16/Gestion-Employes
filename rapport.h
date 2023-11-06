#ifndef RAPPORT_H
#define RAPPORT_H
#include "employe.h"
#include "employeQualifies.h"

class rapport
{
   public:
       virtual ~rapport()= default;

   virtual void imprimeTitre(std::ostream& ost) const =0;
  virtual  void imprimeEmploye(const employe& e, std::ostream& ost) const=0;

};

class rapportTexte:public rapport
{
public:
    rapportTexte(std::string  titreRapport);

   void imprimeTitre(std::ostream& ost) const override;
   std::string titreRapport()const;

    void imprimeEmploye(const employe& e, std::ostream& ost) const override;
private:
    std::string d_titreRapport;

};










#endif // RAPPORT_H
