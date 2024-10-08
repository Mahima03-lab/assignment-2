#include<iostream>
#include<cstring>

// selection sorting algorithm for integers
void sort1(int *a, int n)
{
    for(unsigned int i=0;i<n;i++)
        for(unsigned int j=i+1;j<n;j++)
            if(a[i] > a[j])
                std::swap(a[i],a[j]);
}


// selection sorting algorithm for strings
void sort2(char *a[], int n)
{
    //std::string temp;
    //char t;
    char* temp;
    for(unsigned int i=0;i<n;i++)
    {
        for(unsigned int j=i+1;j<n;j++)
         {   
            if(strcmp(a[i] , a[j])>0)
             {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
             }
         }
    }
 }


int main() 
{
    int a[] {-2,3,8,10,7,56,90};
    char* str[] {"hello", "world", "iacs","raining"};
    
    void (*sortInt)(int *, int );
    sortInt= &sort1;
    sortInt(a,7); // call via function pointer
    for(unsigned int i=0;i<7; i++)
      {
       std::cout << a[i] << " ";
      }
    std::cout << "\n";
    
    void (*sortString) (char*[], int);
    sortString = &sort2;
    sortString(str,4);
    for(unsigned int i=0;i<4; i++)
    {
      std::cout << str[i] << " ";
    }
    std::cout << "\n";
}