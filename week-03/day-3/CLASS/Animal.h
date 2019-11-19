#ifndef CLASS_ANIMAL_H
#define CLASS_ANIMAL_H


class Animal {
public:
    //constructors
    Animal();
    Animal(int, int);

    //functions
    int drink();
    int eat();
    int play();

    //setters
    void setHunger(int hunger);
    void setThirst(int thirst);

    //getters
    int getHunger() const;
    int getThirst() const;

private:
    int _hunger;
    int _thirst;

};


#endif //CLASS_ANIMAL_H
