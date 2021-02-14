//
// Created by seymo on 2/2/2021.
//

#ifndef LASTMULTICONFIGLIBRARY_BLOCK_H
#define LASTMULTICONFIGLIBRARY_BLOCK_H
#define String std::string
#define rfile std::ifstream
#define coin(foo, name) std::string name(foo)

#include <string>
#include <windows.h>
#define CLASSREQUEST ':'
#define PROMP1 ">"
#define PAR_IN '('
#define PAR_CLOSE ')'
#define cdir(str) CreateDirectory(str, nullptr)
#include <iostream>
typedef size_t ReSize_t;
#define re_size_f size_t
#define resize unsigned int
#define ReConfigString_ptr std::string
#include <fstream>
#define open(file, name) rfile name(file)
#define _strcat(str) str.c_str()
#define get_class_instances(classname, func, file) std::getline ( file  , func , classname );
#define print( x ) std::cout << x << std::endl;

class reconfig_device {
public:
	String name;
	String display;
	float cost;
	
	void GetModuleImport ( String file ) {
		rfile id ( file );
		
		String DWORs;
		id >> DWORs;
		String module;
		id >> module;
		if ( DWORs == "import" ) {
			if ( module == name ) {
				std::ofstream ifile ( ".reconfigcache" );
				ifile << "f o u n d m o d u l e\n\nC : \\ u s e r s \\ H K E Y _ A P P D A T A \\ A PP R O O T" << std::endl;
				ifile.close();
				CreateDirectory("reconfig_extenders", nullptr);
				cdir("reconfig_extenders\\reconfig_modules");
				cdir("reconfig_cache");
				cdir(("reconfig_extenders\\reconfig_modules\\" + name).c_str());
			}
			else
				print( "Requesed Module Could not be Found. (Modules::ModuleError In System file BLOCK.h).\n(" + name
				       + ")" );
		}
		
	}
};

class reconfig_ini {
public:
	int x () { return 0; }
};
#endif //LASTMULTICONFIGLIBRARY_BLOCK_H
