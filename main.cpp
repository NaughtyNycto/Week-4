#include <iostream>
#include <cmath>
using namespace std;

// Problem 10
//
// int main() {
//     char act;
//
//     cout << "Enter g, y, or r: " << endl;
//     cin >> act;
//
//     switch (act) {
//         case 'g':
//             cout << "Go!" << endl;
//             break;
//         case 'y':
//             cout << "Get ready!" << endl;
//             break;
//         case 'r':
//             cout << "Stop!" << endl;
//             break;
//         default: cout << "Wrong input!" << endl;
//     }
// }


// Problem 11
//
// int main() {
//     int mark, letter_mark;
//
//     cout<<"Enter your mark: ";
//     cin>>mark;
//
//     letter_mark = mark / 10;
//
//     switch (letter_mark) {
//         case 10:
//         case 9:
//             cout<<"A";
//             break;
//         case 8:
//             cout<<"B";
//             break;
//         case 7:
//             cout<<"C";
//             break;
//         case 6:
//             cout<<"D";
//             break;
//         case 5:
//         case 4:
//         case 3:
//         case 2:
//         case 1:
//         case 0:
//             cout<<"F";
//             break;
//         default: cout<<"Invalid Mark";
//     }
// }


// Problem 12
//
// int main() {
//     int a,b,c;
//
//     cout<<"Enter 3 angles of the triangle: ";
//     cin>>a>>b>>c;
//
//     if (a+b+c == 180) {
//         cout << "The triangle is valid";
//     } else cout << "The triangle is not valid";
// }


// Problem 13
//
// int main() {
//     double a, b, c;
//     cout << "Enter coefficients a, b and c: ";
//     cin >> a >> b >> c;
//
//     double discriminant = (b * b) - (4 * a * c);
//     double x1, x2;
//
//     if (discriminant > 0) {
//         x1 = (-b + sqrt(discriminant)) / (2 * a);
//         x2 = (-b - sqrt(discriminant)) / (2 * a);
//         cout << "x1=" << x1 << endl;
//         cout << "x2=" << x2 << endl;
//     }
//     else if (discriminant == 0) {
//         x1 = -b / (2 * a);
//         cout << "x1=" << x1 << endl;
//         cout << "x2=" << x1 << endl;
//     }
//     else {
//         cout << "Root does not exist" << endl;
//     }
// }


// Problem 14
//
// int main() {
//     char letter;
//
//     cout << "Enter a character: ";
//     cin >> letter;
//
//     int char_int = letter;
//     if (char_int >= 97 and char_int <= 122) {
//         cout << "Lowercase alphabet";
//     } else if (char_int >= 65 and char_int <= 90) {
//         cout << "Uppercase alphabet";
//     } else cout << "It is not an alphabet";
// }


// Problem 15
//
// int main() {
//     float weight1, price1, weight2, price2;
//
//     cout << "Enter the weight and the price for package 1: ";
//     cin >> weight1 >> price1;
//
//     cout << "Enter the weight and the price for package 2: ";
//     cin >> weight2 >> price2;
//
//     if (weight1/price1 < weight2/price2) {
//         cout << "Package 1 has a better price" << endl;
//     }
//     else if (weight1/price1 == weight2/price2) { cout << "Two packages have the same price" << endl; }
//     else cout << "Package 2 has a better price" << endl;
// }


// Problem 16
//
// int main() {
//     int num;
//
//     cout << "Enter a three-digit number: ";
//     cin >> num;
//
//     if (num/100 == num%10) {
//         cout << num <<" is a palindrome";
//     } else cout << num <<" is not a palindrome";
// }


// Problem 17
//
// int main() {
//     char lang;
//
//     cout << "Choose a language: \n";
//     cout << "u - Uzbek \n";
//     cout << "e - English \n";
//     cout << "r - Russian \n";
//     cout << "g - German \n";
//     cin >> lang;
//
//     if (lang == 'u') {
//         cout << "Salom!" << endl;
//     }
//     else if (lang == 'e') {
//         cout << "Hello!" << endl;
//     }
//     else if (lang == 'r') {
//         cout << "Привет!" << endl;
//     }
//     else if (lang == 'g') {
//         cout << "Hola!" << endl;
//     } else cout << "I do not know this language" << endl;
// }


// Problem 18
//
// int main() {
//     int x, y;
//     cout << "Enter point (x y): ";
//     cin >> x >> y;
//
//     double distance = sqrt((x * x) +( y * y));
//
//     if (distance < 10)
//         cout << "The point is inside the circle." << endl;
//     else if (distance == 10)
//         cout << "The point is on the circle." << endl;
//     else
//         cout << "The point is outside the circle." << endl;
// }


// Problem 19

int main() {
    double gpa;

    cout<<"Enter your GPA: ";

    int gpa_int;

}