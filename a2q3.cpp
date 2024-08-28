#include<iostream>
int g=0;//global
void callbylocal2()
{
    static int a=0;//local
    a++;
    if(a==10)
    std::cout<<"I have been called"<<a<<"times\n";
}
void callbylocal1()
{
    int a=0;//local
    a++;
    if(a==10)
    std::cout<<"I have been called"<<a<<"times\n";
}
void callbyglobal()
{
    
    g++;
    if(g==10)
    std::cout<<"I have been called"<<g<<"times\n";
}
int main()
{
    int i;
   std::cout<<"OUTPUT FOR LOCAL VARIABLE\n\n";
    for(i=1;i<=10;i++)
    {
        callbylocal1();
    }

     std::cout<<"OUTPUT FOR LOCAL VARIABLE using static\n";
    for(i=1;i<=10;i++)
    {
       callbylocal2();
    }

     std::cout<<"OUTPUT FOR GLOBAL VARIABLE\n";
    for(i=1;i<=10;i++)
    {
    
        
        callbyglobal();
    }
    return 0;
}
//Static local variable is more appropriate because it is confined within the function where it is defined and cannot be modified outside the function.
//Whereas in case of global variables can be accessed from anywhere in the program and hence is vulnarable to be modified by any part of the code.
//In case of local variable the parameter a initializes to 0 after each call and then incremented by 1 but the incremented value is not preserved in future calls.