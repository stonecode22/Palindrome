//By Stone Yang (p6)
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
  char lone[81];
  char ltwo[81];
  int i, j, k, l;
  bool test = true;
  cout << "Palindrome Checker 2.0" << endl;
  cout << "Enter a word/phrase: ";
  cin.get(lone, 81);

  for(k = 0, l = 0; k <= strlen(lone); k++) //formats letters to lowercase and removes spaces & punct.
    {
      if(lone[k] != ' ' && (ispunct(lone[k]) == false))
	{
	  ltwo[l] = tolower(lone[k]);
	  l++;
	}
    }

  int length = strlen(ltwo); //gets length of ltwo array

  for(i = 0, j = length-1; i < j; i++, j--) //checks if it's a palindrome or not
    {
      if(test)
	{
	  if(ltwo[i] != ltwo[j])
	    test = false;
	}
      break;
    }

  if(test)
    {
      cout << endl << "That's a palindrome, all right." << endl; //test successful
    }
  else
    {
      cout << endl << "Definitely not a palindrome." << endl; //test failed
    }
  return 0;
}
