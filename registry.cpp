//
// Created by seymo on 2/3/2021.
//
#include <json.hpp>
#include <stdinengine/alloc.h>
#include <Colorama/clr/sys.h>
#include <iostream>
#include <JSONSupercharged/json.h>



int main ( ) {
	print( "[INITIAL] Running ReMake. . ." );
	Sleep ( 2100 );
	print( "[INITIAL] Checking For Remake Project. . ." );
	std::ifstream ifile ( ".remakeproj" );
	Sleep ( 1000 );
	if ( ifile ) {
		print( "[SUCCESSNOTE] Found Remake Project. Loading Configuration." );
		Sleep ( 2000 );
		js project;
		stringf_s proj_compiler = project.getspecifictype ( ".remakeproj" , "compiler" );
		if ( proj_compiler == "default" ) {
			proj_compiler = "parser.exe";
		}
		print( "[NOTICE] Found Compiler: " + proj_compiler );
		Sleep ( 2030 );
		stringf_s proj_name = project.getspecifictype ( ".remakeproj" , "project_name" );
		print( "[NOTICE] Found Project Name: " + proj_name );
		Sleep ( 1921 );
		print( "[DIST] Looking for Build Command." );
		Sleep ( 2000 );
		stringf_s buildcmd = project.getspecifictype ( ".remakeproj" , "build_command" );
		print( "[DIST] Build command: " + buildcmd );
		Sleep ( 3173 );
		print( "[RUN] Running Build Command." );
		system ( buildcmd.c_str ( ) );
		Sleep ( 2000 );
		stringf_s buildauthor = project.getspecifictype ( ".remakeproj" , "auth" );
		print( "[DIST] Build author: " + buildauthor );
		stringf_s repo = project.getspecifictype ( ".remakeproj" , "repo" );
		Sleep ( 3000 );
		print( "[COMPILER] Testing For Compiler In Project Path..." );
		Sleep ( 1000 );
		std::ifstream ifile ( proj_compiler + ".exe" );
		if ( !ifile ) {
			ColorPicker x;
			x.pickColor(RED);
			print("[ERR] Failed to Find Compiler '" + proj_compiler + "' In Project.");
			x.pickColor(15);
			Sleep(1000);
			print("[ERRCHECK] Checking For Compiler In System.");
			char buf[UNLEN+1];
			CHAR username[UNLEN+1];
			DWORD username_len = UNLEN+1;
			GetUserName (username, &username_len );
			std::string user = username;
			std::ifstream ifilxe("C:\\Users\\" + user + "\\AppData\\Local\\Programs\\ReConfigScript\\" + proj_compiler);
			print("[CHECK] Checking C:\\Users\\" + user + "\\AppData\\Local\\Programs\\ReConfigScript\\" + proj_compiler);
			if (!ifilxe) {
				print("[FAIL] Failed to Find a ReConfig Compiler in your system.");
			}
		}
		else {
			print("Found Compiler " + proj_compiler + " In Project Path.");
		}
		if (repo == "dist") {
			repo = "Self (aka: self-distribution, 'creator', proprietary)";
		}
		print( "[DIST] Repository: " + repo );
		Sleep ( 2000 );
		
		print( "[FINAL] Finalizing Changes..." );
		if (repo == "Self (aka: self-distribution, 'creator', proprietary)") {
			print("Project Finished! You need to redistribute your app by your self.");
			Sleep(1000);
			abort();
		}
		Sleep ( 1000 );
		print( "Remake Project Finished. Users Will need to Run the Command, git clone " + repo
		       + " to fully install your app." );
		print( "" );
		
	}
}