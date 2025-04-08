/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:34:50 by jpancorb          #+#    #+#             */
/*   Updated: 2025/04/08 23:38:37 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
	{
		std::cout << "Error: s1 cannot be empty." << std::endl;
		return 1;
	}

	// Open input file
	std::ifstream inputFile(filename.c_str());	// c_str: Converts std::string to const char* //
	if (!inputFile)								// necessary for std::ifstream/std::ofstream //
	{
		std::cout << "Error: Cannot open file " << filename << std::endl;
		return 1;
	}

	// Read file content
	std::stringstream buffer;
	buffer << inputFile.rdbuf();			// rdbuf: Extracts the whole file content and stores in buffer //
	std::string content = buffer.str();		// converts "buffer" content to std::string //
	inputFile.close();

	// Replace occurrences of s1 with s2
	std::string newContent;
	size_t pos = 0;
	size_t found = content.find(s1, pos);	// find: Search the first occurrence of "s1" from "pos" position
	while (found != std::string::npos)
	{
		// Append the part before s1
		newContent.append(content, pos, found - pos);	// Append in newC. from "content"
		// Append s2 instead of s1						// Starts in "pos" and ends in the first "s1"
		newContent.append(s2);
		// Update position and find next occurrence
		pos = found + s1.length();
		found = content.find(s1, pos);
	}
	// Append remaining content
	newContent.append(content, pos, std::string::npos);

	// Create output file
	std::string outFilename = filename + ".replace";
	std::ofstream outputFile(outFilename.c_str());
	if (!outputFile)
	{
		std::cout << "Error: Cannot create file " << outFilename << std::endl;
		return 1;
	}

	outputFile << newContent;
	outputFile.close();

	return 0;
}
