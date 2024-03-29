## 第四章 复合类型

### 👉【[复习题](./复习题.md)】【[编程练习题](./编程题.md)】

## 1. 数组概述
### 1.1 数组的定义
数组（array）是一种数据格式，能够存储多个同类型的值。每个值都存储在一个独立的数组元素中，计算机在内存中依次存储数组的各个元素。


数组声明的三个特点：
- 存储在每个元素中的值的类型
- 数组名
- 数组中的元素数

C++中可以通过修改简单变量的声明，添加中括号（其中包含元素数目）来完成数组声明。

例如：
```cpp
short days[24]; // 一天有24个小时
```

### 1.2 数组的声明

声明数组的的一般语法格式为：
```cpp
// 数组类型 数组名字[数组的大小]
int score[4]; // 四个人的分数，整型数组
```

数组的大小是指定`元素的数目`，必须是`整型常数或const值`，也可以是常量表达式(8*sizeof(int))

### 1.3 复合类型的数组

可以使用其他的类型来创建（C语言使用术语：`派生类型`）

数组的用途，可以单独访问数组元素，方法是：使用`下标`或`索引`对元素进行编号。`从0开始编号`。
> 编译器不会检查下标是否有效，所以要注意下标合法性，避免程序异常问题。
C++使用索引的方括号表示法来指定数组元素。

### 1.4 数组的初始化规则

1.只有在定义数组时才能初始化，此后不能使用，也~~不能将一个数值赋给另一个数组~~。

2.初始化数组时，提供的值少于数组的元素数目。

3.如果只对数组的一部分进行初始化，则编译器把其他元素设置为0。

4.如果初始化为`{1}`而不是`{0}`，则第一个元素被设置为1，其他元素都被设置为0.

5.如果初始化数组方括号内`（[]）`为空，C++编译器将`计算元素个数`。 例如：short things[] = {1,3,5,7};

### 1.5 C++11数组初始化方法
C++11将使用大括号的`初始化（列表初始化）`作为一种通用的初始化方式，可用于所有类型。

在C++中列表初始化就增加了一些功能：

- 初始化数组时，可省略`等号（=）`

```cpp
double earnings[4] {1.2e4,1.6e4,1.1e4,1.7e4};
```

- 可不在大括号内包含任何东西，这会将所元素都设置为零。

```cpp
unsigned int const[10] = {};

float balances[100] {};
```

- 列表初始化禁止缩窄转换。

```cpp
long num[] = {25,92,3.0}; // 浮点数转换为整型是缩窄操作
```

例子：
```cpp
#include<iostream>

using namespace std;

int main()
{
    // 创建一个名字为yams的数组，包含了3个元素，编号是0～2.
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    // 使用逗号分隔的值列表（初始化列表），然后用花括号括起来即可。
    // 列表中的空格是可选的，如果没有初始化函数中定义的数组，其元素值也是不确定。
    int yamcosts[3] = {1,2,3};

    cout<<"yams 数组是："<<yams[0]+yams[1]+yams[2]<<endl;
    cout<<"yams[1] = "<<yams[1]<<endl;
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout<<"total yam = "<<total<<endl;

    // sizeof运算符返回类型或数据对象的长度（单位为字节）。
    // 如果将sizeof运算符用于数组名，得到的是整个数组的字节数。
    // 如果sizeof用于数组元素，得到的是元素的长度（单位为字节）。
    cout<<"\n yams数组的大小 = "<<sizeof(yams)<<" Bytes.\n";
    cout<<"一个元素的大小 = "<<sizeof(yams[0])<<" Bytes.\n";

    return 0;
}
```


## 2. 字符串

字符串是存储在内存的连续字节中的一系列字符。

### 2.1 C++处理字符串的两种方式：

- C语言，常常被称为`C-风格字符串(C-style String)`
    > 以空字符（\0,ASCII码对应为0）来标记字符串的结尾。
- 基于String类库的方法

存储在`连续字节`中的一系列字符意味着可以将`字符串`存储在`char数组`中。其中每个字符都位于自己的数组元素中。

使用`引号`括起来的字符串，这种字符串叫 **`字符串常量（String constant）` 或 `字符串字面值（string literal）`**  。
>字符串常量（使用双引号）不能与字符常量（使用单引号）互换。

例如：
```cpp
char name[] = "Soler";
```
字符串`结尾的空字符`，`不用直接显式包括`，机器在键盘输入，将字符串读入到`char类型`中，会在结尾`自动加上空字符`。

⚠️注意：确定了存储字符串所需的最短数组时，不要忘记把`结尾的空字符`包括在内。

### 2.2 字符串常量的拼接
方法：直接两个引号括起来的字符串合并为一个。任何两个由`空白（空格、制表符和换行符）`分隔的字符串常量都将自动拼接成一个。

```cpp
cout<<"My name is " "Soler HO.\n" 
```

### 2.3 在数组中使用字符串
将字符串存储到数组的常用方法：
- 将数组初始化为字符串常量
- 将键盘或文件输入读入到数组中。

```cpp
#include <iostream>
#include <cstring> /*提供strlen()函数*/
using namespace std;

const int Size = 15;

int main()
{
    char name1[Size];
    char name2[Size] = "C++owboy";
    // 字符串的拼接
    cout<<"Howdy!I'm "<< name2;
    cout<<"!,What's your name?\n";
    cin>>name1;

    cout<<"Well, "<<name1<<",your name has : "<<strlen(name1)<<" letters and is stored!\n" ;
    cout<<"In an array of "<<sizeof(name1)<<" Bytes\n";
    cout<<"Your iniatial is "<<name1[0]<<".\n"; // name1数组中的第一个元素
    name2[3] = '\0';
    cout<<"Here are the first 3 characters of my name:"<<name2<<endl;

    return 0;
}
```

`strlen() 函数` 和 `sizeof()运算符`的区别 
- `strlen()`函数
    - 返回的是`存储在数组中的字符串的长度`，而`~~不是数组本身的长度~~`。
    - strlen()只计算`可见的字符`，而~~不把空字符计算在内~~。

 - `sizeof()` 运算符
    - 指出`变量`或`数据类型`的`字节大小`。
    - 可用于获取`类、结构、共用体和其他用户自定义数据类型`的大小。

### 2.4 读取一行字符串的输入
解决没有逐行读取输入的缺陷。

istream中提供了面向行的类成员函数：`getline()` 和 `get()` 函数

#### 2.4.1 面向行的输入：`getline()`
使用通过回车键输入的换行符来确定输入结尾。使用 `cin.getline()` 。

函数有两个参数：
- 第一个参数：存储输入行的`数组名称`。
- 第二个参数：要读取的字符数（注意包含结尾的`空字符（\0）`）。

格式：

```cpp
cin.getline(name,ArSize);
```

#### 2.4.2 面向行的输入：`get()`
与`getline()` 函数类似，接受的`参数相同`，解释参数的方式也相同，并`读到行尾`。

区别：`get()` 读取并`丢弃`换行符，将其留在输入队列中。

格式：

```cpp
cin.get(name,ArSize);
```

get() 将两个类成员函数拼接（合并）：

```cpp
cin.get(name,ArSize).get();
```

⚠️注意：get() 函数读取空行后设置会失效，输入会被阻断。可用如下恢复：

```cpp
cin.clear();
```

混合输入数字和面向行的字符串会导致的问题：无法输入地址。
> 解决方法：直接使用get()进行读取之前丢弃换行符。

## 3. string类
`string类`位于名称空间`std`中，所以需要提供`using指令`或者是直接使用`std::string`进行引用。

要使用`string类`，必须在程序中包含`头文件string`中。

string类定义隐藏了字符串的数组性质。
### 3.1 string对象的方式
使用string对象的方式和使用字符数组相同。

- `C-风格字符串`来初始化string对象中。
- 使用`cin来将键盘输入`存储到string对象中。
- 使用`cout`来显示string对象。
- 可以使用`数组表示方法`来访问存储在string1对象中的字符。

赋值 —— 不能将一个数组赋给另一个数组，但可以将一个string对象赋另一个string对象。

```cpp
char char01[20];                // 创建一个空列表
char char02[20] = "Jason";      // 创建一个初始化数组

string str01;                   // 创建一个空的string对象
string str02 = "Soler Ho";      // 创建一个初始化的string对象

char01 = char01;                // 不可执行，一个数组不能赋值给另一个数组
str01 = str02;                  // 可执行，可将一个string对象赋给另一个string对象。
```
### 3.2 复制、拼接和附加

string类简化字符串合并操作。

- 利用`运算符 + `将两个string对象合并起来。

```cpp
string str01;                  
string str02 = "Soler Ho";

string = str01 + str02;
```

- 可以使用`运算符 += `将字符串`附加`到string对象的`末尾`。

```cpp
string str01;                  
string str02 = "Soler Ho";

str01 += str02;
```

## 4. 结构简介
结构是`用户定义`的类型，而结构声明定义了类型的`数据属性`。

定义类型之后，就直接创建类型的变量。

结构比数组灵活，同一个结构中可以存储多种类型的数据。

### 4.1 创建结构的步骤：
- 定义结构描述 —— 描述并标记能够存储在结构中的各种数据类型

- 按描述创建结构变量（结构数据对象）。

### 4.2 结构的定义：
```cpp
struct(关键字) 类型名(标记成为新类型的名称)
{
    结构成员1;
    结构成员2;
    结构成员3;
};//(结束结构声明)
```

对于结构中的成员，使用`成员运算符（.）`来进行访问各个成员。

### 4.3 结构的初始化（C++11）
- 与数组一样，列表的初始化用于结构，且`等号（=）可有可无`。

```cpp
infor Soler_infor {"Soler HO",55,168}; // 在C++11中，= 号可以省略
```

- 如果大括号内未包含任何东西，各个成员都将设置为零。

```cpp
infor Soler_infor {};
```

- 不允许缩窄转换

✅ 小Tips：C++允许在声明结构变量时省略关键字struct。

### 4.4 成员赋值
***成员赋值（memberwise assignment）***：可以使用`赋值运算符（=）`将结构赋另一个同类型的结构。这样结构中的每个成员都将被设置为另一个结构中相应成员的值。即使成员是数组。这种方式就是`成员赋值`。


## 5. 共用体
共用体（union），也叫做`联合（union）`。一种 **`构造数据类型`** 。

**关键字：union**

联合（union）：将`不同类型的数据`在一起**共同占用同一段内存**

存储不同的数据类型，但只能同时存储其中的一种类型

示例：

```cpp
union sample
{
    int int_val;
    long long_val;
    double double_val;
};
```
### 5.1 结构体和共用体的区别

- 结构可以`同时存储int、long和double`。
- 共用体`只能存储int、long和double`三种。
- 含义不同。
- 关键字不同
  - 结构体：struct
  - 共用体：union

### 5.2 共用体的用途：
- 当数据使用两种格式或更多格式（但不会同时使用）时，可以节省空间。
  - 嵌入式系统编程（如控制烤箱、MP3播放器），内存非常宝贵。 
- 常用于操作系统数据结构或硬件数据结构。


### 5.3 匿名共用体

匿名共用体（anonymous union）`没有名称`，其成员将成为位于`相同地址`处的变量。


## 6. 枚举
C++的enum工具提供了另一种创建`符号常量`的方式，可以代替const，允许定义新类型，但必须有严格限制。


使用enum的语法格式与结构的使用类似。

```cpp
enum color{red,orange,yellow,green,blue,voilet};
```

### 6.1 设置枚举量的值

```cpp
enum week{Monday = 1,Tuesday = 2;Wednesday = 3;Thursday = 4};
```

指定的值必须是`整数`。也可以只显示定义其中一些`枚举量的值`。

如果第一个变量未初始化，默认为0。后面没有被初始化的枚举量的值将比其前面的枚举量大1。也可以创建多个值相同的枚举量。

```cpp
enum {zero,null = 0,numero_one,one = 1};
```

### 6.2 枚举的取值范围
每个枚举都有取值范围的上限，通过强制类型转换，可以将取值范围中的任何整数值赋给枚举常量，即使这个值不是枚举值。

### 6.3 取值范围的定义
- 找出上限，需要知道枚举量的最大值。
  - 找到大于最大值的，最小的2的幂，减去1，得到就是取值范围的上限。
- 计算下限，知道枚举量的最小值。
  - 如果不小于0，则取值范围的下限为0，否则，采用寻找上限方式相同的方式，但是要加上负号。

对于选择使用多少空间来存储枚举由`编译器`决定。


## 7. 指针和自由空间

对于地址显示结果是`十六进制表示法`，因为都是常常描述`内存的表示法`。

- 指针与C++基本原理
  > 面向对象编程和传统的过程性编程的区别，OOP强调的是运行阶段(而不是编译阶段)进行决策。

  - **运行阶段**：程序正在运行是，取决于不同的情况。
  - **编译阶段**：编译器将程序组合起来时。坚持原先设定的安排

指针用于存储值的地址。指针名表示的是地址。
> `*运算符`称为间接值或解除引用运算符，将其应用于指针，得到该地址处存储的值。

### 7.1 声明和初始化指针
指针的声明必须指定`指向的数据的类型`。

```cpp
int *p_updates; 
```

> `*p_updates` 的类型是`int`，所以`*运算符`被用于`指针`，所以p_updates变量必须是指针。

运算符*两边的`空格`是可选的。

```cpp
int *ptr; /*该情况强调：*ptr是一个int类型的值。*/

int* ptr; /*该情况强调：int* 是一种类型，指向int的指针。*/
```

在C++中，`int*`是一种复合类型，是`指向int的指针`。

```cpp
double *tax_ptr;
```

### 7.2 指针的危险
在C++创建指针时，计算机将分配用来`存储地址的内存`，但是<u>不会分配用来存储指针所指向的数据的内存</u>。

⚠️注意：一定要在对指针应用`解除引用运算符(*)`之前，将指针初始化为一个`确定`的、适当的`地址`。

### 7.3 指针和数字
整数可以加减乘除等运算，而`指针`描述的是`位置`。

C++语言~~数字不能作为地址使用~~，如果要把数字当地址来使用，应通过`强制类型转换`将数字转换为适当的地址类型。

### 7.4 使用`new分配`和`delete释放`内存

指针在`运行阶段` 分配未命名的内存以存储值。然后使用内存来访问内存。

C语言中，使用 **库函数malloc()**来分配内存。C++中使用 ———— new运算符。


#### 7.4.1 要注意使用delete进行内存的释放
 
需要内存时，直接使用new来请求，这是内存管理数据包的一个方面。

如果使用了`delete运算符`，使得在使用完内存后，能够将其`归还给内存池`，这是有效使用内存的关键。

使用delete时，后面要加上指向内存块的指针。

```cpp
int * ps = new int; // 使用new进行内存分配
 ...
delete ps; // 使用delete进行内存的释放
```

#### ⚠️注意点：

1.使用delete释放ps的内存，但是~~不会删除指针ps本身~~。

2.只能用`delete`来释放使用`new分配的内存`，但是如果是`空的指针`使用delete是安全的。

**使用delete的关键**：用于`new分配的内存`。~~不是要使用于new的指针~~，而是用于`new的地址`。

❌警告：不能创建两个指向同一个内存块的指针。会增加错误地删除同一个内存块两次的可能性。

### 7.5 使用new创建动态数组

C++中，创建动态数组，只需要将`数组的元素类型`和`元素数目`告诉new即可。必须在`类型名`后面加上`方括号`，其中包含了元素数目。

通用格式：

```cpp
Type_name *pointer_name = new Type_name[num_element];
//例子
int * psome =new int[10]; // 创建10个int元素的数组
```

new运算符会返回第一个元素的地址

如果使用完new分配的内存，使用delete进行内存的释放。

```cpp
delete [] psome; // 进行内存的释放
```

delete和指针直接的方括号告诉程序，应`释放整个数组`，不仅仅是指针指向的元素。

delete中的`方括号的有无`取决于使用`new时的方括号有无`。

对于指针数组的使用，直接可以按照普通数组的使用即可。

### 7.6 使用new和delete时，要遵循的规则
- 不要使用delete来释放不是new分配的内存。
- 不要使用delete释放同一个内存块两次。
- 如果使用`new[]`为`数组`分配内存时，则应使用`delete[] `来释放。
- 如果使用new[]为一个`实体`分配内存，则应使用`delete（没有方括号）`来释放。
- 对空指针使用delete时很安全。

## 8. 指针、数组和指针算术
指针和数组基本等价的原因：`指针算术(pointer arithmetic)` 和`C++ 内部处理数组的方式`。
> - 对`整数变量` + 1，其`值`增加1
> - 对`指针变量` + 1，增加的量等于它`指向的类型的字节数`。
获取数组地址的两种方式

```cpp
double * pw = wages; // 数组名 = 地址 ;将pw声明为指向double类型的指针。然后将其初始化为wages - - - wages数组中第一个元素的地址。

short * ps = &wages[0]; // 使用地址操作；使用地址运算符来将ps指针初始化为stacks数组的第一个元素。
```
### 8.1 指针问题小结
#### 8.1.1 声明指针
要声明指向特定类型的指针，语法格式：

```cpp
TypeName *pointerName;
// 例子
double * pn; // pn 指向一个double类型
char * ps;  // ps 指向一个char类型
```

#### 8.1.2 给指针赋值
将内存地址赋给指针。可以对变量名应用 `& 运算符`，来获得被变量名的`内存地址`，new运算符返回未命名的内存的地址。

示例：

```cpp
double * pn;  // pn 指向一个double类型
double * pa; // pa 指向一个double类型

char * pc; // pc 指向一个char类型
double bubble = 3.2; 

pn = &bubble; // 把bubble的地址赋值给 pn
pc = new char; // 新建char地址并分配给pc
```

#### 8.1.3 对指针解除引用
对指针解除引用意味着获得`指针指向的值`。

- 方法1：对指针应用解除`引用`或`间接值运算符(*)`来解除引用。

```cpp
cout<<*pn;
*pc = 's';
```

- 方法2：使用`数组表示法`。~~不可以对未初始化为适当地址的指针解除引用~~。

#### 8.1.4 数组名
多数情况下，C++将`数组名`视为数组的`第一个元素的地址`。

```cpp
int tacos[10]; // 此时的tacos同样也是&tacos[0]
```
 
#### 8.1.5 指针算术
C++中允许指针和整数`相加`。加1 的结果等于`原来的地址值`加上指向的对象占用的`总字节数`。

也可以将一个指针减去另一个指针，获得两个指针的差。得到一个整数，仅当两个指针指向同一个数组(也可以指向超出结尾的一个位置)时，这种情况会得到两个元素的间隔。

#### 8.1.6 数组的动态联编和静态联编

使用数组声明来创建数组时，将采用`静态联编`，即数组长度在`编译`时设置。

```cpp
int tacos[10] // 静态联编
```

使用`new[]运算符`创建数组时，将采用`动态联编(动态数组)`，即将在运行时为数组分配空间，其长度为运行时设置。
> 使用这类数组后，要使用`delete[]`释放所占用的内存。

#### 8.1.7 数组表示法和指针表示法

使用`方括号数组表示法`等同于对指针`解除引用`。

数组名和指针变量也是一样。所以对于指针和数组名，既可以使用`指针表示法`，也可以使用`数组表示法`。

```cpp
int * pt = new int [10];
*pt = 5;
pt[0] = 6;
pt[9] = 5;
int coats[10];
*(coats + 4) = 12;
```

### 8.2 指针和字符串
数组名是`第一个元素地址`。

如果给cout提供一个字符的地址，则它将从该字符开始打印，直到遇到空字符为止。

在cout和多数C++表达式中，`char数组名`、`char指针`以及用引号括起来的`字符串常量`都被解释为`字符串第一个字符的地址`。

<u>~~不要使用字符串常量或未被初始化的指针来接收输入~~。</u>
> 在字符串读入程序时，应使用已分配的内存地址。该地址不是数组名，也可以使用new初始化过的指针。

`strcpy()`接受两个参数,第一个：`目标地址`，第二个：`要复制的字符串的地址`。
> 要确定目标空间有足够的空间来存储副本。

### 8.3 使用new创建动态结构
对于在指定结构成员时，`句点运算符`和`箭头运算符`的选择时：
- 如果结构标识符是`结构名`，则使用`句点运算符（.）`。
- 如果标识符是`指向结构的指针`，则使用`箭头运算符（->）`。

把new用于结构的两个步骤
- 创建结构
  > 要创建结构，需要同时使用结构类型和new。
- 创建访问其成员。

### 8.4 C++管理数据内存的方式
- 自动存储
在函数内部定义的常规变量使用自动存储空间，称为`自动变量`。
  > 只在特定函数被执行时存在。

自动变量时一个`局部变量`，作用域为包含它的`代码块`。通常存储在`栈`中，遵循`后进先出（LIFO）`。

- 静态存储
  - 变量称为静态的方式
    - 在函数外面定义
    - 在声明变量时使用关键字static。

  整个程序执行期间都存在的存储方式（存在于程序的`整个生命周期`）。

- 动态存储
内存池（自由存储空间或堆）用于静态变量和自动变量，且内存是分开的。

- 线程存储（C++11特性）

## 9. 数组替代品 --- 模板类

模板类`vector`和`array`是数组的替代品。

### 9.1 模板类vector
模板类`vector`类似于`string`类，也是一种`动态数组`。

- `vector对象`包含在`vector头文件`中。
- vector包含在名称空间std中，使用`using编译指令`、`using声明`或`std::vector`。
- 模板使用不同的`语法`来指出它存储的`数据类型`。
- vector类使用不用的语法来指定`元素数`。

### 9.2 模板类array（C++11）
位于名称空间`std`中，与数组一样，array对象的`长度固定`，也使用`栈（静态内存分配）`，而不是`自由存储区`。
> 头文件 array。

### 9.3 数组、vector和array的区别
无论是数组、vector对象还是array对象，都可使用`标准数组表示法`来访问各个元素。

从`地址`可知，array对象和数组存储在相同的`内存区域（即栈）`中，vector对象存储在`自由存储区域或堆`中。

可以将一个array对象赋给另一个array对象，对于数组，必须`逐个`元素`复制`数据。


