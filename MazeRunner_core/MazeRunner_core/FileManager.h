#pragma once
#include <fstream>
#include <vector>
#include <pugixml.hpp>

class FileManager
{
public:
	static std::vector<std::string> ReadAllLinesFromFile(const std::string& path);
	static void WriteToFile(const std::string& path, std::vector<std::string> data);
	static void WriteXmlToFile(const char* path);

private:
	static std::ofstream outputStream;
	static std::ifstream inputStream;
};
