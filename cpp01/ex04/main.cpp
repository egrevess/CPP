/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmagrevesse <emmagrevesse@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:57:43 by emmagrevess       #+#    #+#             */
/*   Updated: 2023/11/23 11:40:55 by emmagrevess      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

std::string ft_replace(size_t pos, std::string line, std::string s1, std::string s2)
{
	std::string temp;

	temp = line.substr(0, pos);
	temp.append(s2);
	temp.append(line.substr(pos + s1.length(), line.length()));
	return (temp);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string file_name = av[1];
		std::string	s1 = av[2];
		std::string s2 = av[3];
		std::ifstream file(file_name);
		std::ofstream new_file(file_name + ".replace"); // Ouverture du fichier en mode lecture-écriture
   	 	if (!file.is_open() || !new_file.is_open()) 
		{
        	std::cerr << "Failed to open file!" << std::endl;
        	return 1;
    	}
		std::string line;
    	while (std::getline(file, line)) 
		{
			size_t pos = line.find(s1);
			while (pos != std::string::npos)
			{
				line = ft_replace(pos, line, s1, s2);
				pos = line.find(s1);
			}
			new_file << line << std::endl;
		}
		file.close();
   		new_file.close();
	}
	return (0);
}