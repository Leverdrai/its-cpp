// Learning C++
// ask the name of the user
// and print a message with the name just inserted

#include <iostream>
#include <string>
using namespace std;

int main () {
    string name;

    cout << "Come ti chiami?" << endl;

    cin >> name;

    cout << "Ciao " +  name;

    cout << endl << endl;

    return(0);
}
