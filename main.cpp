#include <iostream>
#include <iomanip>
using namespace std;
// problem 1

// int main() {
//  string name;
//  int age;
//  std::cout << "What is your name? ";
//  std::cin >> name;
//  std::cout << "Ok, " << name << std::endl;
//  std::cout << "How old are you? ";
//  std::cin >> age;
//  std::cout << "Your age is " << age << std::endl;
// }

//  problem 2
// int main() {
//     for (int i = 1; i <= 5; i++) {
//         cout << setw(5) << i;
//     }
//
//     return 0;
// }

//  problem 3
// int main() {
//     int age1;
//     int age2;
//     cout << "Enter your age: ";
//     cin >> age1;
//     cout << "Enter your brother's age: ";
//     cin >> age2;
//     cout << "Your age is: " << age2 << endl;
//     cout << "Your brother's age is: " << age1 << endl;
// }

//  problem 3(2)
// int main() {
//     int a, b;
//     cin >> a >> b;
//     int c;
//     c=a;
//     a=b;
//     b=c;
//     cout<<a<<" swapped to "<<b<< " and " <<b<< " swapped to " <<a<< endl;
// }

// problem 4
// int main() {
//     for (int i = 1; i <= 7; i++) {
//         cout <<i<< setw(10) << pow(i, 2) << endl;
//     }
//     return 0;
// }

// problem 4(2)
// int main() {
//     int n;
//
//     cout << " Enter a number: ";
//     cin >> n;
//
//     cout << setw(10) << "Number" << setw(10) << "Square" << endl;
//
//     for (int i = 1; i < n; i++) {
//         cout << setw(10) << i << setw(10) <<i*i<< endl;
//     }
//     return 0;
// }

int main() {
    string s; getline(cin, s);
    int padding = (50-s.length()/2);

}