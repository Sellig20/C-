/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:10:19 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/09 18:15:19 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	(void)argv;
	std::ifstream file_name(argv[1]);
	std::string line;

	if (argc > 4)
		std::cout << "Error : too many arguments" << std::endl;
	else if (argc < 4)
		std::cout << "Error : missing arguments" << std::endl;
	// if (file_name)
	// {
		//std::cout << "KKKKKKK" << std::endl;
	while (getline(file_name, line))
	{
		if (line.find(argv[2]) != std::string::npos)
			std::cout << "occurrence was found " << std::endl;
	}
	//}
}
