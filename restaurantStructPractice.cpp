#include <iostream>

using namespace std;

struct restaurant {
    string name;
    string address;
    string cuisine;
    int locations; 
    float rating; //rating out of 5

};

restaurant createRestaurant();
// void printRestaurant(restaurant);

int main () {
    cout << "Hi, you will enter a new restaurant into the system! Ready?" << endl;
    createRestaurant();
    return 0;
}

restaurant createRestaurant() {
    restaurant newRestaurant;
    
    cout << "Enter name, address, cuisine, number of locations, and rating for new restaurant, each followed by a return" << endl;
    getline(cin, newRestaurant.name);
    getline(cin, newRestaurant.address);
    getline(cin, newRestaurant.cuisine);
    cin >> newRestaurant.locations;
    cin >> newRestaurant.rating;

    return newRestaurant;
    
}