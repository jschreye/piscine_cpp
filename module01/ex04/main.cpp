#include <iostream>
#include <fstream>

void	ft_replace(std::string *tmp_full_file, std::string s1, std::string s2)
{
	std::size_t pos = tmp_full_file->find(s1);
	while (pos != std::string::npos)
	{
		tmp_full_file->erase(pos, s1.length());
		tmp_full_file->insert(pos, s2);
		pos = tmp_full_file->find(s1);
	}
}

int main(int argc, char **argv)
{
    std::ifstream file;
	std::ofstream new_file;
    std::string buffer;
	std::string tmp_full_file;
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (argc != 4)
	{
		std::cout << "Error arguments" << std::endl;
		return (0);
	}
	file.open (argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	while(getline(file, buffer))
	{
		buffer += "\n";
		tmp_full_file += buffer;
	}
	tmp_full_file.pop_back();
	file.close();
	ft_replace(&tmp_full_file, s1, s2);
	new_file.open("new_file.txt");
	if (!new_file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	new_file << tmp_full_file << std::endl;
	new_file.close();
	return (0);
}