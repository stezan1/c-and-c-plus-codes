
/*Introduction
Let's start
Gear up
Variables and literals
Operators
Decide if/else
Loops
Controlling loop
Function
Inline function
Scope of variables
Pointers
Array
Std::array
Std::vector
String
Std::string
Pre-processor
Structure
OOP
Classes and objects
Destructors
Initialization list
Subclass
Constructor overloading
Array of objects
More about functions
Multiple inheritance
Virtual and abstract
Encapsulation
Friend class and function
File i/o
Templates
Const keyword
Dynamic memory
Enum
Enum class
Union
typedef
Storage classes
File i/o in C++
When a program runs, the data is in the memory but when it ends or the computer shuts down, it gets lost. To keep data permanently, we need to write it in a file.

File is used to store data. In this topic, you will learn about reading data from a file and writing data to the file.

fstream is another C++ standard library like iostream and is used to read and write on files.

These are the data types used for file handling from the fstream library:

Data type	Description
ofstream	It is used to create files and write on files.
ifstream	It is used to read from files.
fstream	It can perform the function of both ofstream and ifstream which means it can create files, write on files, and read from files.
Opening a file
We need to tell the computer the purpose of opening our file. For e.g.- to write on the file, to read from the file, etc. These are the different modes in which we can open a file.

Mode	Description
ios::app	opens a text file for appending. (appending means to add text at the end).
ios::ate	opens a file for output and move the read/write control to the end of the file.
ios::in	opens a text file for reading.
ios::out	opens a text file for writing.
ios::trunc	truncates the content before opening a file, if file exists.
Let's look at the syntax of opening a file.

#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream file;
  file.open ("example.txt");
  return 0;
}
We have opened the file 'example.txt' to write on it. 'example.txt' file must be created in your working directory. We can also open the file for both reading and writing purposes. Let's see how to do this:

#include <iostream>
#include <fstream>

using namespace std;

int main(){
  fstream file;
  file.open ("example.txt", ios::out | ios::in );
  return 0;
}
Closing a file
C++ automatically close and release all the allocated memory. But a programmer should always close all the opened files. Let's see how to close it.

#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream file;
  file.open ("example.txt");
  file.close();
  return 0;
}
Reading and writing on a file
We use << and >> to write and read from a file respectively. Let's see an example.*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){

  char text[200];

  fstream file;
  file.open ("example.txt", ios::out | ios::in );

  cout << "Write text to be written on file." << endl;
  cin.getline(text, sizeof(text));

  // Writing on file
  file << text << endl;

  // Reding from file
  file >> text;
  cout << text << endl;

  //closing the file
  file.close();
  return 0;
}
