# Encrypt PNG
PNG格式图片加密解密工具，可以很方便地嵌入到cocos2d-x游戏引擎中。加密是通过剔除数据块的长度和类型码来实现的。实现简单，解密高效，可以有效地提高游戏资源被破解的门槛。

# 运行环境
由于使用了windows的api，加密程序只支持windows系统。解密程序可在任意支持c++11编译器的平台上使用。
VS 2017


# 如何使用
通过在cmd.exe中，exe + resDir的方式使用，会遍历resDir目录下所有png图片，加密解密后的文件会覆盖原来的png文件

e.g:
```bat
./EncryptPNG.exe ./resDir

```

# 后期可能功能

1. 存在平台大小端问题与png中块成员的length等兼容问题，接口存在平台依赖  ---------> 平台依赖已解决，还未测试，还需要编写makefile文件

2. 可以删除**辅助数据块**以减小png文件大小。------------------------------------->未完成

# 参考文档
(png图片结构分析与加密解密原理)[https://www.cnblogs.com/amws/p/3336536.html]