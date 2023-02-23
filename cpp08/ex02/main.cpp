#include "MutantStack.hpp"

int main()
{
	std::cout << "--------------------------ITERATORS---------------------------" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "TOP => " << mstack.top() << std::endl;
		std::cout << "SIZE => " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << "--------------------------REVERSED ITERATORS---------------------------" << std::endl;
	{
		MutantStack<int> mstack;

		mstack.push(45);
		mstack.push(46);
		mstack.push(47);
		mstack.push(48);
		mstack.push(49);
		mstack.push(50);
		mstack.push(51);
		mstack.push(52);

		std::cout << "TOP => " << mstack.top() << std::endl;
		std::cout << "SIZE => " << mstack.size() << std::endl;

		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}
