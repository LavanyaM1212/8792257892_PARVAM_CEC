
#include <iostream>

#include <fstream>

using namespace std;

int main () {

string str;

ofstream Myfilel("test.txt");

ifstream Myfile2("test.txt");

if (Myfile1.is_open())

(

Myfile1 << "Appending the file \n";

Myfilel << "with the new line \n';

Myfile1.close();

}

else cout <<"File opening is fail. "<<endl;

if (Myfile2.is_open())

(

while (Betlite (Myfile2, str))

cout << str <<endl;

} Myfile2.close();

}

else

cout <<"File opening if fall."<<endl;

return 0;



