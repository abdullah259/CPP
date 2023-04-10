#include "Character.hpp"

Character::Character() : name("no Name")
{
    for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
    std::cout  << "Character() Default Constructor Called" << std::endl;
}

Character::Character(const Character &src)
{
    *this = src;
    std::cout  << "Character() Copy Constructor Called" << std::endl;
}

Character::Character(std::string const &name) : name(name)
{
    for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
    std::cout  << "Character() parm Constructor Called" << std::endl;
}

Character &Character::operator=(const Character &rhs)
{
    if (this == &rhs)
        return (*this);
    this->name = rhs.name;
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
        inventory[i] = rhs.inventory[i];
    }
    return *this;
}

std::string const &Character::getName() const {
    return (this->name);
}

void Character::equip(AMateria* m)
{
    if (m == nullptr)
    {
        std::cout << "Cannot equip null Materia" << std::endl;
        return;
    }

    for (int i = 0; i < INVENTORY_SIZE; i++)
    {
        if (inventory[i] == nullptr)
        {
            inventory[i] = m;
            return;
        }
    }

    std::cout << "Inventory is full, cannot equip Materia" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= INVENTORY_SIZE)
    {
        std::cout << "Invalid inventory index" << std::endl;
        return;
    }

    if (inventory[idx] == nullptr)
    {
        std::cout << "No Materia in inventory slot " << idx << std::endl;
        return;
    }

    // Save the address of the unequipped Materia
    if (m_numUnequippedMaterias < MAX_UNEQUIPPED_MATERIAS)
    {
        m_unequippedMaterias[m_numUnequippedMaterias] = inventory[idx];
        m_numUnequippedMaterias++;
    }
    else
    {
        std::cout << "Maximum number of unequipped Materias reached" << std::endl;
    }

    inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target) {
    // Check if index is valid
    if (idx < 0 || idx >= 4) {
        std::cout << "Invalid inventory slot! Could not use." << std::endl;
        return;
    }

    // If slot is empty, do nothing
    if (inventory[idx] == nullptr) {
        std::cout << "No AMateria object in slot " << idx << ". Could not use." << std::endl;
        return;
    }

    // Otherwise, use AMateria object on target
    inventory[idx]->use(target);
}