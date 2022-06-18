
//看循环中，有个结构体的使用，他其实实用的很巧妙
//在对于一些单纯的问题之中，要进行大量重复的操作，
//但是结构体，你可以用结构体的名称来进行修改，换位置，十分的方便。
void ave_sort(){
 int i,j,t;
    float temp;
    char temp2[20]="0"; //利用字符串来进行赋值
    printf("按照学生的平均分来进行降序\n");
    // cite_ave[5] 这个是平均分的数组
    for(i=0;i<N-1;i++){
        for(j=0;j<N-1-i;j++){
            if(cite_ave[j] < cite_ave[j+1]){
                    //还要进行五个变化处理
                temp =  cite_ave[j];
                cite_ave[j] = cite_ave[j+1];
                cite_ave[j+1] = temp;
                strcpy(temp2,s[j].name);//将人名字进行换位
                strcpy(s[j].name,s[j+1].name);
                strcpy(s[j+1].name,temp2);
            }
        }
    }
    printf("打印均分高低排列\n");
   for(i=0;i<N;i++){
    printf("%s的平均分是:%.2f\n",s[i].name,cite_ave[i]);
   }
   printf(" 1 返回主菜单 2 查寻全科学生成绩 3 修改信息:");
    scanf("%d",&t);
    if (t==1) index();
    if(t==2) list();
    if(t==3) update();
}
