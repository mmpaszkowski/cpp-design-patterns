# Abstract Factory

Category:
- Creational

Tags:
- Abstraction
- Decoupling
- Gang of Four
- Instantiation
- Polymorphism

## Abstract Factory Design Pattern idea

The Abstract Factory design pattern is a creational pattern used in object-oriented programming. Its main purpose is to provide an interface for creating families of related or dependent objects without specifying their concrete classes.

## Real-World Example

<b>Scenario</b>: Imagine you’re designing furniture for two different styles:
- Modern
- Victorian

Each style has different versions of furniture items:
- Chair
- Sofa
- Coffee Table

You want to ensure that a room contains matching furniture — all Modern or all Victorian, not mixed.

The Analogy:
- Abstract Factory: The FurnitureFactory – defines how to make chairs, sofas, tables.

Concrete Factories:
- ModernFurnitureFactory makes ModernChair, ModernSofa, ModernTable
- VictorianFurnitureFactory makes VictorianChair, VictorianSofa, VictorianTable

Abstract Products: 
- Chair, 
- Sofa, 
- Table

Concrete Products: 
- ModernChair
- VictorianSofa
- etc.

Client: 
- A RoomDesigner that creates a room using a given furniture factory — but never directly creates a ModernChair or VictorianTable.

The Key Point:
- The client (room designer) doesn’t care what exact kind of chair or table it gets — it just asks the factory to give matching pieces. This ensures consistency and makes it easy to switch the entire style by simply swapping the factory.

