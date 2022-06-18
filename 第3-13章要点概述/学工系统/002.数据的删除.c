//这个数据的删除，做的不是那么完美
void del(){ //这个是对数据来进行删除的函数
  //怎样来进行对数组的删除呢
 int x,y,z,i,j;
 struct stu *p;
  printf("请输入您要查询学生信息的学号:");
  scanf("%d",&x);
  if(x==101) i=0;
  if(x==102) i=1;
  if(x==103) i=2;
  if(x==104) i=3;
  if(x==105) i=4;
      p = s;  //这是指针
    for(;p<s+5;p++)
    if((*p).num==x)
  printf("%d %8s %8.2f %8.2f %8.2f %8.2f %8.2f %8d %8s\n",p->num,p->name,p->score[0],p->score[1],p->score[2],p->score[3],p->score[4],p->classs,p->subject);

  printf("是否删除<Yes...1/No...0>");
  scanf("%d",&z);
 char cite[20]="无效数据";
  //将这个所有的信息都抹去
  if(z==1){
    s[i].num = 0;
    //strcpy(s[i].name,0);
    strcpy(s[i].name,cite);
    //成绩全部赋值为0
    for(j=0;j<5;j++){
        s[i].score[j]= 0;
    }
   }
  //这个是第二种的方法
  void del()//删除学生信息
{
    int x,i,j,flag=0,num1;
    printf("请输入您要删除学生信息的学号:\n");
    scanf("%d",&num1);
    if(num1==101) i=0;
    if(num1==102) i=1;
    if(num1==103) i=2;
    if(num1==104) i=3;
    if(num1==105) i=4;
    printf("     学号    姓名     语文     数学     英语     化学     生物     班级           专业\n");
    printf("%8d %8s %8.1f %8.1f %8.1f %8.1f %8.1f %8d %20s\n",s[i].num,s[i].name,s[i].score[0],s[i].score[1],s[i].score[2],s[i].score[3],s[i].score[4],s[i].class1,s[i].sub);
    for(i=0;i<n;i++)
    {
        if(s[i].num==num1)
        {
            flag=1;
            for(j=1;j<n-1;j++)
            {
                s[j]=s[j+1];
            }
        }
    }
    if(flag==1)
    {
        printf("删除成功\n");
        n--;
    }
    printf("1 返回主菜单 2 继续删除");
    scanf("%d",&x);
    if(x==1) index();
    if(x==2) del();
}
