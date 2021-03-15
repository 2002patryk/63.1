#include <iostream>
#include <fstream>
using namespace std;

void sprawdz()
{
	string s;
	ifstream plik;
	
	plik.open("C:\\ciagi.txt");
	
	while (!plik.eof())
	{
        plik>>s; 
		 
        string s1,s2;
 		 s1=(s.substr(0, s.length()/2));
 		 s2=(s.substr(s.length()/2, s.length()/2));
 		 
 		 
		if(s1==s2)
		{
			cout<<"Dwucykliczny \n";
		}
	  
    }
    plik.close();
    

   

	
}

int main()
{
	sprawdz();
	return 0;
}
