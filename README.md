# Basic Banking Operations with Classes – C++


This repository contains two basic Object-Oriented Programming exercises written in C++. Each exercise demonstrates the use of classes, constructors, encapsulation, and object manipulation.

---

## 📁 Structure

```
oop-practice-1-cpp/
├── exercise1/
│   ├── cuenta.h
│   ├── cuenta.cpp
│   └── main.cpp
├── exercise2/
│   ├── circulo.h
│   ├── circulo.cpp
│   ├── cilindro.h
│   ├── cilindro.cpp
│   └── main.cpp
└── README.md
```

---

## 🧪 Exercise 1 – Bank Account (`cuenta` class)

Implements a basic bank account system with deposit, withdrawal, and balance operations. It includes:

- Constructors and destructor
- Input validation
- Console output for account status

### Files:
- `cuenta.h`: Class declaration
- `cuenta.cpp`: Method implementation
- `main.cpp`: Demo of operations on two accounts

---

## 🧪 Exercise 2 – Volume of a Cylinder

Uses two classes to calculate the volume of a cylinder:

- `circulo`: Calculates area of a circle
- `cilindro`: Uses the circle’s area and a height to compute volume

### Features:
- Class composition
- Input validation loop
- Interactive console-based program

### Files:
- `circulo.h`, `circulo.cpp`
- `cilindro.h`, `cilindro.cpp`
- `main.cpp`: Volume calculation with user input

---

## 🛠️ Compilation

Compile the programs with `g++`:

```bash
# Exercise 1
g++ exercise1/main.cpp exercise1/cuenta.cpp -o exercise1/app1
./exercise1/app1

# Exercise 2
g++ exercise2/main.cpp exercise2/cilindro.cpp exercise2/circulo.cpp -o exercise2/app2
./exercise2/app2
```

---

## ✅ Summary

- Demonstrates class-based programming in C++
- Applies encapsulation and class composition
- Includes basic validation and interaction through the terminal
