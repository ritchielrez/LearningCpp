#include <main.h>
#include <string>

using std::cout;
using std::cin;
using std::getline;
using std::string;
using std::vector;
using std::string;

int main() {
    
    string name;

    cout << "Your name: ";
    getline(cin, name);

    cout << "Your name is " << name << "\n";

    return 0;
}
