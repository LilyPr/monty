C - Stacks, Queues - LIFO, FIFO

General
What do LIFO and FIFO mean
What is a stack, and when to use it
What is a queue, and when to use it
What are the common implementations of stacks and queues
What are the most common use cases of stacks and queues
What is the proper way to use global variables

Compilation
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty

The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Tasks
0. push, pall
Implement the push and pall opcodes

The pint opcode
If the stack is empty, print L<line_number>: can't pint, stack empty, followed by a new line, and exit with the status EXIT_FAILURE
The opcode pint prints the value at the top of the stack, followed by a new line.
The pop opcode
add opcode
div opcode
mul opcode
swap opcode
nop
mod
sub
pchar
pstr
rotr
rotl
stack
queque
push
