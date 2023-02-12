/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:21:36 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/12 16:48:41 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::string stri = argv[1];
	stri.append(".replace");
	std::ofstream outfile;
	outfile.open(stri.c_str());
	std::ifstream file_name(argv[1]);
	size_t pos;
	std::string line;
	pos = 0;

	if (argc > 4)
		std::cout << "Error : too many arguments" << std::endl;
	else if (argc < 4)
		std::cout << "Error : missing arguments" << std::endl;
	else if (!argv[2])
		std::cout << "Error : empty argument";
	if (file_name.fail())
	{
		std::cout << "Error opening the file" << std::endl;
	}
	else
	{
		while (getline(file_name, line))
		{
			pos = line.find(argv[2]);
			if (pos != std::string::npos)
			{
				line.erase(pos, ((std::string)argv[2]).size());
				line.insert(pos, ((std::string)argv[3]));
			}
			outfile << line;
			outfile << std::endl;
		}
		outfile.close();
		file_name.close();
		return (0);
	}
}
