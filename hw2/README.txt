CS11 Exploitation - Set 2

Instructions:

In each of the provided programs, your goal is to find (and explain) an
input that will allow you to recover the "password" variable.
This is (admittedly a contrived, for now) way of introducing you to taking advantage
of improperly-handled user input.

For this week, to ease you into things, the programs were compiled with -g.
This may not be the case for future sets.

1. Buffer Overflow:

-There is a straightforward buffer overflow in this code. Where is it, and how
would you go about triggering it?

-Provide a set of input that leads to spawn_shell() being called. Why does
this happen?

2. Indexing error:

-What issue do you spot in the way that this code validates user input? 
 
-Explain how to exploit this bad input validation in order to determine the
 contents of the global `password variable`. Provide an input that accomplishes this.