// writing on atext file
#include <iostream>
#include <fstream>
 using namesapce std ;

 int main(){

    ofstream myfile("example.txt");

    if (myfile.is_open())




    {
        myfile << "this is a line.\n";
        myfile << "this is another line .\n"
    }
     else
        {
           cout <<  "Unable to open file ";

        }
        return 0;
    }
