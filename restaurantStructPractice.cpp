//************************
// COMSC-210
// Lab 3 - Restaurant Struct
// Mae Schweller
//************************

#include <iostream>

using namespace std;

struct restaurant {
    string name;
    string address;
    string cuisine;
    int locations; 
    float rating; //rating out of 5
};

// Prompts user to enter the 5 components of a restaurant and returns a restaurant struct with those values
restaurant createRestaurant();
// prints all compnenets of input restaurant to console
void printRestaurant(restaurant);

int main () {
    cout << "Hi, you will enter a new restaurant into the system! Ready?" << endl;
    restaurant testRestaurant = createRestaurant();
    cout << "The restuarant you entered is:\n"; 
    printRestaurant(testRestaurant);
    return 0;
}

restaurant createRestaurant() {
    restaurant newRestaurant;
    cout << "The name is: ";
    getline(cin, newRestaurant.name);
    cout << "The address is: ";
    getline(cin, newRestaurant.address);
    cout << "The cuisine is: ";
    getline(cin, newRestaurant.cuisine);
    cout << "The restaurant has this many locations: ";
    cin >> newRestaurant.locations;
    cout << "The restaurants rating out of 5 is: ";
    cin >> newRestaurant.rating;

    return newRestaurant;
}

void printRestaurant(restaurant inputRestaurant) {
    cout << "Name: " << inputRestaurant.name << endl;
    cout << "Address: " << inputRestaurant.address << endl;
    cout << "Cuisine: " << inputRestaurant.cuisine << endl;
    cout << "Locations: " << inputRestaurant.locations << endl;
    cout << "Rating: " << inputRestaurant.rating << "/5\n";
}