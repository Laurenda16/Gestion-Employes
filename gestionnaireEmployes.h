
#ifndef GESTIONNAIREEMPLOYES_H
#define GESTIONNAIREEMPLOYES_H
#include <memory>
#include<vector>
#include"employe.h"

class gestionnaireEmployes {
public:
  void execute();
private:
  int choixMenu();
  void ajouteEmploye();
  void afficheEmployes() const;
  void afficheChargeMensuelleEmployes() const;
  double chargeMensuelleEmployes() const;

  std::vector<std::unique_ptr<employe>> d_employes;
};


#endif // GESTIONNAIREEMPLOYES_H
