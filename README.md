# 🧮 Calculator in C

> A simple terminal calculator built in C — one of my first real projects as a self-taught dev.

---

## 📌 About

This project was born while I was learning the basics of C.
The goal wasn't just to make a calculator — it was to understand how a real program is structured:
functions, loops, input handling, and error treatment.

It's simple. But every line was written with intent.

---

## ⚙️ Features

- ➕ Addition
- ➖ Subtraction
- ✖️ Multiplication
- ➗ Division (with division by zero protection)
- 🔁 Continuous loop until the user exits
- ❌ Invalid input handling (letters, symbols, etc.)
- 🔗 Result carry-over — use the previous result as the first number of the next operation
- 🔄 Reset option — clear the result and start fresh

---

## 🚀 How to run

**Compile:**
```bash
gcc calculator-R04.c -o calculator.exe
```

**Run:**
```bash
calculator.exe
```

> Requires GCC installed. On Windows, you can use MinGW or WSL.

---

## 📁 Project versions

| File | Description |
|------|-------------|
| `first-steps.c` | Very first attempt — raw and simple |
| `calculator-R01.c` | First structured version |
| `calculator-R02.c` | Added more operations and better flow |
| `calculator-R03.c` |  Functions, error handling and input validation |
| `Calculator-R04.c` | **Current version** — result carry-over, reset and full input validation |

---

## 💡 What I learned building this

- How to structure a program using **functions**
- How `switch`, `while` and `continue` work together
- How `scanf` handles input — and how to deal with invalid ones
- Why **division by zero** needs to be treated explicitly
- The importance of **cleaning the input buffer** with `getchar()`
- How to use **function parameters and return values** to pass data between functions
- How to manage **program state** with variables like `ongoing` and `result`

---

## 🛠️ Built with

![C](https://img.shields.io/badge/C-000000?style=for-the-badge&logo=c&logoColor=white)

---

## 👤 Author

**Miguel Mariano**
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000000?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/miguel-mariano-6a87aa2a0/)
[![Instagram](https://img.shields.io/badge/Instagram-000000?style=for-the-badge&logo=instagram&logoColor=white)](https://www.instagram.com/miiguel.mariano/)

---

<p align="center"><i>First project. Not the last.</i></p>
