/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:31:41 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/26 17:11:04 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::cout << GREEN << "==================== vector ====================" << RESET << std::endl;
    std::vector<int> v;
    
    for (int i = 0; i < 10; ++i)
        v.push_back(i);
    try {
        std::cout << easyfind(v, 3) << std::endl;
    }
    catch (NotFoundException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    try {
        std::cout << easyfind(v, 12) << std::endl;
    }
    catch (NotFoundException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }


    std::cout << CYAN << "==================== list ======================" << RESET << std::endl;
    std::list<int> l;
    
    for (int i = 0; i < 10; ++i)
        l.push_back(i);
    try {
        std::cout << easyfind(l, 3) << std::endl;
    }
    catch (NotFoundException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    try {
        std::cout << easyfind(l, 12) << std::endl;
    }
    catch (NotFoundException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }

    std::cout << YELLOW << "==================== deque =====================" << RESET << std::endl;
    std::deque<int> q;
    
    for (int i = 0; i < 10; ++i)
        q.push_back(i);
    try {
        std::cout << easyfind(q, 3) << std::endl;
    }
    catch (NotFoundException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    try {
        std::cout << easyfind(q, 12) << std::endl;
    }
    catch (NotFoundException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }

    return 0;
}