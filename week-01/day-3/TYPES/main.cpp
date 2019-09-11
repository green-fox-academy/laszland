#include <iostream>

int main (int argc, char* args []) {
    //std::cout<<"Laszlo"<<std::endl;
    //std::cout<<"33"<<std::endl;
    //std::cout<<"1.62"<<std::endl;

    //std::cout<< 13 + 22<<std::endl;
    //std::cout<< 22 - 13<<std::endl;
    //std::cout<< 13 * 22<<std::endl;
    //std::cout<< (float) 22 / 13<<std::endl;
    //std::cout<< 22  / 13<<std::endl;
    //std::cout<< 22 % 13<<std::endl;

    int average = 6;
    int semester = 17;
    int daysnumb = 5;
    float hourssum = average * semester * daysnumb;

    std::cout<<"Coding hours of a GF Student: "<< hourssum << " hours." <<std::endl;
    std::cout<<"Percentage of working hours according to the average: "<< hourssum / (17*52) * 100<< " %."<<std::endl;

    return 0;
}