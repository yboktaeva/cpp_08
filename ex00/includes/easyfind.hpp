/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:26:47 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/26 16:42:58 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# define RESET "\033[1;0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[1;36m"
# define YELLOW "\033[1;33m"

# include <exception>
# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>

class NotFoundException : public std::exception {
    public:
    virtual const char *what() const throw() {
        return "Not Found";
    }
};

template<typename T>
bool easyfind(T &container, int n)
{
    if (container.empty())
        throw NotFoundException();
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it != container.end())
        return true;
    throw NotFoundException();
}

#endif