#include <iostream>
using namespace std;
void analyze_pointer(int *ptr) {
    cout << "Address stored in pointer: " << ptr << endl;
    cout << "Value at that address: " << *ptr << endl;
}
int main(){
    int iValue = 42;
    cout<<"Address and value of the Stack Integer variable:"<<endl;
    analyze_pointer(&iValue);
    int *HeapInt = new int(100);
    cout<<"\nAddress and value of the Heap Integer variable:"<<endl;
    analyze_pointer(HeapInt);
    delete HeapInt;
    return 0;
}