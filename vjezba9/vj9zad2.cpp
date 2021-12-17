//
// Created by antonio on 17. 12. 2021..
//


#include "zivotinje/Zivotinja.h"
#include "zivotinje/kukci/Mrav.h"
#include "zivotinje/ptice/Galeb.h"
#include "zivotinje/pauci/Tarantula.h"
#include "zivotinje/Brojac.h"

int main() {
    Zivotinja mrav1 = Mrav();
    Zivotinja galeb1 = Galeb();
    Zivotinja tarantula1 = Tarantula();

    Brojac br = Brojac();
    br.addZivotinja(mrav1);
    br.addZivotinja(galeb1);
    br.addZivotinja(tarantula1);

    br.printNoge();

}