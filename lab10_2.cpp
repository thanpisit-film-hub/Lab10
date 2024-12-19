#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	dest << "-------------------- BOOM ---------------------" << "\n";
	string _Copy; 
	while(getline(source, _Copy)){
		dest << _Copy << "\n";
	}
	dest << "-------------------- HA!! ---------------------";


    source.close();
    dest.close();
	return 0;
}
