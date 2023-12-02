## 项目简介

这是一个音乐盒项目，下面介绍这个项目的各个部分。  

## 项目组成

| Directory | Specifics |
| --------- | --------- |
| `project` | 下为音乐盒项目正式版本所需的全部内容。|
| `project/musicbox` | 实现音乐盒功能，并通过一些接口提供给外部，但用户并不直接感知这些接口。由于它只是底层硬件，所以其不仅提供了对用户来说必要的接口，还提供了一些给开发人员的调试接口、给维修人员的维修接口。|
| `project/user` | 实现对`project/musicbox`提供功能的封装，是最终呈现给用户的产品。|
| `tools` | 下为音乐盒项目的开发版本、维修工具。|
| `tools/dev_tool` | 是开发人员的调试版本，能够使用`project/musicbox`所有接口，包括一些底层接口。|
| `tools/fix_tool` | 是维修人员的维修版本，能够使用`project/musicbox`的维修接口。|

## 参考资料
1. [Makefile自动搜所目录及子目录下的的所有文件、自动生成编译目录](https://blog.csdn.net/songshuai0223/article/details/124676839)
2. 由于windows下make工具使用时会出现权限不足情况，所以将项目放在linux虚拟机上运行
   + [001.企业级CentOS7.6操作系统的安装](https://cloud.tencent.com/developer/article/1604773)
   + [在VMware Workstation中安装完CentOS-7.6-Minimal版后的常用配置](https://cloud.tencent.com/developer/article/1423893)
   + [VMware NAT模式下设置网络，虚拟机和主机网络不通](https://blog.csdn.net/YiRan_Zhao/article/details/110121526)
   + [Linux终端打开后命令行显示sh-4.2$的一个解决方法](https://blog.csdn.net/CC5683CC/article/details/106926721)
   + [关于Centos使用wget下载: 无法解析主机地址问题](https://blog.csdn.net/qq_42938040/article/details/109694358)
   + [Vim_上下两行交换位置](https://blog.csdn.net/mikyz/article/details/69398093)
   + [centos7安装python3.11完整教程（完整有效）](https://zhuanlan.zhihu.com/p/590965831)
   + [centos7 安装python3并设为默认](https://blog.csdn.net/misaka_s/article/details/89509859)
   + [CentOS7 升级 Git (最新方法,秒杀一切旧方法!)](https://blog.csdn.net/hxj0323/article/details/119751427)
   + [Centos7升级Python2到Python3](https://cloud.tencent.com/developer/article/1884182)