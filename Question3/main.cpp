#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
#include<chrono>

using namespace std;
using namespace std::chrono; 

//Static array
void Static(){
int array[1000];
for(int i = 0; i<1000; i++)
array[i] = i;
}

//Stack array
void Stack(){
stack<int> mystack;
for(int i = 0; i<1000; i++){
mystack.push(i);
}
}

//Heap array
void Heap(){
int array[1000];
for(int i = 0; i<1000; i++){
array[i] = i;
}
vector<int> heap(array,array+1000);
make_heap (heap.begin(),heap.end());
push_heap (heap.begin(),heap.end());
}

int main(){
auto start = high_resolution_clock::now(); 
for(int i = 0; i<100000; i++){
Static();
}
auto stop = high_resolution_clock::now(); 
auto duration = duration_cast<microseconds>(stop - start);
cout << "Static array duration: " << duration.count() << " microseconds." << endl; 

start = high_resolution_clock::now();
for(int i = 0; i<100000; i++){
Stack();
}
stop = high_resolution_clock::now(); 
duration = duration_cast<microseconds>(stop - start);
cout << "Stack array duration: " << duration.count() << " microseconds." << endl; 

start = high_resolution_clock::now();
for(int i = 0; i<100000; i++){
Heap();
}
stop = high_resolution_clock::now(); 
duration = duration_cast<microseconds>(stop - start);
cout << "Heap array duration: " << duration.count() << " microseconds." << endl; 
return 0;
}
