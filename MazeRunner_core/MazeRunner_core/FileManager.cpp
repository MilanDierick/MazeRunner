#include "FileManager.h"
#include <string>

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
		throw; // TODO: remove this hack, this class shouldn't throw when it is not indicated to throw.
}