#include "ex04.h"

bool	check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "wrong amount of arguments" << std::endl;
		return (false);
	}
	std::string file = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (file.size() < 4 || file.substr(file.size() - 4) != ".txt")
	{
		std::cout << "wrong file type" << std::endl;
		return (false);
	}
	if (s1.empty() || s2.empty())
	{
		std::cout << "wrong arguments" << std::endl;
		return (false);
	}
	return (true);
}

bool	read_file(std::string filename, std::string &content)
{
	std::ifstream fileR(filename);
	if (!fileR.is_open())
	{
		std::cout << "file didnt open" << std::endl;
		return (false);
	}
	std::stringstream buffer;
	buffer << fileR.rdbuf();
	content = buffer.str();
	fileR.close();
	return (true);
}

void	replace_content(std::string &content, std::string s1, std::string s2)
{
	size_t i = 0;
	std::string res;
	size_t pos = content.find(s1);

	while (pos != std::string::npos)
	{
		res.append(content.substr(i, pos - i));
		res.append(s2);
		i = pos + s1.length();
		pos = content.find(s1, i);
	}
	res.append(content.substr(i));
	content = res;
}

bool	write_file(std::string content, std::string filename)
{
	std::fstream fileW;
	fileW.open(filename.append(".replace"), std::ios::out | std::ios::trunc);
	if (!fileW.is_open())
	{
		std::cout << "file creation failed" << std::endl;
		return (false);
	}
	fileW << content;
	fileW.close();
	return (true);
}

int main(int argc, char **argv)
{
	std::string	content;

	if (!check_args(argc, argv))
		return (1);
	if (!read_file(argv[1], content))
		return (1);
	replace_content(content, argv[2], argv[3]);
	if (!write_file(content, argv[1]))
		return (1);
	return (0);
}