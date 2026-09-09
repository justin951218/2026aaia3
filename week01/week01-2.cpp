///week01-2.cpp SOIT106_ADVANCE_001
#include <iostream> ///C++的輸入輸出,功能強大
int main()
{
	int N;
	std::cin>>N;///C++輸入資料 標準::輸入 送到右邊N
	int b = N,ans = 0;
	while (N>0){
		ans = ans*10+N%10;
		N=M/10;
	}
	/// C++輸入資料,將右邊的整數,依序送到右邊 送出
	///錯std::cout <<b<<ans<<b+ans;///WRONG-ANSWER
	///上面漏了"+" 漏了"="又漏了 跳行
	///正確std::cout <<b<<"+"<<ans<<"="<<b+ans<<std::endl;
	///正確printf("%d+%d=%d",b,ans,ans+b);
	std::cout <<b<<"+"<<ans<<"="<<b+ans<<"\n";///也正確
}
