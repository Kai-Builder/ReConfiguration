#include "iniparse.h"
#include "os.hpp"





int main(int argc, char* argv[]) {
	String filesx(argv[1]);
	// Get Config Edit
	configurations::LoadPackageType(filesx);

    configurations::asyncio::ASyncio_Printvar(filesx);
	configurations::LoadConfigForSessionA(filesx);
	// Get Value
	configurations::SkimFileAndExtractTypeValues(filesx);
	configurations::GetTypeClass(filesx);
	configurations::GetFunctionPart(filesx);
	configurations::GetAccessedClassMember(filesx);
	// Modules
	configurations::GetAcceptInstances(filesx);
	configurations::asyncio::AsyncPause(filesx);
	// Etc...
	configurations::accept::Flush(filesx);
	configurations::DeveloperFunctionalityKeywords(filesx);
	configurations::revalue::GetFloat(filesx);
	// Meta Extras
    configurations::Loadkeymeta(filesx);
	CallOnCommunication(filesx);

}