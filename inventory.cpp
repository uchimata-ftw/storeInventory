#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    string choice = "N";
    string typeOfAlcohol, nameOfAlcohol;
    float priceOfBottle, nameValue, numberBottles, totalValue;
    ifstream inStream;
    ofstream outStream;


do {
    cout << "What type of alcohol are you counting? ";
    cin >> typeOfAlcohol;
    cout << "\nWhat is it's name? ";
    cin >> nameOfAlcohol;
    cout << "\nWhat is its price? ";
    cin >> priceOfBottle;
    cout << "\nHow many bottles do you have? ";
    cin >> numberBottles;

    nameValue = priceOfBottle * numberBottles;


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
      else if (typeOfAlcohol == "other"){
          outStream.open("other.txt", ios::app);
          outStream << "\nName: " << nameOfAlcohol << endl
                    << "Total Units: "<< numberBottles << endl
                    << "Price $"<< priceOfBottle << endl
                    << "Total Value: $"<< nameValue << endl;
          outStream.close();
    }
    totalValue = nameValue + totalValue;
    cout << "Continue input? y/n ";
    cin >> choice;

} while ( choice == "y" || choice == "Y");

  outStream.open("totalValue.txt");
  outStream << "\nTotal value of all inventory: $"<< totalValue;
  outStream.close();
  return 0;

}
