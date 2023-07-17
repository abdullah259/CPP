#include "utils.hpp"

Base    *generate(void)
{
    srand(time(NULL));
	int i = rand() % 3;

    Base *base;
    if (i == 0)
    {
        A *gen_a = new A;
        base = dynamic_cast<Base *>(gen_a);
        return base;
    }
    else if (i == 1)
    {
        B *gen_b = new B;
        base = dynamic_cast<Base *>(gen_b);
        return base;
    }
    else if (i == 2)
    {
        C *gen_c = new C;
        base = dynamic_cast<Base *>(gen_c);
        return base;
    }
    else 
        return NULL;
}


void    identify(Base* p)
{
    A *a = dynamic_cast<A*>(p);
    if (a)
    {
        std::cout << "The pointer is A" << std::endl;
        return ;
    }
    B *b = dynamic_cast<B*>(p);
    if (b)
    {
        std::cout << "The pointer is B" << std::endl;
        return ;
    }
    C *c = dynamic_cast<C*>(p);
    if (c)
    {
        std::cout << "The pointer is C" << std::endl;
        return ;
    }
}

void identify(Base& p)
{
    try{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The reference is A" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "The reference is not A" << std::endl;
	}

	try{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cerr << "The reference is B" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "The reference is not B" << std::endl;
	}

	try{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cerr << "The reference is C" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "The reference is not C" << std::endl;
	}
}