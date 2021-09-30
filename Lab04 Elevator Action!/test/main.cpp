#include <iostream>
#include <fstream>

int main()
{
	std::string input;
	std::string filename;
	std::fstream inFile;

	std::cout << "input filename: ";
	std::cin >> filename;

	inFile.open(filename);

	for(int i = 0; i<6; i++)
	{
		inFile >> input;
		std::cout << input;
		if(input == "")
		{
			std::cout << "empty";
		}
	}
	
	inFile.close();


}
