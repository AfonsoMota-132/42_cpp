/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 12:09:58 by afogonca          #+#    #+#             */
/*   Updated: 2025/07/06 13:13:07 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PmergeMe.hpp"

int main(int ac, char **av) {
  if (ac == 2) {
    struct timespec start, end;
    clock_gettime(CLOCK_MONOTONIC, &start);
    PmergeMe::startPmergeMe(av[1], VECTOR);
    clock_gettime(CLOCK_MONOTONIC, &end);
    double elapsed_us =
        (end.tv_sec - start.tv_sec) * 1e6 + (end.tv_nsec - start.tv_nsec) / 1e3;
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Vector Elapsed time: " << elapsed_us << " us" << std::endl;

    clock_gettime(CLOCK_MONOTONIC, &start);
    PmergeMe::startPmergeMe(av[1], LIST);
    clock_gettime(CLOCK_MONOTONIC, &end);
    elapsed_us =
        (end.tv_sec - start.tv_sec) * 1e6 + (end.tv_nsec - start.tv_nsec) / 1e3;
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "List Elapsed time: " << elapsed_us << " us" << std::endl;
    //
  } else {
    std::cerr << "Error!\nIncorrect Number of Arguments" << std::endl;
  }
}
