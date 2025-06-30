/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afogonca <afogonca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:08:26 by afogonca          #+#    #+#             */
/*   Updated: 2025/06/30 11:12:09 by afogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Serializer.hpp"

int main() {
    Data original;
    original.Name = "Voyager I";
    original.Mass = 721.9;
    original.ForceX = 0.0012;
    original.ForceY = -0.0008;
    original.Velocity = 17000.5;
    original.Id = 1977;
    original.Temp = 3.5f;
    original.IsActive = true;
    std::cout << "Original Data:\n";
    std::cout << "Name: " << original.Name << "\n";
    std::cout << "Mass: " << original.Mass << "\n";
    std::cout << "ForceX: " << original.ForceX << "\n";
    std::cout << "ForceY: " << original.ForceY << "\n";
    std::cout << "Velocity: " << original.Velocity << "\n";
    std::cout << "ID: " << original.Id << "\n";
    std::cout << "Temperature: " << original.Temp << "\n";
    std::cout << "Active: " << (original.IsActive ? "true" : "false") << "\n";

    uintptr_t raw = Serializer::Serialize(&original);
    Data* copy = Serializer::Deserialize(raw);
    std::cout << "\nPointer Check:\n";
    if (copy == &original)
        std::cout << "Success: Deserialized pointer matches original.\n";
    else
        std::cout << "Failure: Pointers do not match.\n";
    std::cout << "\nDeserialized Data:\n";
    std::cout << "Name: " << copy->Name << "\n";
    std::cout << "Mass: " << copy->Mass << "\n";
    std::cout << "ForceX: " << copy->ForceX << "\n";
    std::cout << "ForceY: " << copy->ForceY << "\n";
    std::cout << "Velocity: " << copy->Velocity << "\n";
    std::cout << "ID: " << copy->Id << "\n";
    std::cout << "Temperature: " << copy->Temp << "\n";
    std::cout << "Active: " << (copy->IsActive ? "true" : "false") << "\n";
    return 0;
}
