#include <iostream>
void f1(int m[][5],int dim1)
{
    for(unsigned int i=0;i<dim1;i++)
     { 
       for(unsigned int j=0;j<5;j++)
        {
            m[i][j] = m[i][j]+2;
        }
     }
}
int main(){
// initialize a 2d array.
int m[3][5] {{1,2,3,4,5},{11,12,13,14,15}, {21,22,23,34,25}};
f1(m,3);
for(unsigned int i=0;i<3;i++)
{
    for(unsigned int j=0;j<5;j++)
    {
       std::cout << m[i][j] << " ";
    }
    std::cout << "\n";
}
}
/*
The output is
3 4 5 6 7 
13 14 15 16 17
23 24 25 36 27

Here the input is taken as
 1 2 3 4 5
 11 12 13 14 15
 21 22 23 24 25
  and 2 is added to each element of the 2D array.


  It is a valid program.
  The reason for the validity to pass a 2d array to a function without passing the first dismensin is because the 2d array takes input row-wise and the array is treated as pointer to first element of first row.
  So to access the elements of the array we just need to know the number of columns that is the number of elements each row contains.
*/