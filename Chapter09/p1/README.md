## 调试说明

Linux中安装cmake和make

```sh
# ubuntu中安装
apt-get install cmake make

# centos中安装
yum install cmake make
```

安装完毕后直接使用命令即可进行编译，编译完成后会生成一个可执行二进制文件 golf_infor

```sh
cd build
cmake ..
make
./golf_infor #执行后会提示输入infor
```
