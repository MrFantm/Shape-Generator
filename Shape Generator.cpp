#include<iostream>

using namespace std;

int main() {
   //Declare variables
   char charType;
   int shape, charTypeIndicator, height, width, again = 0;
   string charLine;
   
   do {
      cout << "Please enter 1 for square, 2 for rectangle, or 3 to quit.\n";
      cin >> shape;
      
      //Take user input. If the user's input != 3, it will get the width and height. 
      if(shape != 3) {
      
         //Get specified shape
         if(shape == 1) {
            cout << "Please enter the desired side length.\n";
            cin >> height;
            width = height;
         }
         else {
            cout << "Please enter the height.\n";
            cin >> height;
            cout << "Please enter the width.\n";
            cin >> width;
         }
         
         
         //Get character type
         cout << "Enter a number corresponding with the desired character type: (1)'*', (2)'-', (3)'o' \n";
         cin >> charTypeIndicator;
         
         if(charTypeIndicator == 1) {
            charType = '*';
         }
         else if(charTypeIndicator == 2) {
            charType = '-';
         }
         else {
            charType = 'o';
         }

         
         //Set width of shape
         for(int i = 0; i < width; i++) {
            charLine = charLine + " " + charType;
         }
         
         cout << endl;
         //Display the shape
         for(int i = 1; i <= height; i++) {
            cout << charLine << endl;
         }
         cout << endl;
         
         charLine = "";
      }
      else { //Exits the program
         again = 1;
      }
   } while(again == 0);
   
   return 0;
}
