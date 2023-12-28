/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:27:02 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/28 11:48:29 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << "================ DEQUE ================" << RESET << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
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
    std::stack<int> s(mstack);
    
    std::cout << YELLOW << "================= LIST ================" << RESET << std::endl;
    std::list<int> list;
    MutantStack<int, std::list<int> > mstack1;
    mstack1.push(5);
    mstack1.push(17);
    std::cout << mstack1.top() << std::endl;
    mstack1.pop();
    std::cout << mstack1.size() << std::endl;
    mstack1.push(3);
    mstack1.push(5);
    mstack1.push(737);
    mstack1.push(0);
    MutantStack<int, std::list<int> >::iterator it1 = mstack1.begin();
    MutantStack<int, std::list<int> >::iterator ite1 = mstack1.end();
    ++it1;
    --it1;
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }

    std::cout << GREEN << "================ VECTOR ===============" << RESET << std::endl;
    std::vector<int> vec;
    MutantStack<int, std::vector<int> > mstack2;
    mstack2.push(5);
    mstack2.push(17);
    std::cout << mstack2.top() << std::endl;
    mstack2.pop();
    std::cout << mstack2.size() << std::endl;
    mstack2.push(3);
    mstack2.push(5);
    mstack2.push(737);
    mstack2.push(0);
    MutantStack<int, std::vector<int> >::iterator it2 = mstack2.begin();
    MutantStack<int, std::vector<int> >::iterator ite2 = mstack2.end();
    ++it2;
    --it2;
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    return 0;
}