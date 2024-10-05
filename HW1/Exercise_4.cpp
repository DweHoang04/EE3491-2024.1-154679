#include <iostream>

using namespace std;

double G = 6.67/100000000000;

int main() {
    double force, mass_1, mass_2, distance;
    cout << "Enter the mass of object 1 in kilogram: ";
    cin >> mass_1;
    cout << "Enter the mass of object 2 in kilogram: ";
    cin >> mass_2;
    cout << "Enter the distance between two objects in meter: ";
    cin >> distance;

    force = G*(mass_1*mass_2)/(distance*distance);
    cout << "The gravitational force between the two objects: " << force << endl;

    return 0;
}