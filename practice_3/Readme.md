## 项目要求
1. C语言实现简易版NVMe协议
2. 编写cmake，能在windows和linux平台编译运行
3. 分别实现host和controller代码，能够一个host管理多个controller，中间的传输链路使用动态库模拟，为发送和接收均提供接口
4. 提供host和controller测试工具，方便测试功能以及查看状态
5. 使用gtest框架编写测试用例，能在windows和linux平台编译运行

## 项目简介
VSCode插件: C++ TestMate, CMake

## 项目组成

## 参考资料
- [Linux项目搭建Gtest/Gmock框架总结](https://blog.csdn.net/sinat_39037205/article/details/113761434)
- [玩转Google开源C++单元测试框架Google Test系列(gtest)(总)](https://www.cnblogs.com/coderzh/archive/2009/04/06/1426755.html)
- [转一篇小亮同学的google mock分享](https://www.cnblogs.com/welkinwalker/archive/2011/11/29/2267225.html)
- [gtest](https://github.com/google/googletest)
- [C++ 单元测试之 gtest & gmock](https://juejin.cn/post/6844903976765243400)
- [.gitignore 忽略文件和目录](https://cloud.tencent.com/developer/article/2207768)
- [c++单元测试之gtest测试框架快速上手](https://blog.csdn.net/guotianqing/article/details/104055221)
- [configure、 make、 make install 背后的原理(翻译)](https://zhuanlan.zhihu.com/p/77813702)
- [解决【Windows】下CMake不能生成makefile的问题](https://blog.csdn.net/qq_32939413/article/details/112381319)
- [linux中系统中 /bin、/sbin、/usr/bin、/usr/sbin、/usr/local/bin、/usr/local/sbin 目录的含义及区别](https://blog.csdn.net/weixin_45649763/article/details/104635869)
- [使用cmake官网下载的.sh安装cmake](https://blog.csdn.net/weixin_41304867/article/details/132125172)
- [centos切换gcc版本](https://www.cnblogs.com/huojing/articles/17913476.html)
- [Linux开发环境——SCL软件集](https://quantfabric.blog.csdn.net/article/details/123076029)
- [scl enable devtoolset-7踩坑](https://blog.csdn.net/qingsui9/article/details/125281608)
- [CentOS 7下升级gcc从4.9.2到9.3.1并真正永久生效](https://www.codenong.com/jsdf39ed099780/) **【结合practice_2参考文章中linux git自动补全文章】**
- [#!/bin/bash 和 #!/usr/bin/env bash 的区别](https://blog.csdn.net/qq_37164975/article/details/106181500)
- [查看终端是csh还是bash和更改shell设置](https://blog.csdn.net/qq_36434219/article/details/80247612)
- [/usr/bin/ld: 找不到 -lpthreads](https://segmentfault.com/q/1010000042761146)

## 总结