# Encrypt PNG
PNG格式图片加密解密工具，可以很方便地嵌入到cocos2d-x游戏引擎中。加密是通过剔除数据块的长度和类型码来实现的。实现简单，解密高效，可以有效地提高游戏资源被破解的门槛。

# 运行环境
由于使用了windows的api，加密程序只支持windows系统。解密程序可在任意支持c++11编译器的平台上使用。
VS 2017


# 如何使用
通过在cmd.exe中，exe + resDir的方式使用，会遍历resDir目录下所有图片(根据文件的扩展名进行操作，EncryptPNG.exe对png文件操作，DecryptPNG.exe对epng文件操作)，操作成功后会原文件。

e.g:
```bat
./EncryptPNG.exe ./resDir

```

# 后期可能功能
因为生成的功具是windows平台依赖，后续，如果有需要再通过python编写解决依赖问题

```
已知需要的部分环境:

python 2.7

pip install struct
pip install pycryptodome  --win下AES
pip install pycrypto      --linux下AES
pip install CRC32相关的库
```
# 参考文档
(png图片结构分析与加密解密原理)[https://www.cnblogs.com/amws/p/3336536.html]