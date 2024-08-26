### <h1>Enhanced Calculator</h1>
The Enhanced Calculator is a C-based tool for basic arithmetic, exponentiation, logarithms, square roots, trigonometric functions, and their inverses. Ideal for both educational and practical use, it provides precise results for various calculations. Contributions are welcome. Visit the GitHub repository for more info.
This is a versatile calculator implemented in C that supports a wide range of mathematical functions, including basic arithmetic operations, exponential functions, square roots, trigonometric functions, inverse trigonometric functions, and logarithms.

## Features
- **Basic Arithmetic Operations**: Addition, Subtraction, Multiplication, Division, Modulus
- **Exponentiation**: Compute \(a^b\)
- **Exponential Function**: Compute \(e^a\)
- **Square Root**: Compute \(\sqrt{a}\)
- **Trigonometric Functions**: Sine, Cosine, Tangent
- **Inverse Trigonometric Functions**: Arcsine, Arccosine, Arctangent
- **Logarithms**: Natural logarithm, Base-10 logarithm

## Usage
1. **Compile the Program:**
   Use a C compiler to compile the program. For example, using `gcc`:

   ```sh
   gcc -o calculator calculator.c -lm
   ```

   The `-lm` flag links the math library.

2. **Run the Program:**
   Execute the compiled program:

   ```sh
   ./calculator
   ```

3. **Input Prompts:**
   - Input the first number when prompted.
   - Input the second number when prompted (enter `0` if not needed).
   - Choose an operation from the list and provide the corresponding operator.

4. **Operators and Functions:**
   - **Arithmetic Operations**: `+`, `-`, `*`, `%`, `/`
   - **Exponentiation**: `^`
   - **Exponential Function**: `e`
   - **Square Root**: `s`
   - **Trigonometric Functions**: `c` (cosine), `t` (tangent), `i` (sine)
   - **Inverse Trigonometric Functions**: `A` (arcsine), `C` (arccosine), `T` (arctangent)
   - **Logarithms**: `L` (natural log), `l` (base-10 log)

5. **Example:**
   ```sh
   Input your 1st number: 45
   Input your 2nd number: 0
   Enter your operator (+, -, *, %, /, ^, e (exp), s (sqrt), c (cos), t (tan), i (sin), A (asin), C (acos), T (atan), L (log), l (log10)): c

   Cosine of 45.00 (in radians) = 0.52532
   ```

## Error Handling
- Division by zero is not allowed.
- Square root, logarithm, and inverse trigonometric functions require specific input ranges.
- The calculator provides error messages for invalid inputs and operations.

## Contributing
Feel free to fork the repository and submit pull requests for improvements or new features. Issues and feedback are also welcome.


[![Readme Card](https://github-readme-stats.vercel.app/api/pin/?username=nishuR31&repo=Simple-c-Calculator&show_owner=true&theme=midnight-purple)](https://github.com/nishuR31)


## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

### Repository Structure
![GitHub Repo Size](https://img.shields.io/github/repo-size/nishuR31/Simple-c-Calculator)
```
.
├── calculator.c       # Source code for the calculator
└── README.md           # This README file
```

### Contact
For any questions or collaborations, please reach out to me at:

- Email: [nishanrajak7679@gmail.com](mailto:nishanrajak7679@gmail.com)
- GitHub: [nishur31](https://github.com/nishur31)

