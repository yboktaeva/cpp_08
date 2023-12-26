/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:53:48 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/26 16:54:49 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0) {}

Span::Span(unsigned int const &N) : _N(N) {}

Span::Span(const Span &src) {
    *this = src;
}

Span::~Span() {}

Span &Span::operator=(const Span &src) {
    if (this != &src) {
        this->_N = src._N;
    }
    return (*this);
}

void Span::addNumber(int nb) {
    if (container.size() == this->_N)
        throw FullException();
    container.push_back(nb);
}

int Span::shortestSpan() {
    if (container.size() <= 1)
        throw NoSpanException();
    std::vector<int> tmp = container;
    std::sort(tmp.begin(), tmp.end());
    for (unsigned int i = 1; i < tmp.size(); ++i) {
        int shortestDistance = tmp[i] - tmp[i - 1];
        if (shortestDistance < tmp[1] - tmp[0])
            shortestDistance = tmp[1] - tmp[0];
    }
    return (shortestDistance);
}

int Span::longestSpan() {
    if (container.size() <= 1)
        throw NoSpanException();
    std::vector<int> tmp = container;
    std::sort(tmp.begin(), tmp.end());
    int longestDistance = tmp[tmp.size() - 1] - tmp[0];
    return (longestDistance);
}

const char *Span::FullException::what() const throw() {
    return "Span is full";
}

const char *Span::NoSpanException::what() const throw() {
    return "No span to find";
}