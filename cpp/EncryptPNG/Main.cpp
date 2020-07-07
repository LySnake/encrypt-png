#include <iostream>
#include "Files.h"
#include "Encrypt.h"

const char *CONST_KEY = "783a3a2d394f33703f290f0b2c524f7a";

int main()
{
	// 输入密钥
	aes_key key = { 0 };
	//std::cout << "请输入16位密钥：" << std::endl;
	//std::cin.get((char *)&key[0], key.size());
	for (uint32_t i = 0; i < strlen(CONST_KEY); i++)
	{
		key[i] = CONST_KEY[i];
	}



	// 寻找所有png图片
	std::vector<std::string> pngfiles;
	auto all_files = path::walk(path::curdir());
	for (auto filename : all_files)
	{
		if (path::splitext(filename)[1] == ".png")
		{
			pngfiles.push_back(filename);
		}
	}

	std::cout << "正在加密中..." << std::endl;

	// 图片加密操作
	EncryptPNG(pngfiles, key);

	//system("pause");

	return 0;
}