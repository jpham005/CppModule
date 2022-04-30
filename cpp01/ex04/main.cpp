/**
 * @file main.cpp
 * @author jaham (jaham@student.42seoul.kr)
 * @brief 
 * @version 0.1
 * @date 2022-04-30
 * 
 * Copyright (c) jaham. All rights reserved
 * 
 */

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char **argv) {
  if (argc != 4)
    return (1);

  std::ifstream input;
  input.open(argv[1], std::ifstream::in);

  std::stringstream buffer;
  buffer << input.rdbuf();
  input.close();

  std::string str;
  str = buffer.str();

  std::string s1 = argv[2];
  std::string s2 = argv[3];

  std::size_t search = 0;
  while (1) {
    search = str.find(s1, search);
    if (search == std::string::npos)
      break;
    else {
      str.erase(search, s1.length());
      str.insert(search, s2);
    }
  }

  std::string outfile = argv[1];
  outfile.append(".replace");

  std::ofstream output;
  output.open(outfile, std::ofstream::out | std::ofstream::trunc);

  output << str;

  return (0);
}
