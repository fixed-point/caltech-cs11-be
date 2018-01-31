CS11 Exploitation - Set 1

Instructions:

In this set, you'll get somewhat familiar with reverse engineering. The goal is
for you to be able to examine and understand the assembly output of a compiled .c file
-- as well as for you to be able to disassemble and understand a
simple pre-compiled binary.

1. Hello World:

This is a simple hello world program, with an extra feature. It prints out
the number of arguments provided, and also each individual argument.

-Compile hello_world.c, and provide the command you used to do so.

-Ensure that you have binutils installed; this can be done via "apt-get install binutils".

-Run `objdump -D` on the compiled hello_world binary you provided. This option
 disassembles the whole of the binary.

-Examining objdump's output, read over the assembly until you're comfortable that
 you know what does what. What routine is responsible for printing "Hello world"?
 What routine is responsible for printing out the arguments?

 Put your answers, and your objdump output in separate files.

2. Simple password tool:

The provided program has a hardcoded password that it validates. To prevent
anyone from just reading out the password with strings, the password is stored encrypted
and is decrypted before being compared to the user's input.

-Using objdump (or another tool), disassemble the provided binary to get the assembly code it runs.

-Identify the password decryption routines. What is the encrypted password?

-Translate the password decryption routine into pseudo-code (C), and put your
 translated C in `password_decryption.c`.

-Using the routine you have translated, decrypt the password. What is it?