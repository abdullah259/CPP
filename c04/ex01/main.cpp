#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <cstdlib>

int main()
{
	Animal* animal[4];

	for (int i = 0; i < 4; i++) {
		if (i >= 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	std::cout << "--------------------------------------" << std::endl;

	for (int i = 0; i < 4; i++) {
		animal[i]->getType();
		animal[i]->makeSound();
	}
	std::cout << "--------------------------------------" << std::endl;

	for (int i = 0; i < 4; i++) {
		delete animal[i];
	}
	std::cout << "--------------------------------------" << std::endl;

	return 0;
}


// int main() {
// 	Cat *kadesa = new Cat();
// 	kadesa->setIdea("Rule the world", 0);
// 	Cat	herra(*kadesa);
// 	delete kadesa;
// 	std::cout << "Idea  = " << herra.getIdea(0) << std::endl;

//     return 0;
// }
// int main() {
//     Dog dog1;
//     dog1.set_ideas("idea 1", 0);
//     dog1.set_ideas("idea 2", 1);
//     dog1.set_ideas("idea 3", 2);

//     Dog dog2 = dog1; // copy constructor is called

//     // Modify dog2's ideas array
//     dog2.set_ideas("new idea 1", 0);
//     dog2.set_ideas("new idea 2", 1);
//     dog2.set_ideas("new idea 3", 2);

//     // Verify that dog1's ideas array is unchanged
//     std::cout << "dog1's ideas:" << std::endl;
//     for (int i = 0; i < 4; i++) {
//         std::cout << dog1.get_idea(i) << std::endl;
//     }

//     // Verify that dog2's ideas array is modified
//     std::cout << "dog2's ideas:" << std::endl;
//     for (int i = 0; i < 4; i++) {
//         std::cout << dog2.get_idea(i) << std::endl;
//     }

//     return 0;
// }
