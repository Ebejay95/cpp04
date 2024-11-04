/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonathaneberle <jonathaneberle@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 10:20:56 by jeberle           #+#    #+#             */
/*   Updated: 2024/11/04 23:41:56 by jonathanebe      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
   std::cout << "=== Basic Tests from Subject ===" << std::endl;
   {
       IMateriaSource* src = new MateriaSource();
       src->learnMateria(new Ice());
       src->learnMateria(new Cure());

       ICharacter* me = new Character("me");
       
       AMateria* tmp;
       tmp = src->createMateria("ice");
       me->equip(tmp);
       tmp = src->createMateria("cure");
       me->equip(tmp);

       ICharacter* bob = new Character("bob");

       me->use(0, *bob);
       me->use(1, *bob);

       delete bob;
       delete me;
       delete src;
   }

   std::cout << "\n=== Deep Copy Tests ===" << std::endl;
   {
       Character original("Original");
       AMateria* ice = new Ice();
       original.equip(ice);

       Character copy = original;  // Test assignment operator
       Character copy2(original); // Test copy constructor

       std::cout << "Original using ice:" << std::endl;
       original.use(0, original);
       std::cout << "Copy using ice:" << std::endl;
       copy.use(0, original);
       std::cout << "Copy2 using ice:" << std::endl;
       copy2.use(0, original);
   }

   std::cout << "\n=== Inventory Management Tests ===" << std::endl;
   {
       Character hero("Hero");
       AMateria* materials[5];
       
       std::cout << "Equipping beyond capacity:" << std::endl;
       for (int i = 0; i < 5; i++) {
           materials[i] = new Ice();
           hero.equip(materials[i]);
       }

       std::cout << "Unequipping and using empty slot:" << std::endl;
       hero.unequip(0);
       hero.use(0, hero);

       // Clean up unequipped materia
       delete materials[0];
   }

   std::cout << "\n=== MateriaSource Tests ===" << std::endl;
   {
       MateriaSource source;
       
       std::cout << "Learning beyond capacity:" << std::endl;
       for (int i = 0; i < 5; i++)
           source.learnMateria(new Ice());

       std::cout << "Creating unknown materia:" << std::endl;
       AMateria* unknown = source.createMateria("unknown");
       if (!unknown)
           std::cout << "Successfully returned NULL for unknown type" << std::endl;

       std::cout << "Creating known materia:" << std::endl;
       AMateria* ice = source.createMateria("ice");
       if (ice) {
           std::cout << "Successfully created ice materia" << std::endl;
           delete ice;
       }
   }

   std::cout << "\n=== Invalid Use Tests ===" << std::endl;
   {
       Character tester("Tester");
       
       std::cout << "Using invalid slots:" << std::endl;
       tester.use(-1, tester);
       tester.use(4, tester);

       std::cout << "Unequipping invalid slots:" << std::endl;
       tester.unequip(-1);
       tester.unequip(4);

       std::cout << "Equipping NULL materia:" << std::endl;
       tester.equip(NULL);
   }

   return 0;
}
