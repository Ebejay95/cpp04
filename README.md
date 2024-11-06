# CPP Module 04

**A study of Polymorphism and Abstract Classes in C++.**

This project explores polymorphic behavior and abstract classes in C++, demonstrating the power and flexibility of virtual functions and interfaces.

## Structure

### ex00/
The `ex00` directory introduces polymorphism:
- **Animal.cpp/hpp**: Base class implementation
- **Dog.cpp/hpp**: Derived class for Dog
- **Cat.cpp/hpp**: Derived class for Cat
- **WrongAnimal.cpp/hpp**: Example of incorrect inheritance
- **WrongCat.cpp/hpp**: Example of incorrect polymorphism
- **main.cpp**: Tests polymorphic behavior

### ex01/
The `ex01` directory adds deep copying:
- **Animal.cpp/hpp**: Base class files
- **Brain.cpp**: Implementation of Brain class
- **Brain.hpp**: Header for Brain
- **Dog.cpp/hpp**: Enhanced Dog with Brain
- **Cat.cpp/hpp**: Enhanced Cat with Brain
- **main.cpp**: Tests deep copying

### ex02/
The `ex02` directory implements abstract classes:
- **AAnimal.cpp/hpp**: Abstract base class
- **Brain.cpp/hpp**: Brain implementation
- **Dog.cpp/hpp**: Concrete Dog class
- **Cat.cpp/hpp**: Concrete Cat class
- **main.cpp**: Tests abstract class usage

### ex03/
The `ex03` directory implements interfaces:
- **AMateria.cpp/hpp**: Abstract class for materials
- **Ice.cpp/hpp**: Concrete Ice materia
- **Cure.cpp/hpp**: Concrete Cure materia
- **ICharacter.hpp**: Character interface
- **Character.cpp/hpp**: Character implementation
- **IMateriaSource.hpp**: Materia creation interface
- **MateriaSource.cpp/hpp**: Materia source implementation
- **main.cpp**: Tests interface implementation

## Features

- **Polymorphic Behavior**: Virtual functions and runtime polymorphism
- **Abstract Classes**: Pure virtual functions
- **Interfaces**: Pure abstract classes
- **Deep Copying**: Proper resource management
- **Memory Management**: Dealing with dynamic allocation

## Usage

To compile each exercise, navigate to its directory and run:
```bash
make
```

### Running the Programs

For ex00-ex02 (Animal classes):
```bash
./animal
```

For ex03 (Materia):
```bash
./materia
```

## Compilation

All exercises are compiled with:
```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp
```

## Learning Objectives

- Understanding polymorphism
- Implementing abstract classes
- Working with interfaces
- Managing deep copying
- Virtual destructors
- Memory management with inheritance
