// Personal Web Page Generator
#include<iostream>
using namespace std;
#include<fstream>
#include<string>

int main()
{


ofstream ofs;
string name, description;

ofs.open("Webpage.html");

cout << "Enter your name: ";
getline(cin,name);

cout << "Describe yourself: ";
getline(cin,description);

ofs << "<html>" << endl;
ofs << "<head>" << endl;
ofs << "</head>" << endl;
ofs << "<body>" << endl;
ofs << "\t<center>" << endl;
ofs << "\t\t<h1>" << name << "</h1>" << endl;
ofs << "\t</center>" << endl;
ofs << "\t<hr />" << endl;
ofs << "\t" << description << endl;
ofs << "\t<hr />" << endl;
ofs << "</body>" << endl;
ofs << "</html>" << endl;

ofs.close();

return 0;

}
