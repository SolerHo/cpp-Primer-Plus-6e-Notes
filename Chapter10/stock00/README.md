## 调试环境
- Centos 8
- gcc version：8.4.1
- C++ standard：C++11

## 调试方式
```sh
cd build
cmake ..
make
```

## 调试中发现的问题

### 问题1
会出现C++标准检查，无法使用
```cpp
main.cc:(.text+0x52): undefined reference to `Stock::acquire(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, long, double)'
```

解决方案：

```cpp
#define _GLIBCXX_USE_CXX11_ABI 0
```
参考：https://stackoverflow.com/questions/33394934/converting-std-cxx11string-to-stdstring

### 问题2
出现错误内容
```cpp
CMakeFiles/Stock00.dir/main.cc.o: In function `main':
main.cc:(.text+0x52): undefined reference to `Stock::acquire(std::string const&, long, double)'
collect2: error: ld returned 1 exit status
make[2]: *** [CMakeFiles/Stock00.dir/build.make:118: Stock00] Error 1
make[1]: *** [CMakeFiles/Makefile2:95: CMakeFiles/Stock00.dir/all] Error 2
make: *** [Makefile:103: all] Error 2
```

解决方案：

调试结果待更新

