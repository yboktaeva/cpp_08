/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:31:41 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/21 15:45:03 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::cout << GREEN << "==================== vector ====================" << RESET << std::endl;
    std::vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    try {
        std::cout << easyfind(v, 3) << std::endl;
    }
    catch (NotFoundException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    try {
        std::cout << easyfind(v, 6) << std::endl;
    }
    catch (NotFoundException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }


    std::cout << CYAN << "==================== list ======================" << RESET << std::endl;
    std::list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    try {
        std::cout << easyfind(l, 3) << std::endl;
    }
    catch (NotFoundException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    try {
        std::cout << easyfind(l, 6) << std::endl;
    }
    catch (NotFoundException &e) {
        std::cout << RED << e.what() << RESET << std::endl;
    }
    return 0;
}