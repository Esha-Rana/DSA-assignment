- gcc file.c
- .\a.exe

--> 2nd dec, 2025

arithmetic expression can be represented by 3 equivalent form which produces the same output :_
1. infix expression a+b ( operator lai operand ko bich ma lekhxha)
2. prefix --> polish notation +ab ( operator lai operand ko agadhi )
3. postfix --> reverse polish notation ab+ ( operator lai pichadi ) 

for each symbol S in expression , if s is an operand - push into the stack 
else if s is an operator - pop 2 values - top A neartop -B 
perform B operator A 
push result to stack 
result in stack 

## Operator precedence 

^    higher
*/   medium
+-   lower

same category ko precedence ho bhane chai sangai narakhne pop gardihalne 


## example :-

### qno.1 postfix 23*54*+9- ( left to right garne associativity )

symbol  | stack   | opr
2        2       push(2)
3        2 3     push (3)
*        6       pop(3 &2), opr=3*2=6,push 6 
5        6 5     push (5)
4        6 5 4   push (4)
*        6 20    pop(20 &6), opr=5*4=20, push (20)  
+        26      pop(20 & 6 )
9        26 9    push (9)
-        17      push(17)

postfix ma garda initial ma j cha tei number gara left to right her 

### qno.2 prefix -+*23*549 ( right to left )

symbol  |   stack    |    opr
9           9        push(9)
4           4  9     push (4)
5           5 4 9    push (5)
*           20 9     pop(4 and 5), opr=4*5=20,push 20
3           3 20 9   push (3)
2           2 3 20 9 push (2)
*           6 20 9   pop (3 and 2), opr= 3*2=6, push (6)
+           26 9     pop(20&6), opr= 20+6=26, push (26)
-           17       pop( 26 & 9 ), opr= 26-9=17

prefix ma garda initial chai last ma lekha stack jastai hoss bhanera 

- top-bottom in prefix 
- bottom - top in postfix 

## steps of turning infix to postfix conversion ( IMPORTANT )

1. operator should be pushed to stack 
2. operand should be added to postfix expr
3. if opening parenthesis '(' occurs push to stack and if respective closing parenthesis ')' occurs then , (operator) , operator lai chai postfix ma add garne and parenthesis lai nikaldine 
4. if an operator with lower precedence comes in top of the operator with higher preecedence, then pop the operator with higher precedence and add to postfix expr and then add the other operator to stack.
5. no two operators with same prcedence can stay together. 

## example :- 

### qno.1 A + B * C - 

symbol       stack         postfix    opr
A          (-) dash ntg     A
+           +               A
B           +               AB
*           +*              AB   ( stack ma + paxi * aucha coz + has lower precedence than *)
C           +*              ABC
-           -               ABC*
                            ABC**

### qno.2 (A+B/C*(D+E)-F)

symbol     stack    postfix
(
A
+
B
/
c
*
(
D
+
E
)
-
F
)

## steps to turn infix to prefix ( syllabus ma chaina but may come so )

1. reverse the given expression 
2. find postfix 
3. reverse the result 

