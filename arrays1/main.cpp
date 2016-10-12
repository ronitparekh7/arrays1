#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	string data_array[100][100]; //You can make it dynamic to handle as much as the file has
	ifstream in_file("d:\\output.txt", ios::binary);
	//Check if the file is open
	if (!in_file.is_open()){
		cout << "File not opened..." << endl;
		return 1;
	}
	//read the file (two columns) to the array
	for (int i = 0; !in_file.eof(); i++){
		in_file >> data_array[i][0];
		in_file >> data_array[i][1];
	}

	//Display the array
	for (int i = 0; i<3; i++){
		cout << data_array[i][0] << ", " << data_array[i][1] << '\n';
	}
	system("PAUSE");
	return 0;
	

}