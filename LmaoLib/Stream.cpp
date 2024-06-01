#include "Stream.h"

namespace Streaming
{
	std::vector<std::string> FileStream::readFile(std::ifstream file)
	{
		std::string line;
		std::vector<std::string> result;
		while (file.is_open())
		{
			if (std::getline(file, line))
			{
				result.push_back(line);
			}
			else file.close();
		}
		return result;
	}

	void FileStream::writeFile(std::string nameFile, std::string line)
	{
		std::ofstream file;
		file.open(nameFile);
		if (file.is_open())
		{
			file << line << std::endl;
		}
		file.close();
	}

	void FileStream::writeFile(std::string nameFile, std::vector<std::string> line)
	{
		std::ofstream file;
		file.open(nameFile);
		if (file.is_open())
		{
			for (int i = 0; i < line.size(); i++)
			{
				file << line.at(i) << std::endl;
			}
		}
		file.close();
	}
}
