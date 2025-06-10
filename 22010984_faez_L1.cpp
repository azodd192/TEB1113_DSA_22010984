//lab1 ads
//Faez Azad
//22010984
//LabG1

#include <iostream>
using namespace std;

struct Student{
        
        int id;
        string name;
        int phone;
        string email;
        
    };
    
int main() {
    
    Student students[5];

    for (int i = 0; i < 5; ++i) {
        cout << "Enter ID for student " << i + 1 << ": ";
        cin >> students[i].id;
        cout << endl;
        
        cout << "Enter name for student " << i + 1 << ": ";
        cin >> students[i].name; 
        cout << endl;
        
        cout << "Enter phone number for student " << i + 1 << ": ";
        cin >> students[i].phone;
        cout << endl;
        
        cout << "Enter email for student " << i + 1 << ": ";
        cin >> students[i].email;
        cout << endl;
    }
    
    for(int i=0; i<5; i++){
        cout<< "Student " << i+1<< endl;
        cout << "id: " << students[i].id << endl;
        cout << "name: " << students[i].name<< endl;
        cout << "phone: " << students[i].phone << endl;
        cout << "email: " << students[i].email<< endl;
    }
    

    return 0;
}