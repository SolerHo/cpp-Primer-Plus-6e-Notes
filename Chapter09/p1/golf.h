const int Len = 40;
struct golf
{
    char fullname[40];
    int handicap;
};
/** 函数信息说明
 *  功能：
 *  参数：golf结构引用，常量指针，int值
 *  返回值：无
 */
void setgolf(golf &g, const char *name, int hc);

/** 函数信息说明
 *  功能：重载函数
 *  参数：golf结构
 *  返回值：有名字返回1，否则返回0
 */
int setgolf(golf &g);

/** 函数信息说明
 *  功能：重新设置复位值
 *  参数：golf结构引用，int
 *  返回值：无
 */
void handicap(golf &g,int hc);

/** 函数信息说明
 *  功能：显示golf结构成员信息
 *  参数：常量结构引用
 *  返回值：无
 */
void showgolf(const golf &g);