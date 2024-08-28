#include<iostream>
typedef int (&rifii) (int, int);
//it defines anew type name rifii,as a reference to a function that takes two int parameters and returns an int.
/*
The  above is useful for passing function as an argument and manupulating them without directly invoking them.
also by this we can create multiple references to function with same signature easily.
*/