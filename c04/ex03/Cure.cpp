/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsarhan <hsarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:26:16 by hsarhan           #+#    #+#             */
/*   Updated: 2022/10/20 10:06:18 by hsarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(const Cure &old): AMateria(old)
{
}

Cure &Cure::operator=(const Cure &rhs)
{
	(void)rhs;
	return (*this);
}

Cure::~Cure(void)
{
}

AMateria *Cure::clone() const
{
	Cure *clone = new Cure();
	return (clone);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
