#include <iostream>
#include <rapidxml.hpp>
#include <rapidxml_utils.hpp>
#include <JSONSupercharged/json.h>
#include <Colorama/clr/sys.h>
#include "xml/xml.h"

int main ( ) {
	
	xml_config_device test{};
	
	test.rootfile="test.reconfig_data";
	
	stringf_s firstnode = test.getfirstnodename();
	stringf_s secondnode = test.getsecondnodename();
	nodex l = test.getfirstnode();
	stringf_s content = l->first_node()->first_node()->value();
	print(content);
}
