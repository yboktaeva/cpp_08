/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <yuboktae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:26:47 by yuboktae          #+#    #+#             */
/*   Updated: 2023/12/27 16:22:47 by yuboktae         ###   ########.fr       */
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

template<typename T>
typename T::iterator easyfind(T &container, int n)
{
    typename T::iterator it;
    if (container.empty())
        throw std::range_error("Container is empty");
    it = std::find(container.begin(), container.end(), n);
    if (it != container.end())
        return it;
    throw std::range_error("Not found");
}

#endif