#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Restaurant {
   public:
      Restaurant();
      Restaurant(string pName, int pRating);
      void setName(string restaurantName);
      void setRating(int userRating);
      string getName();
      int getRating();
      void print();
   private:
      string name;
      int rating;
};

int main() {
   // Automatically calls the default constructor
   Restaurant favLunchPlace;  
   int numRests;
   string tempName;
   int tempRating;

   vector<Restaurant> restVec;


   cout << "How many restaurants would you like to enter? ";
   cin >> numRests;

   restVec.resize(numRests);

    cout << endl;

   // read in restaurant info into vector
   for (int i = 0; i < numRests; i++)
   {
       cout << "Restaurant " << i << " name: ";
       cin >> tempName;
       cout << "Restaurant " << i << " rating: ";
       cin >> tempRating;

       restVec.at(i).setName(tempName);
       restVec.at(i).setRating(tempRating);
   }

    cout << endl;

   // display restaurant info from vector
   for (int i = 0; i < numRests; i++)
   {
       cout << "Restaurant " << i << " name: ";
       cout << restVec.at(i).getName() << endl;
       cout << restVec.at(i).getRating() << endl << endl;
   }

   return 0;
}

Restaurant::Restaurant() : name("No Name"), rating(-1)
{
    name = "No Name";
    rating = 1;
}

Restaurant::Restaurant(string pName, int pRating) : name(pName), rating(pRating)
{
    setName(pName);
    setRating(pRating);
}

void Restaurant::setName(string restaurantName) {
   name = restaurantName;
}

void Restaurant::setRating(int userRating) {
   rating = userRating;
}

// Prints name and rating on one line
void Restaurant::print() {
   cout << name << " -- " << rating << endl;
}

string Restaurant::getName()
{
    return name;
}

int Restaurant::getRating()
{
    return rating;
}