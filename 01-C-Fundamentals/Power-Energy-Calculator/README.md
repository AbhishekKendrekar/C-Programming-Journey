# ⚡ Power & Energy Calculator

A beginner-level C programming project created as part of my C programming journey toward embedded systems.

This project combines basic C programming concepts with electrical and electronics calculations.

## 📌 Features

The calculator can perform the following calculations:

1. **Calculate Power**
   - Voltage & Current → `P = V × I`
   - Current & Resistance → `P = I² × R`
   - Voltage & Resistance → `P = V² / R`

2. **Calculate Energy**
   - `E = P × T`
   - Result in Joules

3. **Calculate Energy Consumption**
   - Calculates energy consumption in kWh
   - `Energy = (Power × Time) / 1000`

4. **Calculate Efficiency**
   - `Efficiency = (Output Power / Input Power) × 100`

5. **Calculate Electricity Cost**
   - Calculates energy consumption and electricity cost
   - `Energy = (Power × Time) / 1000`
   - `Cost = Energy × Electricity Rate`

6. **Calculate Power from Energy & Time**
   - `P = E / T`

## 🛠️ Concepts Practiced

While building this project, I practiced:

- Variables
- Data types
- `printf()` and `scanf()`
- Format specifiers
- Arithmetic operators
- `if-else` statements
- Logical operators
- Basic input validation
- Electrical power and energy formulas

## 💻 Technologies Used

- **Language:** C
- **Compiler:** GCC
- **Environment:** Online C Compiler

## ▶️ How to Run

1. Open the `main.c` file.
2. Copy the code into any C compiler.
3. Compile and run the program.
4. Select an option from the menu.
5. Enter the required values.

## ⚠️ Known Limitation

The current version expects numeric input for calculations.

Non-numeric characters such as letters are not fully handled yet. Robust input validation will be added in a future version after learning functions and loops.

## 🚀 Future Improvements

Possible improvements for a future version:

- Add proper handling of non-numeric input
- Add loops to perform multiple calculations without restarting
- Use functions to reduce repeated code
- Improve menu handling
- Add more electrical and electronics calculations

## 📚 Learning Purpose

This project was created mainly for practice while learning C programming.

The goal is to gradually improve this project as I learn more C concepts and eventually apply these concepts to embedded systems and electronics projects.

## 👨‍💻 Author

**Abhishek**

Electronics & Telecommunication Engineering Student  
Learning C Programming and Embedded Systems
