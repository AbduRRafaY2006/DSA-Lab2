#include <iostream>
using namespace std;
int main(){
    string *str = new string;
    cout<<"Enter a string: ";
    getline(cin, *str);
    int len = str->length();
    for(int i=0; i<len/2; i++){
        swap((*str)[i], (*str)[len-i-1]);
    }
    cout<<"Reversed string: "<<*str<<endl;
    delete str;
    return 0;
}
