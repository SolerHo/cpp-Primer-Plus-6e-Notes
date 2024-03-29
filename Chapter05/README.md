## 第五章 循环和关系表达式

### 👉【[复习题](./复习题.md)】【[编程练习题](./编程题.md)】
## 1. for循环
for循环为执行重复的操作提供了循序渐进的过程。

for循环是`入口条件（entry-condition）`循环。

### 1.1 for循环的组成部分
- 设置变量初始化
- 执行测试，查看循环是否继续进行。
- 执行循环操作
- 不断更新测试的值

### 1.2 for循环的通用格式
```cpp
statement01
for (initialization;test-expression;update-expression)
    statement01;
statement03;
```
> 说明：test_expression 决定了程序是否执行， 这里的表达式也就是所谓的关系表达式，即两个数进行比较。

结构示意图：

![](./img/for循环.png)

C++中常用的方式：在for和括号之间加上一个空格，而省略函数名与括号之间的空格。
```cpp
for(int i = 6;i<=12;i++);
    printf("i = %d\n",i);
```

### 1.3 `递增`运算符`(++)`和`递减`运算符`(--)`
- 递增/递减：增加/减少一个单位

- 前缀和后缀的区别
    - **前缀递增/递减**：表示`操作符（++/--）`位于变量或表达式的`前面`。
    > 先执行运算，再生成值。
    - **后缀递增/递减**：表示`操作符（++/--）`位于变量或表达式的`后面`。
    > 先生成值，在执行运算。

将递增 / 递减运算符用于指针时，把指针增加/减少其指向的数据类型占用的字节数。

```cpp
 double arr[5] = {2.3,7.5,3.7,6.5,7.8};
 double *pt = arr;
 ++pt;
```

- `前缀/后缀递增 / 递减`运算符的优先级
`前缀递增、前缀递减`和`解除引用运算符`的优先级`相同`，从`左往右`的方式进行结合。

`后缀递增和后缀递减`的优先级相同，但是比`前缀运算符`的优先级`高`，从`左往右`的方式进行结合。

### 1.4 组合复制运算符
就是合并了算术运算符和赋值操作的运算符。

|操作符|作用（L为左操作数，R为右操作数）|
|:--:|:--:|
|+=|将`L+R`赋给L|
|-=|将`L-R`赋给L|
|*=|将`L*R`赋给L
|/=|将`L/R`赋给L|
|%=|将`L%R`赋给L|

### 1.5 关系表达式
![](./img/关系表达式.png)

> ⚠️注意：`等于`运算符（==）和`赋值`运算符（=）两者不要混淆。
>
> 比较两个量是否`相等`时，而要使用 `==`。

### 1.6 C-风格的字符串
`数组名`是数组的`地址`。用引号括起来的字符串常量也是其地址。

C-风格字符串库中的`strcmp()`函数来比较，函数接收两个字符串地址作为参数（参数可以是指针、字符串常量或字符数组名）。

如果字符串相同，函数返回 0；

如果第一个字符串按字母顺序排在第二个字符串`之前`，则`strcmp()`函数返回一个`负值`。

如果第一个字符串按字母顺序排在第二个字符串`之后`，则`strcmp()`函数返回一个`正值`。


## 2. while循环
while循环是`没有初始化` 和 `更新部分` 的for循环。只有`测试条件` 和 `循环体`。

### 2.1 while循环的语法格式
```cpp
while(test-condition)
    loop-body
```

## 2.2 while循环的结构图
![](./img/while循环的结构图.png)


## 3. do while循环

## 4. 循环与文本输入


## 5. 循环嵌套和二维数组

## 总结：设计循环的指导原则
- 指定循环终止的条件
- 在首次测试之前初始化条件
- 在条件被再次测试之前更新条件。

