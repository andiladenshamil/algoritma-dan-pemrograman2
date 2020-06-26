#include <iostream>
#include <fstream>
using namespace std;

//Membuat File
int main()
{
    ofstream mhsFile;

    mhsFile.open("datamhs.txt");
    mhsFile << "ANDI LADEN SHAMIL\n\n";
    mhsFile << "A3\n\n";
    mhsFile << "13020190153\n\n";

    mhsFile.close();
    

}
