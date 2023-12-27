/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:53:48 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/27 19:40:40 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _capacity(0), _v() {}

Span::Span(unsigned int const &N) : _capacity(N) {
    _v.reserve(N);
}

Span::Span(const Span &src) : _capacity(src._capacity), _v(src._v) {}

Span::~Span() {}

Span &Span::operator=(const Span &src) {
    if (this != &src) {
        _capacity = src._capacity;
        _v = src._v;
    }
    return *this;
}

void Span::addNumber(int nb) {
    if (_v.size() + 1 > this->_capacity)
        throw std::overflow_error("Span is full");
    _v.push_back(nb);
}

void Span::addRange(unsigned int const &N) {
    std::vector<int> tmp;
    srand (time(NULL));
    tmp.reserve(N);
    for (size_t i = 0; i < N; ++i) {
        tmp.push_back(rand() % 1000);
    }
    if (this->_capacity < tmp.size() + _v.size())
        throw std::overflow_error("Span is full");
    _v.insert(_v.end(), tmp.begin(), tmp.end());
}

int Span::shortestSpan() {
    if (_v.size() <= 1)
        throw std::range_error("No span to find");
    std::vector<int> tmp = _v;
    std::sort(tmp.begin(), tmp.end());
    int shortestDistance = tmp[1] - tmp[0];
    for (size_t i = 0; i < tmp.size() - 1; ++i) {
        shortestDistance = std::min(shortestDistance, tmp[i + 1] - tmp[i]);
    }
    return shortestDistance;
}

int Span::longestSpan() {
    if (_v.size() <= 1)
        throw std::range_error("No span to find");
    int longestDistance = *std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end());
    return longestDistance;
}

// void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
//     for (std::vector<int>::iterator it = begin; it != end; ++it) {
//         if (_v.size() + 1 > this->_capacity)
//             throw std::overflow_error("Span is full");
//         _v.push_back(*it);
//     }
// }