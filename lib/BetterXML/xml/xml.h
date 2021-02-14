//
// Created by seymo on 2/4/2021.
//

#ifndef BETTERXML_XML_H
#define BETTERXML_XML_H
#define nodex rapidxml::xml_node<> *
#define stringf_s std::string
#define newxmldoc(name) rapidxml::xml_document<> name;
// rapidxml::file<> sfile("test.reconfig_data");
//	rapidxml::xml_document<> doc;
//	doc.parse<0>(sfile.data());
//	rapidxml::xml_node<> * mainnode = doc.first_node();
//	stringf_s mainnode_name = mainnode->name();
//
//	rapidxml::xml_node<> * mainnode_container = mainnode->first_node();
//	stringf_s mnc_name = mainnode_container->name();
//	stringf_s mainnode_container_contentname = mainnode_container->first_node()->name();
//	stringf_s mainnode_container_contentdata = mainnode_container->first_node()->value();
#define constant const
#include <rapidxml_utils.hpp>
#include <rapidxml.hpp>
#include <iostream>
#include <stdinengine/alloc.h>
#include <Colorama/clr/sys.h>

class xml_config_device {
public:
	constant char* rootfile;
	typedef char CHARACTER;
	typedef double DOUBLE;
	typedef char * longchar;
	
	
	stringf_s getfirstnodename() const {
		using namespace rapidxml;
		
		rapidxml::file < > sfile ( rootfile );
		rapidxml::xml_document < > doc;
		doc.parse < 0 > ( sfile.data ( ) );
		return doc.first_node()->name();
	}
	nodex getfirstnode() {
		using namespace rapidxml;
		
		rapidxml::file < > sfile ( rootfile );
		rapidxml::xml_document < > doc;
		doc.parse < 0 > ( sfile.data ( ) );
		return doc.first_node();
	}
	stringf_s getsecondnodename() const {
		using namespace rapidxml;
		
		rapidxml::file < > sfile ( rootfile );
		rapidxml::xml_document < > doc;
		doc.parse < 0 > ( sfile.data ( ) );
		return doc.first_node()->first_node()->name();
	}
	stringf_s getnodevalue(const rapidxml::xml_node<> * path) {
		return path->value();
	}
	stringf_s getnodename(const rapidxml::xml_node<> * path) {
		return path->name();
	}
	rapidxml::xml_node<> * returnnode(rapidxml::xml_node<> * path) const {
		return path;
	}
};



#endif //BETTERXML_XML_H
