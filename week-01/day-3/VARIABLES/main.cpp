#include <iostream>

int main (int argc, char* args []) {
    // Favorite Number
    //int favoriteNumber = 16;
    //std::cout<< "My favorite number is: " << favoriteNumber << std::endl;


    //Swap
    //int a = 123;
    //int b = 526;

    //a = 526;
    //b = 123;

    //std::cout<< "a is now: " << a << std::endl;
    //std::cout<< "b is now: " << b << std::endl;


    //Bmi
    //double massInKg = 81.2;
    //double heightInM = 1.78;
    //double bmi = massInKg / (heightInM * heightInM);

    //std::cout<< bmi << std::endl;


    //Define Basic Info
    //std::string name = "laszlo kiss";
    //int age = 33;
    //double height = 1.62;
    //bool married = true;

    //std::cout<< name << std::endl;
    //std::cout<< age << std::endl;
    //std::cout<< height << std::endl;
    //std::cout<< married << std::endl;


    //Variable Mutation
    /*int a = 3;
    a += 10;
    std::cout<< a << std::endl;

    int b = 100;
    b -= 7;
    std::cout<< b << std::endl;

    int c = 44;
    c *= 2;
    std::cout<< c << std::endl;

    int d = 125;
    d /= 5;
    std::cout<< d << std::endl;

    int e = 8;
    e = e * e * e;
    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    bool f12 = (f1 > f2);
    std::cout<< f12 << std::endl;

    int g1 = 350;
    int g2 = 200;
    bool g12 = ((g2*g2) > g1);
    std::cout<< g12 << std::endl;

    int h = 13579745;
    bool b1 = (h % 11 < 1);
    std::cout<< b1 << std::endl;

    int i1 = 10;
    int i2 = 3;
    bool sq = (i1 > (i2*i2));
    bool cu = (i1 < (i2*i2*i2));
    std::cout<< sq << std::endl;
    std::cout<< cu << std::endl;

    int j = 1521;
    int j1 = j % 3;
    int j2 = j % 5;
    bool jout = (j1 < 1 || j2 < 1);
    std::cout<< jout << std::endl;*/


    //Cuboid
    /*double a = 5.4;
    double b = 6.5;
    double c = 7.6;

    double surface = 2 * (a * b + b * c + c * a);
    double volume = a * b * c;

    std::cout<< "Surface Area: " << surface << std::endl;
    std::cout<< "Volume: " << volume << std::endl;*/


    //Second In A Day
    int currentHours = 14;
    int currentMinutes = 34;
    int currentSecodns = 43;

    int sumSecondsaDay = 24 * 60 * 60;
    int SecondsSpent = (currentHours * 60 * 60) + (currentMinutes * 60) + currentSecodns;

    std::cout<< sumSecondsaDay - SecondsSpent << " seconds left from this day." << std::endl;






    return 0;

}