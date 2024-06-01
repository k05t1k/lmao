#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

namespace Streaming
{
	class FileStream
	{
	public:
		static std::vector<std::string> readFile(std::ifstream file);
		static void writeFile(std::string nameFile, std::string line);
		static void writeFile(std::string nameFile, std::vector<std::string> line);
	};
}