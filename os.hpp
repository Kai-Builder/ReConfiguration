//
// Created by seymo on 2/2/2021.
//

#include "packages/os.h"
#define PAR_IN '('
#define get_class_instances()
#define open(corn, filename) std::ifstream corn(filename)
#define FCompile file_
#define coin(x, s) std::string s = x
void CallOnCommunication ( const std::string & argvs ) {
	coin( argvs , file_ );
	/* Implement OS Modularization */
	open( mainfile, file_ );
	std::string sysfunc;
	std::string classf;
	getline(mainfile, classf, '(');
	getline(mainfile, sysfunc, ')');
	if ( classf == "os:system" ) {
		system ( sysfunc.c_str ( ) );
	}
	
	else {
		// Do Nothing.
	}
}