# Derivative_Pricing
Implementation of contingent claim pricing models via C++

# Design Patterns and Derivative Pricing using C++
## Introduction

This repository contains an implementation of design patterns in the context of derivative pricing using C++. It serves as a learning resource and code reference for developers interested in understanding and applying design patterns in financial software development.

##Design Patterns

Design patterns are proven solutions to recurring problems in software design. By leveraging these patterns, developers can create flexible, maintainable, and extensible code. In this repository, we focus on the following design patterns commonly used in derivative pricing:

    Strategy Pattern: The strategy pattern enables you to define a family of algorithms, encapsulate each one as a separate class, and make them interchangeable. This pattern allows you to switch between algorithms dynamically based on runtime conditions. In the context of derivative pricing, it can be used to model different pricing models for various types of derivatives.

    Factory Pattern: The factory pattern provides an interface for creating objects, but allows subclasses to decide which class to instantiate. It encapsulates the object creation logic, making the code more modular and flexible. In the context of derivative pricing, a factory pattern can be employed to create different types of derivatives based on input parameters.

    Observer Pattern: The observer pattern defines a one-to-many dependency between objects, where the changes in one object are automatically propagated to its dependents. In the context of derivative pricing, this pattern can be utilized to notify observers about price updates or other changes in the pricing model.

    Decorator Pattern: The decorator pattern allows behavior to be added to an object dynamically, without affecting the behavior of other objects from the same class. It provides an alternative to subclassing for extending functionality. In the context of derivative pricing, the decorator pattern can be used to add additional features or modifications to a pricing model.

    Singleton Pattern: The singleton pattern ensures that only one instance of a class is created and provides a global point of access to that instance. It is useful when there should be a single object handling certain operations throughout the application. In the context of derivative pricing, a singleton pattern can be applied to ensure there is only one instance of a pricing engine.

## Repository Structure

The repository is organized as follows:

    src/: Contains the source code implementing the design patterns and derivative pricing examples.
    include/: Contains the header files used by the source code.
    examples/: Contains example programs demonstrating the usage of the implemented design patterns in derivative pricing.
    README.md: The main README file providing an overview of the repository.

## Getting Started

To use this repository, follow these steps:

    Clone the repository:

    shell

    git clone https://github.com/your-username/design-patterns-derivative-pricing.git

    Navigate to the cloned repository:

    shell

    cd design-patterns-derivative-pricing

    Build the code using your preferred C++ compiler. For example:

    shell

    g++ -std=c++11 src/*.cpp examples/*.cpp -o main

    Run the example programs to see the design patterns and derivative pricing concepts in action:

    shell

    ./main

    Explore the source code and examples to understand how the design patterns are implemented and applied in the context of derivative pricing.

## Contributions

Contributions to this repository are welcome! If you find any bugs, have suggestions for improvement, or want to add new design patterns or derivative pricing examples, please feel free to open an issue or submit a pull request.
License

This repository is licensed under the MIT License. See the LICENSE file for more information.
Acknowledgments

The implementation of design patterns in this repository is based
