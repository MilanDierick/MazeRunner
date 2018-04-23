#include "FileManager.h"
#include <string>
#include <iostream>

std::vector<std::string> FileManager::ReadAllLinesFromFile(const std::string& path)
{
	inputStream.open(path, std::ios::in);

	if (inputStream.is_open())
	{
		std::vector<std::string> returnValues;
		std::string line;

		while (std::getline(inputStream, line))
			returnValues.push_back(line);

		inputStream.close();
		return returnValues;
	}

	throw;
}

void FileManager::WriteToFile(const std::string &path, std::vector<std::string> data)
{
	outputStream.open(path, std::ios::out);

	if (outputStream.is_open())
		for (const auto &value : data)
			outputStream << value << std::endl;
	else
		throw;
}

void FileManager::WriteXmlToFile(const char* path)
{
	pugi::xml_document doc;
	auto node = doc.append_child("someNode");
	auto attribute = node.append_attribute("someAttribute");
	auto value = attribute.set_value("someValue");

	if (doc.save_file(path))
		std::cout << "XML succesfully saved!" << std::endl;
}

std::ifstream FileManager::inputStream;
std::ofstream FileManager::outputStream;
