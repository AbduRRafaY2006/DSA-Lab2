#include <iostream>
using namespace std;
int main(){
    int *salArray = new int[20];
    for(int i=0 ; i<20;i++){
       cout<<"Enter salary of employee "<<i+1<<": ";
       cin>>*(salArray+i); 
    }
        for (int i = 0; i < 20; i++) {
        *(salArray+i) = *(salArray+i) + *(salArray+i) / (i + 1);
    }
        cout << "\nUpdated Salaries: ";
    for (int i = 0; i < 20; i++) {
        cout << *(salArray+i) << " ";
    }
    cout << endl;

    delete[] salArray;  
    return 0;


}