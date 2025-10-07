#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;
//Note doing samething as in a but instead change a to n

int main(int argc,char *argv[]){
int *pa, *pb, *p, i, temp;
//int a[SIZE] ={1,2,3,4,5,6,7,8,9,10}; 
//int n;
int n = argc-1; //get n from command line argument
//cout<<"How many numbers needed? ";
//cin>>n;
//int *p = new int[n];//dynamic memory allocation
p = new int[n];//dynamic memory allocation
int *p_start = p; //keep p_start to hold the starting (original) address of the array

for(i= 0; i<n; i++){
  //cin>>*p;
  *p = atoi(argv[i+1]); //get input from command line argument
  p++; //move to next position
}

p = p_start; //reset p to the starting address

cout<<"Original: ";./
for (i=0; i < n-1; i++ ,p++){
   cout<<setw(3)<<*p ;
}
cout<<setw(3)<<*p<<endl; //last element + enter

p = p_start; //reset pa to the starting address
pb = p + n - 1; //point to the last element

for (i=0; i<n/2; i++)
{
   temp = *p;  
   *p = *pb;  
   *pb = temp;
   p++;  pb--;
}

p = p_start; //reset p to the starting address
cout<<"Reversed: ";
for (i=0; i < n-1; i++ ,p++){
    cout<<setw(3)<<*p ;
}
cout<<setw(3)<<*p<<endl; //last element + enter


delete []p_start;

return 0;
}
