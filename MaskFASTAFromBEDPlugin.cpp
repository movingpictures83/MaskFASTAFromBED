#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "MaskFASTAFromBEDPlugin.h"

void MaskFASTAFromBEDPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void MaskFASTAFromBEDPlugin::run() {}

void MaskFASTAFromBEDPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "maskFastaFromBed -fi";
myCommand += " ";
addRequiredParameterNoFlag("fastafile");
addRequiredParameter("-bed", "bedfile");
myCommand += " >& "+outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<MaskFASTAFromBEDPlugin> MaskFASTAFromBEDPluginProxy = PluginProxy<MaskFASTAFromBEDPlugin>("MaskFASTAFromBED", PluginManager::getInstance());
