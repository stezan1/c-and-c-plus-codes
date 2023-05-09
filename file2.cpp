#include <iostream>
#include <fstream>
 
using namespace std;

int main()
{
    ofstream fout;
    string fname,lname,fullname;
    
//firstname
    
    fout.open("First_Name.txt");
    cout<<"enter first names :";
    while (fout)
    {
        getline(cin, fname);
        if (fname == "-1")
            break;
        fout << fname << endl;
    }
    fout.close(); 
 
    ifstream fin; 
    fin.open("First_Name.txt");
    while (fin) 
	{
        getline(fin, fname);
        cout << fname << endl;
    }
    fin.close();
 
 
 
 
 
 
 
 
 
 
 
//last name
 
 
 
 
    fout.open("Last_Name.txt");
    cout<<"enter last names :";
    while (fout) 
	{
        getline(cin, lname);
        if (lname == "-1")
            break;
        fout << lname << endl;
    }
    fout.close();
    fin.open("Last_Name.txt");
    while (fin) 
	{
        getline(fin, lname);
        cout << lname << endl;
    }
    fin.close();
 
 
 
 
 
 
//full name
 
    fout.open("Full_Name.txt");
    cout<<"full name are :";
    
//write First name into full_name.txt file
    fin.open("First_Name.txt");
    while (fin) 
	{
 
        getline(fin, fname);
        fout << fname << endl;
    }
    fin.close();

//write last name into full_name.txt file
    fin.open("Last_Name.txt");
    while (fin) 
	{
        getline(fin, lname);
        fout << lname << endl;
    }
    fin.close();
 

//display first name and last name in full_name.txt file
    fin.open("Full_Name.txt");
    while (fin) 
	{
        getline(fin, fullname);
        cout <<fullname<< endl;
    }
    fin.close();
    
    return 0;
}
