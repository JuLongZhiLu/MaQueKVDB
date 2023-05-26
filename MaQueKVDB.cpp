#include "MaQueKVDB.h"

bool MaQueKVDB::set(std::string key,std::string value){
	//定义一个pair用来接收insert的返回值
	std::pair<std::map<std::string, std::string>::iterator, bool> result;

	//也可以用auto[iter,success]来接收
	//auto[iter,success]=map.insert(std::pair<std::string,std::string>(key,value));

	result=map.insert(std::pair<std::string,std::string>(key,value));
	return result.second;
}

std::string MaQueKVDB::get(std::string key){
	return map[key];
}

void MaQueKVDB::getVersionInformation(){
	std::cout<<version_information<<std::endl;
}
