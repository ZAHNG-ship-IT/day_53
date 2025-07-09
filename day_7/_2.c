//函数传递值与地址里面，什么时候传递其中之一呢？已经搜索到了，自己了解

//  何时应该传值（Pass by Value）
// 场景	原因	示例
// 不需要修改原变量	避免意外修改	计算数学函数：double sin(double x)
// 操作基本数据类型	开销小	int add(int a, int b) { return a+b; }
// 保证数据安全性	原数据不会被改变	验证函数：int isValid(int code)
// 参数很小	拷贝代价低	字符处理：char toUpper(char c)
// ✅ 优点：安全、直观、避免副作用
// ⚠️ 缺点：无法修改原值，大型结构体拷贝开销大

// 🚀 何时必须传地址（Pass by Address）
// 场景	原因	示例
// 需要修改原变量值	函数需改变外部变量	交换函数：void swap(int *a, int *b)
// 传递大型结构体	避免拷贝开销	void printStudent(const Student *s)
// 操作数组	数组名即首地址	void sort(int arr[], int size)
// 返回多个值	C语言单返回值限制	void getMinMax(int arr[], int len, int *min, int *max)
// 动态内存操作	需修改指针指向	void allocateMemory(int **ptr, int size)
// 避免栈溢出	大对象不压栈	处理大型数据结构
// ✅ 优点：高效、可修改原值、支持复杂操作
// ⚠️ 缺点：可能引入空指针、野指针问题