#include<iostream>
#include<string>
using namespace std;

//-------------------------------------------------------
// CS421 HW1 
// Write a recognizer in C++ for L = {x | x is a binary number}.
// Your name: Luis Mendiola
//-------------------------------------------------------

//  The recognizer function should return TRUE or FALSE 
//  checking each character
//  to make sure it is 0 or 1. (leading 0's are allowed).
bool recognizer(string s)
{ 
  for(int i = 0; i < s.length(); i++)// iterate through the string of numbers
    {
      if(s[i] != '0' && s[i] != '1')//if the current number is not a 0 or 1
	return false;
    }// end of for loop
  return true;
}// end of recognizer

//main: Given a string (from E) cined from the user, pass it to
//      the recognizer function.
//      Cout "YES IN L" or "NO NOT IN L" depending on what was returned.
int main()
{
  string str;
  string ans;
  
  do{//ask user for a number
    cout << "\nPlease enter a string of numbers to recognize whether or not it is a binary number: " << endl;
    getline(cin, str);

    cout << "\nThe number entered: " << str << endl;
    cout << "\nThe length of " << str << " is: " << str.length() <<endl;

    // if the string is a binary number
    if(recognizer(str) == true)
      cout << "\nYES IN L" << endl;
    else// not a binary number
      cout << "\nNOT IN L" << endl;
    
    //ask user to continue or exit program
    cout << "\nWould you like to continue testing numbers?" << endl;
    cout << "\nEnter \"y\" or \"Y\" to continue. \nOtherwise enter anything to exit. " << endl;
    getline(cin, ans);

  }while(ans == "y" || ans == "Y");// end of do while 
  // feel free to put it in a loop 
  cout << "\nGOOD BYE!" << endl;
  return 0;  
}// end of main
