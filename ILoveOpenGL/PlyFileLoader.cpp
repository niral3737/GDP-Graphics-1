#include <string>
#include <fstream>
#include <iostream>
//this is how each vertex look like
struct sPlyVertext
{
	float x;
	float y;
	float z;
};

// face(triangle) Eg. 3 2017 2932 273
struct sPlyTriangle
{
	int vertex_index_1;
	int vertex_index_2;
	int vertex_index_3;
};


bool LoadPlyFile(std::string fileName)
{
	//Open the file
	std::ifstream theFile(fileName.c_str());

	if (!theFile.is_open())
	{
		std::cout << "Did't open file" << std::endl;
		return false;
	}
	std::cout << "Opend..." << std::endl;

	//Create a vertex array to store the data

	//Read the vertex data into the array

	return true;
}
