/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:26:47 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/21 15:47:29 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define RESET "\033[1;0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[1;36m"

# include <exception>
# include <iostream>
# include <vector>
# include <list>

class NotFoundException : public std::exception {
    public:
    virtual const char *what() const throw() {
        return "Not Found";
    }
};

template<typename T>
bool easyfind(T &container, int n)
{
    typename T::iterator it = container.begin();
    typename T::iterator ite = container.end();

    if (container.empty())
        throw NotFoundException();
    while (it != ite) {
        if (*it == n)
            return true;
        it++;
    }
    throw NotFoundException();
}

#endif