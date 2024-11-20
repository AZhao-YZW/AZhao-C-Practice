## 项目简介

这是一个音乐盒项目。  
本项目提供给用户使用`user_tool`，同时在不修改原代码的方式，通过编写Makefile打桩文件/函数，
能够编译出给开发人员使用的调试工具`dev_tool`和给维修人员使用的维修工具`repair_tool`。

## 项目组成

| Directory | Specifics |
| --------- | --------- |
| `project` | 下为音乐盒项目正式版本所需的全部内容。|
| `project/musicbox` | 实现音乐盒功能，并通过一些接口提供给外部，但用户并不直接感知这些接口。由于它只是底层硬件，所以其不仅提供了对用户来说必要的接口，还提供了一些给开发人员的调试接口、给维修人员的维修接口。|
| `project/user` | 实现对`project/musicbox`提供功能的封装，是最终呈现给用户的产品。|
| `tools` | 下为音乐盒项目的开发版本、维修工具。|
| `tools/dev_tool` | 是开发人员的调试版本，能够使用`project/musicbox`所有接口，包括一些底层接口。|
| `tools/repair_tool` | 是维修人员的维修版本，能够使用`project/musicbox`的维修接口。|

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
   + [gcc command in Linux with examples](https://www.geeksforgeeks.org/gcc-command-in-linux-with-examples/)
   + [GIT 自动补全命令,分支名 以及 高亮显示当前分支](https://www.jianshu.com/p/4f8dc58df31f)
   + [git rebase，看这一篇就够了](https://juejin.cn/post/6969101234338791432)
   + [Git之删除本地无用分支](https://blog.csdn.net/qq_35448165/article/details/107335358)
   + [Linux命令学习手册-objcopy](https://zhuanlan.zhihu.com/p/115834422)
   + [在虚拟机上搭建自己的 git 服务器并创建 git 仓库](https://blog.csdn.net/TomorrowAndTuture/article/details/108611882)
   + [[Linux] 修改PS1环境变量让shell只显示最后一个目录名而不显示完整的路径](https://blog.csdn.net/weixin_42482896/article/details/107564740)
   + [Git 如何使用一条命令来获取Git根目录](https://geek-docs.com/git/git-questions/267_git_is_there_a_way_to_get_the_git_root_directory_in_one_command.html)

## 总结
1. git中修改未提交的两种状态：`not staged`是曾被某次commit提交过，而`untrack`是未被跟踪过的文件
2. 特别注意，Makefile自带函数或其他`$()`包起来的函数，都无法处理shell变量，shell变量只能通过shell脚本处理，Makefile中可以使用处理完后的结果