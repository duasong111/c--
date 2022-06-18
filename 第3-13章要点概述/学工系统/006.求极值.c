//则对应于最小值一样的适用
void max(){  //用来显示最高的成绩
int i,j,x,z;
for(i=0;i<N;i++){
    arr1[i]=s[0].score[i]; //将每行的初始元素赋值给数组arr[i];
}
for(j=0;j<N;j++){
        for(z=0;z<N;z++){
            if(arr1[z]<s[j].score[z]) arr1[z] = s[j].score[z];
        }
}
puts("-------------------------------");
puts("每门成绩的最高分为");
puts("语文   数学   英语   化学   生物  |  ");
for(i=0;i<N;i++){
printf("%5.2f  ",arr1[i]);
}
putchar('\n');
printf("-1-返回主菜单,-2-查寻学科最小值,-3-查询学科平均值:");
scanf("%d",&x);
if (x==1) index();
if(x==2) min();
if(x==3) ave1();
}
