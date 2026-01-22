# Infix to Postfix Conversion and Evaluation 

## Description
This program converts an **infix mathematical expression** into a **postfix expression** and then evaluates it.  
- Infix expression: Operators are written **between operands** (e.g., `3+4*2`).  
- Postfix expression: Operators are written **after operands** (e.g., `342*+`).  
- The program uses **stacks** to handle operators and operands.
- Operator precedence is maintained during conversion

## (a) Data Structures Defined

### Operator Stack
``c
char opStack[MAX];    // opStack → Array to store operators (+, -, *, /, ^, (, )).
int topOp = -1;      // topOp -> Tracks the top index of the operator stack
int valStack[MAX];   // valStack → Array to store integer operands during evaluation.
int topVal = -1;     // topVal → Tracks the top index of the value stack.

## (b) Functions Implemented
1. `pushOp(char x) / popOp()` : Push and pop operators on the operator stack.
   - pushOp → Adds operator x to the stack.
   - popOp → Removes and returns the top operator from the stack.

2. `pushVal(int x) / popVal()`:Push and pop operands on the value stack.
   - pushVal → Adds value x to the stack.
   - popVal → Removes and returns the top value from the stack.

3. `priority(char x)`:Returns the precedence of an operator.

4. `convert(char infix[], char postfix[])`: Infix to Postfix Conversion
   1) Read the infix expression
   2) If operand is found, add it to postfix
   3) If `(` is found, push it into stack
   4) If `)` is found, pop elements until `(` is found
   5) If operator is found:
      - Pop operators with higher or equal precedence
      - Push current operator
   6) Pop remaining operators from stack

5. `evaluatePostfix(char postfix[])`: Postfix Evaluation and returns the integer value
   - Scan the postfix expression from left to right.
   - If a digit, push onto the value stack.
   - If an operator, pop two operands, perform the operation, push the result back.
   - After scanning, the result is on top of the stack.

## (c) Overview of `Main()`

- Scan the postfix expression from left to right.
- If a digit, push onto the value stack.
- If an operator, pop two operands, perform the operation, push the result back.
- After scanning, the result is on top of the stack.

## (d) Sample Output

Enter infix expression: 3+4*2
Postfix expression: 342*+
Evaluated result: 11 

- Explanation:

   Infix: 3 + 4 * 2
   Postfix: 3 4 2 * + 
   Result: 11  ( Multiply 4*2 first, then add 3.)

