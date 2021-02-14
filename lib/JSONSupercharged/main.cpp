#include "json.h"
#include <Colorama/clr/sys.h>

int main() {
	js l;
	
	stringf_s name = l.getspecifictype("test.json", "name");
	stringf_s nick = l.getspecifictype("test.json", "aname");
	print("Real Name: " + name);
	print("Nickname: " + nick);
}