//就是进行比较，两个数值相等的时候，则就成功了，否则就失败
void findid(){
int x,y;
 struct stu *p;
  printf("请输入您要查询的学号:");
  scanf("%d",&x);
      p = s;
  //  puts("学号    姓名    语文     数学     英语     化学     生物      班级     学院");
    for(;p<s+5;p++)
        if((*p).num==x)
  printf("%d %8s %8.2f %8.2f %8.2f %8.2f %8.2f %8d %8s",p->num,p->name,p->score[0],p->score[1],p->score[2],p->score[3],p->score[4],p->classs,p->subject);
   putchar('\n');
   printf("1 继续查询 2 返回主菜单 :");
   scanf("%d",&y);
   if(y==1) findid();
   else index();
}
