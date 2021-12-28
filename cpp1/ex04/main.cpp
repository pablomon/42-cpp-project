/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:22:56 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/28 18:42:42 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
#include <sys/stat.h>

std::string replace(std::string text, std::string s1, std::string s2)
{
	std::string newText;
	std::size_t pos = 0;
	std::size_t lastpos = 0;
	while (pos <= text.length())
	{
		lastpos = pos;
		pos = text.find(s1, lastpos);
		std::string substr = text.substr(lastpos, pos - lastpos);
		newText.append(substr);
		if (pos < 0 || pos > text.length())
			break;
		newText.append(s2);
		pos += s1.length();
	}

	return newText;
}

int main(int argc, char const *argv[])
{	
	if (argc != 4)
	{
		std::cout << "Wrong arguments" << std::endl;
		return 0;
	}
	const std::string filename = argv[1];
	std::string s1, s2;
	s1 = argv[2];
	s2 = argv[3];

	// Check if the file is a directory:
	struct stat stat;
	lstat( filename.c_str(), &stat );
	if ( S_ISDIR(stat.st_mode) ) 
	{
		std::cout << "Found directory, exiting" << std::endl;
		return 0;
	}

	if ( filename.empty() || s1.empty() || s2.empty() )
	{
		std::cout << "Empty argument, exiting" << std::endl;
		return 0;
	}

	// READ FILE TO STRING
	std::string text;
	std::ifstream ifs;
	ifs.open(filename.c_str());
	if (!ifs || !ifs.good())
	{
		std::cout << "Error opening " << filename << std::endl;
		return 1;
	}
	std::getline(ifs, text, '\0');
	
	// REPLACE
	std::string newText = replace(text, s1, s2);

	// WRITE TO FILE
	std::ofstream ofs;
	std::string newfilename = filename + ".replace";
	ofs.open(newfilename.c_str());
	if (!ofs)
	{
		std::cout << "Error writing to file " << newfilename << std::endl;
		return 1;
	}
	ofs << newText;
	ofs.close();

	return 0;
}
