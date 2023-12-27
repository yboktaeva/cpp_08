/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:26:52 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/27 20:38:28 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# define RESET "\033[1;0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[1;36m"
# define YELLOW "\033[1;33m"

# include <stack>
# include <deque>
# include <iostream>
# include <algorithm>
# include <iterator>
# include <list>
# include <vector>

template <typename T, typename Base = std::deque<T> >
class MutantStack: public std::stack<T, Base> {
    public:
        MutantStack(): std::stack<T, Base>() {}
        MutantStack(const MutantStack &src): std::stack<T, Base>(src) {}
        virtual ~MutantStack() {}
        
        MutantStack &operator=(const MutantStack &src) {
            if (this != &src)
                std::stack<T, Base>::operator=(src);
            return *this;
        }
        
        typedef typename std::stack<T, Base>::container_type::iterator iterator;
        typedef typename std::stack<T, Base>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T, Base>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T, Base>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin() { return std::stack<T, Base>::c.begin(); }
        iterator end() { return std::stack<T, Base>::c.end(); }
        const_iterator begin() const { return std::stack<T, Base>::c.begin(); }
        const_iterator end() const { return std::stack<T, Base>::c.end(); }
        reverse_iterator rbegin() { return std::stack<T, Base>::c.rbegin(); }
        reverse_iterator rend() { return std::stack<T, Base>::c.rend(); }
        const_reverse_iterator rbegin() const { return std::stack<T, Base>::c.rbegin(); }
        const_reverse_iterator rend() const { return std::stack<T, Base>::c.rend(); }
};

#endif