/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeannecolmou <jeannecolmou@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:10:19 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/11 11:24:03 by jeannecolmo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	size_t pos;
	std::ifstream file_name(argv[1]);
	std::ofstream outfile;
	std::string line;
	pos = 0;

	if (argc > 4)
		std::cout << "Error : too many arguments" << std::endl;
	else if (argc < 4)
		std::cout << "Error : missing arguments" << std::endl;
	if (file_name.fail())
	{
		std::cout << "Error opening the file" << std::endl;
	}
	else
	{
		outfile.open(argv[1] + (std::string)".new");
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
