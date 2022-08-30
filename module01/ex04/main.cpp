#include <iostream>
#include <fstream>

std::string	ft_sed(std::string buffer, std::string s1, std::string s2)
{
	std::string	result;
	size_t		pos;
	size_t		s1_len;

	if (s1.empty() || s2.empty())
		return (buffer);
	pos = buffer.find(s1);
    // npos jusqu a la fin de la chaine
	if (pos != std::string::npos)
	{
		s1_len = s1.length();
		while (pos != std::string::npos)
		{
			result += buffer.substr(0, pos);
			result += s2;
            // erase  efface le caractere
			buffer.erase(0, pos + s1_len);
			pos = buffer.find(s1);
			if (pos == std::string::npos)
				result += buffer;
		}
	}
	else
		result = buffer;
	return (result);
}

int main(int argc, char **argv)
{
    std::ifstream filename;
    std::string new_filename;
    std::string buffer;
    size_t i = 0;

    if (argc != 4)
    {
        std::cout << "error arguments" << std::endl;
        exit (0);
    }
    filename.open(argv[1]);
    if (filename == 0)
    {
        std::cout << "error filename" << std::endl;
        exit (0);
    }
    new_filename = argv[1];
    new_filename += ".remplace";
    std::ofstream ofs;

	ofs.open(new_filename);
	if (!ofs)
    {
		std::cout << "error file" << std::endl;
        exit (0);
    }
	std::cout << "File created successfully." << std::endl;
	ofs.close();

    ofs.open(new_filename);
	while (std::getline(filename, buffer))
		i++;
	filename.close();
	filename.open(argv[1]);

	while (std::getline(filename, buffer))
	{
		buffer = ft_sed(buffer, argv[2], argv[3]);
		ofs << buffer;
		if (!filename.eof())
			 ofs << std::endl;
	}
	filename.close();
	ofs.close();
    return (0);
}