# gate-class
1.	Complete the Gate class which represents a gate in a Logic circuit. This class stores the values inputs in an array pointed by input pointer and the number of inputs in variable n which are defined as private.  Your job is to complete:
a)	A constructor that makes the input array and initiates all inputs to false.
b)	A setInput function that sets the value of an input.
c)	A getInput function that returns the value of an input.
d)	A GetNumberOfInputs function that returns the number of inputs.

2.	Complete the OR class which represent an OR gate in logic circuit. This class publically inherited the Gate class. It stores no more data. Your job is to complete:
a)	A constructor that constructs a gate with a given number of inputs.
b)	An output function that returns the output of the OR gate.

3.	Complete the AND class which represent an AND gate in logic circuit. This class publically inherited the Gate class. It stores no more data. Your job is to complete:
a)	A constructor that constructs a gate with a given number of inputs.
b)	An output function that returns the output of the AND gate.

4.	Complete the NOT class which represent an inverter gate in logic circuit. This class privately inherited the Gate class. It stores no more data. Your job is to complete:
a)	A constructor that constructs a gate with one input.
b)	An output function that returns the output of the NOT gate.

5.	A) Can we write?
NOT n;
cout<<n. GetNumberOfInputs()<<endl;
B) Can we Write?
AND a(3);
cout<<a. GetNumberOfInputs()<<endl;

6.	Write a main function that prints the truth table of the following logic circuit using the above classes.

