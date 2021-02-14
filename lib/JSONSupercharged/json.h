//
// Created by seymo on 2/3/2021.
//

#ifndef JSONSUPERCHARGED_JSON_H
#define JSONSUPERCHARGED_JSON_H
#include <iostream>
#include <json.hpp>
#include <fstream>
#include <cstdio>
#include <vector>

#define func void
#define autojson auto
#define stringf_s std::string
#define json_string json
#define Vector std::vector

namespace json_super {
	
	func Create(const stringf_s& filename) {
	
	}
	func ParseFile(const stringf_s& file, Vector<stringf_s> &v) {
	
	}
}
using namespace nlohmann;
class js {
public:
	
	json getspecifictype(const stringf_s& file, const stringf_s& component) {
		std::ifstream ifile(file);
		
		
		json x = json::parse(ifile);
		
		json alloc = x[component];
		
		return alloc;
	}
};
#endif //JSONSUPERCHARGED_JSON_H
