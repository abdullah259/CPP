#include "iter.hpp"


class Animal
{
    public:
        Animal(void){return;}
        ~Animal(){return;};
        virtual void makeSound() const = 0;
};

class Dog : public Animal
{
    public:
        Dog(void){return;}
        void   makeSound() const
        {
            std::cout << "Wooof Woof" << std::endl;
        }
};

class Cat : public Animal
{
    public:
        Cat(void){return;}
        void   makeSound() const
        {
            std::cout << "Meowww" << std::endl;
        }
};


template <typename T>
void callSound(T &an)
{
    an.makeSound();
}


int main()
{
    int numbers[6] = {1, 2, 3, 4, 5, 6};

    iter(numbers,3,printElem);
    
    Cat cats[5];
    iter(cats, 5, callSound);

    Animal *d = new Dog[3];
    iter(d, 3, callSound);
}