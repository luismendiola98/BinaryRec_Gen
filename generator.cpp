#include<iostream>
#include<string>
using namespace std;
#include<queue> // include queue.h or equivalent such as <queue>

//----------------------------------------------
// CS421 HW1 
// Write a generator in C++ for L = {x | x is a binary number}.
// Your name: Luis Mendiola
//----------------------------------------------

// Copy the recognizer function here from the other file.
bool recognizer(string s)
{
  cout << "\nChecking " << s << "..." << endl;
  for(int i = 0; i < s.length(); i++)
    {
      if(s[i] != '0' && s[i] != '1')// if the current number is not 0 or 1
	return false;
    }// end of for loop
  return true;
}// end of recognizer

// main: It should create each string over E = {0,1,2} systematically
//   (short to long) and pass each string to the recognizer function
//   created in Part a).  Hint: use a queue to generate strings
//   Only those strings for which the recognizer returned TRUE
//   should be displayed. 
//   Keeps on going until the queue overflows but the user can 
//   terminate the program with control-C 
//   after about 20 strings have been displayed.
int main()
{
  queue<string> q;
  int i;

  q.push("0");
  q.push("1");
  q.push("2");

  cout << "\nHow many numbers would you like to check? \nEnter number here: ";
  cin >> i;
  
  while(i--)
    {
      // generate a string
      
      string s = q.front();      

      // if the recognizer says true, display the string 
      if(recognizer(s))
	{
	  q.pop();
	  cout << s << " in L." << endl;
	}
      else// otherwise remove it
	q.pop();

      q.push(s + "0");
      q.push(s + "1");
      q.push(s + "2");

    }// end of while

  return 0;
}// end of main
