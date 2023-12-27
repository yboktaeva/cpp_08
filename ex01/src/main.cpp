/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:53:27 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/27 19:30:45 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << "=============== MAIN TEST ===============" << RESET << std::endl;
    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    std::cout << YELLOW << "================= TEST 1 ================" << RESET << std::endl;
    try {
        Span sp1 = Span(100);
        sp1.addRange(100);
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    std::cout << GREEN << "================= TEST 2 ================" << RESET << std::endl;
    try {
        Span sp1 = Span(0);
        Span sp2 = Span(1);
        sp2.addNumber(1);
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    std::cout << MAGENTA << "================= TEST 3 ================" << RESET << std::endl;
    try {
        Span sp1 = Span(25);
        for (int i = 0; i < 25; ++i)
            sp1.addNumber(i);
        sp1.addNumber(1);
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    std::cout << CYAN << "================= TEST 4 ================" << RESET << std::endl;
    try {
        Span sp1 = Span(10006);
        sp1.addNumber(-5);
        sp1.addNumber(0);
        sp1.addNumber(-21);
        sp1.addNumber(42);
        sp1.addNumber(647);
        sp1.addNumber(2147483626);
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
        std::cout << "After adding 10000 numbers..." << std::endl;
        sp1.addRange(10000);
        std::cout << sp1.shortestSpan() << std::endl;
        std::cout << sp1.longestSpan() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << RED << "Error: " << e.what() << RESET << std::endl;
    }
    
    return 0;
}