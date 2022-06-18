//这个也是我这个程序的一个亮点，for三重循环的使用
void sort(){ //某一同学的各科成绩进行排序
    int i,j,z,t;
    float temp;
    printf("按照全部学生高-低分数排序如下所示\n");
     for(z=0;z<N;z++){ //这是五个人
           for(i=0;i<N-1;i++){ //冒泡排序法
                for(j=0;j<N-1-i;j++){
               if(s[z].score[j] < s[z].score[j+1]){
                temp  =   s[z].score[j] ;
                s[z].score[j]  =  s[z].score[j+1];
               s[z].score[j+1] = temp; }
                    }
              }
     }
     for(i=0;i<N;i++){
            printf("%s的降序为  : ",s[i].name);
        for(j=0;j<N;j++){
           // printf("%s的分数降序为%.2f ",s[i].name,s[i].score[j]);
           printf("%.2f  ",s[i].score[j]);
        }
        putchar('\n');
     }
     printf(" 1 返回主菜单 2 求平均值 3 查询最小值:");
    scanf("%d",&t);
    if (t==1) index();
    if(t==2) sort();
    if(t==3) min();
}
