#include <string>
#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;
int number_of_files = 16;

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
	cout << "Enter 's' to select random recipe or enter 'n' to make a new one:";
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
