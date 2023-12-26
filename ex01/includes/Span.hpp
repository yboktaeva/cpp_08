/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 13:52:51 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/26 16:49:29 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# define RESET "\033[0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[1;36m"
# define YELLOW "\033[1;33m"

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>

class Span {
    private:
        unsigned int _N;
        template <typename T>
        T &container;
        Span();
    public:
        Span(unsigned int const &N);
        Span(const Span &src);
        ~Span();
        Span &operator=(const Span &src);
        
        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();

        class FullException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        class NoSpanException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

#endif