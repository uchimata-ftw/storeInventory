/*
Inventory management software
Written by Max Ferguson
ferguson8max@gmail.com
https://github.com/uchimata-ftw
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
/* Sets maximum number of decimal values to 2 */
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

/* Initialize Variables */
    string choice = "N";
    string typeOfAlcohol, nameOfAlcohol;
    float priceOfBottle, nameValue, numberBottles, totalValue;
    ifstream inStream;
    ofstream outStream;

/* Enter Inventory */
do {
    cout << "What type of alcohol are you counting? ";
    cin >> typeOfAlcohol;
    cout << "\nWhat is it's name? ";
    cin >> nameOfAlcohol;
    cout << "\nWhat is its price? ";
    cin >> priceOfBottle;
    cout << "\nHow many bottles do you have? ";
    cin >> numberBottles;

/* Keep a running total of individual stocks value */
    nameValue = priceOfBottle * numberBottles;

/* Sorts by alcohol type and writes to text file */
      if (typeOfAlcohol == "vodka"){
          outStream.open("vodka.txt", ios::app);
          outStream << "\nName: " << nameOfAlcohol << endl
                    <<"Total Bottles: "<< numberBottles << endl
                    <<"Price: $"<< priceOfBottle << endl
                    <<"Total Value: $"<< nameValue << endl;
          outStream.close();
        }

      else if (typeOfAlcohol == "whiskey"){
          outStream.open("whiskey.txt", ios::app);
          outStream << "\nName: " << nameOfAlcohol << endl
                    << "Total Bottles: "<< numberBottles << endl
                    << "Price: $"<< priceOfBottle << endl
                    << "Total Value: $"<< nameValue << endl;
          outStream.close();
      }

      else if (typeOfAlcohol == "rum"){
          outStream.open("rum.txt", ios::app);
          outStream << "\nName: " << nameOfAlcohol << endl
                    << "Total Bottles: "<< numberBottles << endl
                    << "Price: $"<< priceOfBottle << endl
                    << "Total Value: $"<< nameValue << endl;
          outStream.close();
      }

      else if (typeOfAlcohol == "tequila"){
          outStream.open("tequila.txt, ios::app");
          outStream << "\nName: " << nameOfAlcohol << endl
                    << "Total Bottles: "<< numberBottles << endl
                    << "Price: $"<< priceOfBottle << endl
                    << "Total Value: $"<< nameValue << endl;
          outStream.close();
      }

      else if (typeOfAlcohol == "beer"){
          outStream.open("beer.txt", ios::app);
          outStream << "\nName: " << nameOfAlcohol << endl
                    << "Total Bottles: "<< numberBottles << endl
                    << "Price $"<< priceOfBottle << endl
                    << "Total Value: $"<< nameValue << endl;
          outStream.close();
      }

      else if (typeOfAlcohol == "gin"){
          outStream.open("gin.txt", ios::app);
          outStream << "\nName: " << nameOfAlcohol << endl
                    << "Total Units: "<< numberBottles << endl
                    << "Price $"<< priceOfBottle << endl
                    << "Total Value: $"<< nameValue << endl;
          outStream.close();
      }

    else if (typeOfAlcohol == "wine"){
        outStream.open("wine.txt", ios::app);
        outStream << "\nName: " << nameOfAlcohol << endl
                  << "Total Units: "<< numberBottles << endl
                  << "Price $"<< priceOfBottle << endl
                  << "Total Value: $"<< nameValue << endl;
        outStream.close();
    }

    else if (typeOfAlcohol == "other"){
        outStream.open("other.txt", ios::app);
        outStream << "\nName: " << nameOfAlcohol << endl
                  << "Total Units: "<< numberBottles << endl
                  << "Price $"<< priceOfBottle << endl
                  << "Total Value: $"<< nameValue << endl;
        outStream.close();
  }

/* Keeps track of entire stocks value */
    totalValue = nameValue + totalValue;

    cout << "Continue input? y/n ";
    cin >> choice;

} while ( choice == "y" || choice == "Y");

/* Writes out total stock value to its own text file */
  outStream.open("totalValue.txt");
  outStream << "\nTotal value of all inventory: $"<< totalValue;
  outStream.close();

  return 0;

}
