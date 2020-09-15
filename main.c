/*最长前缀
 *2020.07.04
 *hejun
 */
#include <stdio.h>
#include <string.h>

/* 函数声明 */


int main(void)
{
	int i=0, j=0;
	int n = 0;						/* 集合Q中的元素个数 */
	char Q[10][10] = {"\0"};		/* 集合Q */
	char S[2000] = {'\0'};			/* 序列S */
	
	int S_len;						/* 序列S的长度 */
	char S'[2000];					/* 最长前缀 */
	
	/* 输入集合Q，每个元素为一个字符串，长度不超过10 */
	do{		
		scanf("%s", (Q[n])); 
		n++;
	}while(getchar() != '\n');
	

	getchar();		/* 取出'.' */
	getchar();		/* 取出'\n' */
	
	scanf("%s", S); 
	
						// printf("n = %d\n", n ); 

						// for(i=0; i<n; i++){
							// printf("%s ", Q[i]); 
						// }
						// printf("\n"); 
						// printf("S = %s\n", S); 
	
	S_len = strlen(S);
	
	
	return 0;
}

/* 问题1：最多能吞噬多少个星球 */