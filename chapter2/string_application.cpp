#include <iostream>
#include <stdio.h>
#include <fstream>  // This library allows txt files.
#include <cstdlib>  // Allows us to use the cerr function.
#include <string>

using namespace std;

int main ()
{
    fstream InputFile;
    string name, id, phone, client_info;

    InputFile.open("agenda_phone.txt");

    if(!InputFile)
    {
        cerr << "Error: file could not be opened" << endl;
        exit(1);
    }

    getline(InputFile, client_info);

    while (!InputFile.eof())
    {
        printf("Client info: %s\n", client_info.c_str());
        getline(InputFile, client_info);
    }
    InputFile.close();
    cout << "All clients were uploaded" << endl;
    
}