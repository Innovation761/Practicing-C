#include <stdio.h>
int m,n,k;
int sp=0;

int main()
{
scanf("%d%d%d",&m,&n,&k);
for(int r=0;r<k;r++){
    int stack[m];
    for(int r=0;r<m;r++)
    stack[r]=0;
        int flag=1;
int table=1,data=0;
sp=0;
int d[n];
    for(int s=0;s<n;s++)
        scanf("%d",&d[s]);
//输入数组的数据data，要让data一步一步走是关键。
while(data<n){
    if(table==d[data]){//此data等于此table元素，此table元素进栈并且出栈
        table++;
        data++;
        if(sp==m){
            flag=0;
            break;
        }//如果栈满就失败了
    }
    else if(table<d[data]){//此data大于此table元素，此table元素进栈
        if(sp>=m){
            flag=0;
            break;
        }//防止栈被突破
        stack[sp]=table;
        table++;
        sp++;
    }
    else if(table>d[data]){//此table大于此data的情况下，栈中元素出栈
        if(d[data]==stack[sp-1]){//栈顶元素等于此data
        sp--;
        data++;
        }
        else {
            flag=0;
            break;
        }
    }
}
if(flag){
    printf("YES\n");
}else{
    printf("NO\n");
}
}
}
