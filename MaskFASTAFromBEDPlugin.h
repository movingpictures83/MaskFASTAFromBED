#ifndef MASKFASTAFROMBEDPLUGIN_H
#define MASKFASTAFROMBEDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class MaskFASTAFromBEDPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "MaskFASTAFromBED";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
