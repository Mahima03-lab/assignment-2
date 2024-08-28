#include<iostream>
void f1(char*,int&);//function taking argument of type pointer to character and reference to integer returning no value
void (*fptr)(char*,int&);//a pointer to function of above type 
typedef void(*fptr)(char*,int&);
void f2(fptr func);//a function taking the above pointer as an argument 
fptr funreturnfptr();//function returning such a pointer
fptr f3(fptr fun)
{
    return fun;
}//Definition of a function that takes such a pointer as an argument and returns its argument as the return value