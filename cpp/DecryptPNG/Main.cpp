#include <iostream>
#include "Files.h"
#include "Decrypt.h"

const char *CONST_KEY = "783a3a2d394f33703f290f0b2c524f7a";

int main(int argc, char *argv[])
{
	aes_key key = { 0 };
	//std::cout << "请输入16位密钥：" << std::endl;
	//std::cin.get((char *)&key[0], key.size());
	for (uint32_t i = 0; i < strlen(CONST_KEY); i++)
	{
		key[i] = CONST_KEY[i];
	}


	// 寻找所有epng图片
	std::vector<std::string> epngfiles;

	for (int i = 1; i < argc; ++i)
	{
		auto all_files = path::walk(argv[i]);
		for (auto filename : all_files)
		{
			if (path::splitext(filename)[1] == ".png")
			{
				epngfiles.push_back(filename);
			}
		}
	}

	std::cout << "PNG文件个数:" << epngfiles.size() <<",正在解密中..." << std::endl;

	DecryptPNG(epngfiles, key);

	//system("pause");
	
	return 0;
}