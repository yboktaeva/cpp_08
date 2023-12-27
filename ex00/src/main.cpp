/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:31:41 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/27 16:23:53 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define FIND 3

int main() {
    std::cout << GREEN << "==================== vector ====================" << RESET << std::endl;
    std::vector<int> v;
    std::vector<int> v2;
    std::vector<int>::iterator v_it;
    for (int i = 0; i < 10; ++i)
        v.push_back(i);
    try {
        v_it = easyfind(v, FIND);
        std::cout << *v_it << std::endl;
        v_it = easyfind(v2, FIND);
        std::cout << *v_it << std::endl;
    }
    catch (std::exception &e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }

    std::cout << CYAN << "==================== list ======================" << RESET << std::endl;
    std::list<int> l;
    std::list<int>::iterator l_it;
    for (int i = 0; i < 10; ++i)
        l.push_back(i);
    try {
        l_it = easyfind(l, FIND);
        std::cout << *l_it << std::endl;
    }
    catch (std::exception &e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }

    std::cout << YELLOW << "==================== deque =====================" << RESET << std::endl;
    std::deque<int> q;
    std::deque<int>::iterator q_it;
    for (int i = 0; i < 10; ++i)
        q.push_back(i);
    try {
        q_it = easyfind(q, FIND);
        std::cout << *q_it << std::endl;
    }
    catch (std::exception &e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    return 0;
}