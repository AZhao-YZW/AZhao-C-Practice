## 项目背景
许多高级语言都支持泛型(Generics)，如Java. C++, TypeScript, Python等，
其中动态类型语言一般直接支持，静态类型语言通过模板的方式支持。  
C语言中可以通过一些语法间接实现泛型：
- 常用的`void *`类型
- 通讯协议中常用结构体`u8 data[0]`实现不同类型命令的解析
- `union`

## 项目简介