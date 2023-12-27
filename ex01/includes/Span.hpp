/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:52:51 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/27 18:40:01 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define RESET "\033[0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[1;36m"
# define YELLOW "\033[1;33m"
# define MAGENTA "\033[1;35m"

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <ctime>

class Span {
    private:
        size_t _capacity;
        std::vector<int> _v;
        Span();
    public:
        Span(unsigned int const &N);
        Span(const Span &src);
        ~Span();
        Span &operator=(const Span &src);
        
        void addNumber(int nb);
        void addRange(unsigned int const &N);
        int shortestSpan();
        int longestSpan();

};

#endif