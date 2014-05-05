/*#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile ("recipe2.txt");
  if (myfile.is_open())
  {
    myfile << "second" << endl;
    myfile.close();
  }
  else cout << "Unable to open file";
  system("pause");
  return 0;
}*/
/*
#include <iostream>
#include <fstream>
#include <string> //needed this
#include <time.h> //and thisaaaaaaa
using namespace std;

int main()
{

	fstream externalFile;
	string fileName;
	int choice;

	choice = (rand() % 2)+1;	// 1 - 2

	switch (choice)
	{
		case	1:
			fileName = "recipe2.txt";
		break;
		case	2:
			fileName = "recipe1.txt";
		break;
	}
	string line;
	externalFile.open(fileName, fstream::in);
	if (externalFile.is_open())
	{
		while (getline(externalFile,line)){
			cout << line << '\n';
			externalFile.close();}
	}
	else
		cout << "We have a problem opening the file.";
	system("pause");
	return 0;
}
*/

#include <string>
#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;
int number_of_files = 0;

void new_recipe() {
	int x = number_of_files + 1; //still need to be able to count files
	ofstream myfile ("recipe17.txt");
    string str;
	cout << "Write your Recipe here." << endl;
	cout << "Enter key when done. We'll fix this later" << endl;
	//cin >> str;
	cin.ignore();
    getline( std::cin, str );
	cout << "You entered: '" << str << "'" << endl;

	if (myfile.is_open())
  {
    myfile << str << "\n";
    myfile.close();
  }
}

int main(){
	cout << "Enter 's' to select random recipe:";
	char start;
	cin >> start;
	if(start == 's'){
		srand(time(NULL));
		string line;
		int k;
		int number_of_files = 4;//this will not stay at 4
		//find a way to count the files available
		//or just have it keep guessing until it gets a hit
		char filename[16];
		sprintf(filename,"recipe%i.txt",rand()%number_of_files + 1);

		ifstream myfile(filename);
		while (getline(myfile,line)){
			cout << line << '\n';
		}
		
		myfile.close();

	}

	else if (start == 'n'){//for a new recipe
		new_recipe();
	}
	system("pause");
	return 0;
}
