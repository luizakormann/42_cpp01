#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

static std::string	readFile(std::ifstream & file)
{
	std::ostringstream oss;
	oss << file.rdbuf();
	return (oss.str());
}

static std::string	replaceAll(const std::string & content,
		const std::string & s1, const std::string & s2)
{
	std::string	result;
	size_t		pos = 0;
	size_t		found;

	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		result.append(content, pos, found - pos);
		result.append(s2);
		pos = found + s1.length();
	}
	result.append(content, pos, content.length() - pos);
	return (result);
}

int main(int argc, char ** argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0]
					<< " <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	if (s1.empty())
	{
		std::cerr << "Error: s1 must not be an empty string." << std::endl;
		return (1);
	}

	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error: could not open file \""
					<< filename << "\"." << std::endl;
		return (1);
	}

	std::string content = readFile(inputFile);
	inputFile.close();

	if (inputFile.bad())
	{
		std::cerr << "Error: failed while reading \""
					<< filename << "\"." << std::endl;
		return (1);
	}

	std::string newContent = replaceAll(content, s1, s2);

	std::string outputName = filename + ".replace";
	std::ofstream outputFile(outputName.c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Error: could not create file \""
					<< outputName << "\"." << std::endl;
		return (1);
	}

	outputFile << newContent;
	if (outputFile.fail())
	{
		std::cerr << "Error: failed while writing \""
					<< outputName << "\"." << std::endl;
		outputFile.close();
		return (1);
	}

	outputFile.close();
	std::cout << "File \"" << outputName
				<< "\" successfully created." << std::endl;
	return (0);
}
