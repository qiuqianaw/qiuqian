/*********************************************************************
【循环嵌套】编写程序，输入自然数n，输出1~n以内的所有完数，并输出其因子。
一个数若恰好等于它的各因子之和，即称其为完数，
如6=1+2+3，其中1、2、3为因子，6为因子为和。
（注：要求输出时按哪下格式连同完数的因子一同输出，每个完数输出占一行）
例如：输入：30
      输出：6=1+2+3
            28=1+2+4+7+14
【测试数据有多组，每组输出结果后必须换行】
**********************************************************************/ 

#include<stdio.h>
int main(){
	int n,i,j,sum;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=0;
		for(j=1;j<=i-1;j++)
			if(i%j==0)
				sum+=j;
			if(sum==i)
				printf("%d ",i);
	}
	printf("\n");
}



