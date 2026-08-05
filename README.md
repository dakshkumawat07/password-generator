# 🔐 Password Generator (C)

A beginner-friendly C project built as part of my **C Programming learning journey**. This project generates secure random passwords using different character sets while introducing new C programming concepts step by step. Each version adds new features while following professional GitHub practices and clean coding principles.

---

# ✨ Features

- 🔑 Generate random passwords
- 🔡 Lowercase alphabet support (`a-z`)
- 🎲 Random password generation using `rand()`
- 🌱 Different passwords on every execution using `srand()`
- 📏 Fixed password length (8 characters)
- 💻 Beginner-friendly console application
- ♻️ Clean and readable code
- 📏 User-defined password length
- ✅ Input validation (1–100)
- 🔠 Uppercase alphabet support (`A-Z`)
- 🔢 Number support (`0-9`)
- 🎛️ User-selectable character types
- 🔡 Lowercase letters (a-z)
- 🔠 Uppercase letters (A-Z)
- 🔢 Numbers (0-9)
- ✨ Special characters (!@#$%^&*)
- ✅ Prevents password generation when no character type is selected


---

# 🧠 Concepts Learned

- Variables & Data Types
- Character Arrays (Strings)
- Input / Output (`printf`)
- `for` Loop
- Array Indexing
- Random Number Generation (`rand()`)
- Random Seed (`srand()`)
- `<time.h>` Library
- Basic Program Structure
- Problem Decomposition
- User Input (`scanf`)
- Input Validation
- Logical Operators (`||`)
- sizeof() Operator
- Avoiding Magic Numbers
- Maintainable Code
- Character Pool Expansion
- Scalable Program Design
- String Manipulation (`strcat`)
- String Length (`strlen`)
- Dynamic Character Pool
- Conditional Logic using `if`
- Character Input (`%c`)
- Input Validation

---

# 🚀 Project Progress

## ✅ v1.0

- Generated random passwords
- Lowercase character support (`a-z`)
- Fixed password length (8 characters)
- Used `rand()` for random character selection
- Used `srand(time(NULL))` for different passwords every execution

## ✅ v1.1

- User-defined password length
- Added input validation (1–100)
- Replaced fixed password length with user input

## ✅ v1.2

- Added uppercase alphabet support (`A-Z`)
- Combined lowercase and uppercase into a single character pool
- Used `sizeof()` to calculate character pool size dynamically
- Eliminated hardcoded array size (magic number)

## ✅ v2.0

- Added number support (`0-9`)
- Expanded the character pool to include digits
- Passwords now contain lowercase letters, uppercase letters, and numbers
- Character pool size calculated automatically using `sizeof()`

## ✅ v2.1

- Special character support

✅ v2.2
- Added user-selectable character types
- Built the character pool dynamically using `strcat()`
- Used `strlen()` to calculate the pool size
- Added validation to ensure at least one character type is selected
- Passwords are now generated only from the selected character types

---

# 🔮 Planned Improvements



## ⬜ v3.0

- Password strength indicator

## ⬜ v4.0

- Generate multiple passwords

## ⬜ v5.0

- Professional menu-driven interface

---

# ▶️ How to Use

### Clone the repository

```bash
git clone https://github.com/dakshkumawat07/password-generator.git
```

### Open the project folder

```bash
cd password-generator
```

### Compile the program

```bash
gcc main.c -o password_generator
```

### Run the program

**Linux / Kali**

```bash
./password_generator
```

**Windows**

```bash
password_generator.exe
```

The program generates a random password using lowercase alphabets and displays it in the terminal.

---

# 📂 Project Structure

```text
Password-Generator/
│── main.c
│── README.md
│── .gitignore
```

---

# 💻 Tech Stack

- **Language:** C
- **Compiler:** GCC
- **IDE:** Visual Studio Code
- **Operating System:** Kali Linux
- **Version Control:** Git
- **Repository Hosting:** GitHub

---

# 🎯 Learning Goal

The purpose of this project is to strengthen my understanding of random number generation, arrays, strings, and loops in C by developing a real-world console application. The project is built incrementally, with each version introducing new programming concepts while following clean coding practices and a professional GitHub workflow.

---

# 👨‍💻 Author

**Daksh Kumawat**

First-Year Computer Science Engineering Student

Learning C Programming • Building Projects • Exploring Software Development

---

# ⭐ Future Vision

This project is part of my **C Programming Projects** collection. As I continue learning C, this application will evolve into a professional Password Generator supporting customizable password length, multiple character sets, password strength analysis, file handling, and an interactive menu-driven interface.
