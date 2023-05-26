#include <map>
#include <iostream>
#include <string>

class MaQueKVDB{
private:
	std::map<std::string,std::string> map;
	std::string version_information="Welcome to MaQueKVDB!\nVersion:1.0.0\nAuthor:JuLongZhiLu\n";
public:
	bool set(std::string key,std::string value);
	std::string get(std::string key);
	void getVersionInformation();
};
