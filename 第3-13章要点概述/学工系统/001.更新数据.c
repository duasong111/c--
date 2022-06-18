//这个函数的原理是查询到具体的某一项，然后在此定义一个新的，可输入的数值，并用这个数组将原数组给覆盖掉
//注意：对于字符类型，尤其是人名的情况，则运用库函数strcpy这个函数
//此处也运用到了指针，指针的指向操作
//缺点就是覆盖的那个太过于雍杂。
void update(){ //对信息进行更改的函数
   int x,y,i;
 struct stu *p;
  printf("请输入您要查询的学号,并进行更改:");
  scanf("%d",&x);
  if(x==101) i=0;
  if(x==102) i=1;
  if(x==103) i=2;
  if(x==104) i=3;
  if(x==105) i=4;
      p = s;
    for(;p<s+5;p++)
        if((*p).num==x)
  printf("%d %8s %8.2f %8.2f %8.2f %8.2f %8.2f %8d %8s",p->num,p->name,p->score[0],p->score[1],p->score[2],p->score[3],p->score[4],p->classs,p->subject);
   putchar('\n');
   printf("请输入你想更改的项目\n：1-学号 2-姓名 3-语文分 4 -数学分 5-英语分 6-化学分 7-生物分 8-班级 9-学院：");
    int x1;
    int num1;
    char name[20];
    float  score[5];
    int classs;
    char sub[20];
    scanf("%d",&x);
    //使用if的条件语句
     if(x==1){
    printf("您将%d修改成了:",s[i].num);
         scanf("%d",&num1);
         s[i].num = num1;
     }
     if(x==2){
    printf("您将%s修改成了:",s[i].name);
         scanf("%s",&name);
         strcpy(s[i].name,name);
     }
     if(x==3){
    printf("您将%f修改成了:",s[i].score[0]);
         scanf("%f",&score[0]);
         s[i].score[0]=score[0];
     }
     if(x==4){
    printf("您将%f修改成了:",s[i].score[1]);
         scanf("%f",&score[1]);
         s[i].score[1]=score[1];
     }
     if(x==5){
    printf("您将%f修改成了:",s[i].score[2]);
         scanf("%f",&score[2]);
         s[i].score[2]=score[2];
     }
     if(x==6){
   printf("您将%f修改成了:",s[i].score[3]);
         scanf("%f",&score[3]);
         s[i].score[3]=score[3];
     }
     if(x==7){
   printf("您将%f修改成了:",s[i].score[4]);
         scanf("%f",&score[4]);
         s[i].score[4]=score[4];
     }
     if(x==8){
    printf("您将%d修改成了",s[i].classs);
        scanf("%d",&classs);
         strcpy(s[i].classs,classs);
     }
     if(x==9){
    printf("您将%s修改成了",s[i].subject);
         scanf("%s",sub);
         strcpy(s[N].subject,sub);
     }
   printf("1 继续更改 -2 返回主菜单-3检查是否更改,并打印全部:");
   scanf("%d",&y);
   if(y==1) update();
   if(y==2)index();
   if(y==3) list();
  }


