#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;
//Note doing samething as in a but instead change a to n

int main(int argc,char *argv[]){
int *pa, *pb, i, temp;

int n = argc-1; //get n size from command line argument (excluding program name)

pa = new int[n];//dynamic memory allocation: new pointer with an array of size n

for(i = 0; i < n; i++, pa++) {
   *pa = atoi(argv[i+1]);
}
pa -= n; // Reset pa to start

cout << "Original:";
for(i = 0; i < n; i++, pa++) {
   cout << setw(3) << *pa;
}
cout << endl;

//pa currently points past the end of the array (outside valid range of array)
pb = pa - 1; // pb points to the last (valid) element of arrat
pa -= n; // Reset pa to start

for(i = 0; i < n / 2; i++) {
   temp = *pa;
   *pa = *pb;
   *pb = temp;
   pa++; pb--;
}
//pa currently points to the middle (or just past the middle) of the array
pa -= n / 2; // Reset pa to start after reversing; from the middle position to the start

cout << "Reversed:";
for(i = 0; i < n; i++, pa++) {
   cout << setw(3) << *pa;
}
cout << endl;

pa -= n; // Reset pa to start before deleting
delete []pa; //deallocate memory
//Note! delete only the pointer that points to the starting address of the array or where new was used to allocate memory

return 0;
}

