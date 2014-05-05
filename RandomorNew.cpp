#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string> //needed this
#include <time.h> //and this

using namespace std;

int number_of_files = 0;

int main(){
	cout << "Enter 's' to select random recipe:";
	char start;
	cin >> start;
	if(start == 's'){
		srand(time(NULL));
		string line;
		int number_of_files = 4;//this will not stay at 4
		//find a way to count the files available
		//or just have it keep guessing until it gets a hit
		char filename[16];
		sprintf(filename,"recipe%i.txt",rand()%number_of_files + 1);
		// cout<<filename<<endl;

		ifstream myfile(filename);
		while (getline(myfile,line)){
			cout << line << '\n';
		}
		
		myfile.close();

	}

	else if (start == 'n'){//for a new recipe
		new_recipe();
	}
	//system("pause");
	return 0;
}

void new_recipe(){
	int x = number_of_files + 1; //still need to be able to count files
	
	sprintf(filename2,"recipe%i.txt",x)
	
	ofstream myfile (filename2);
	string recipe;
	cout << "Write your Recipe here." << endl;
	cout << "Enter key when done. We'll fix this later" << endl;
	cin >> recipe;
  if (myfile.is_open())
  {
    myfile << recipe;
    myfile.close();
  }
}
