#include <iostream>
#include <vector>
#include "Printer2D.h"
#include "Printer3D.h"
#include "Copier.h"

int main() {

    std::vector<Printer*> printers;

    Printer2D printer2DAlfa(30, 40);
    Printer2D printer2DBeta(40, 50);
    Printer2D printer2DDelta(50, 60);
    Printer3D printer3DFirst(20, 30, 40);
    Printer3D printer3DSecond(30, 40, 50);
    Copier copyMashine1(100, 40, 50);

    printers.push_back(&printer2DAlfa);
    printers.push_back(&printer2DBeta);
    printers.push_back(&printer2DDelta);
    printers.push_back(&printer3DFirst);
    printers.push_back(&printer3DSecond);
    printers.push_back(&copyMashine1);

    for (int i = 0; i < printers.size(); ++i) {
        printers[i] -> print();
    }
    std::cout << std::endl;

    std::vector<Scanner*> scanners;

    Scanner scanner1(140);
    Scanner scanner2(160);
    Copier copyMashine2(130, 20, 50);
    Copier copyMashine3(160, 70, 30);

    scanners.push_back(&scanner1);
    scanners.push_back(&scanner2);
    scanners.push_back(&copyMashine2);
    scanners.push_back(&copyMashine3);

    for (int j = 0; j < scanners.size(); ++j) {
        scanners[j] -> scan();
    }


    return 0;
}