#include "rapport.h"

  rapportTexte::rapportTexte(std::string titreRapport):d_titreRapport{titreRapport}
 {

 }

   void  rapportTexte::imprimeTitre(std::ostream& ost) const
   {
       ost<<d_titreRapport<<'\n';
   }

    void  rapportTexte::imprimeEmploye(const employe& e, std::ostream& ost) const
    {
           ost<<"EMPLOYE:"<<e.nom()<< e.salaireMensuel();
    }
