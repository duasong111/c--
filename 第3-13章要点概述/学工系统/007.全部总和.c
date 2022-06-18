//这个是全部总和
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void login(); //登录函数
void index(); //显示主菜单函数
void findid();//学号查询函数
void list(); //显示全部学生信息
void del(); // 删除学生信息
void insert(); //添加学生信息
void update(); //修改学生信息
void max(); //求最大值
void min();//求最小值
void ave1();//求平均值
void sort(); //对某同学成绩排序
void ave_sort();//学生平均成绩排序
int N = 5,k=0;
   struct user
   {
       char username[20];
       char passward[20];
   }user[3]={{"lily,1111"},{"aaa,2222"},{"jjj,6666"}};
//这个是一个结构体
 struct stu{
   int num;
   char name[20];
   float score[5];
   int classs;
   char subject[50];
   };
   struct stu s[] ={ //让其自动分配空间
   {101,"张三",{23,21,35,32,45},2102,"信科"},
   {102,"李四",{33,41,45,34,65},2102,"信科"},
   {103,"王五",{83,31,35,32,35},2102,"信科"},
   {104,"麻六",{76,54,87,74,95},2102,"信科"},
   {105,"赵七",{83,95,84,54,65},2102,"信科"}
   };
float arr1[5],arr2[5],ave[5],cite_ave[5];
/*float arr2[5];
float  ave[5];
float cite_ave[5]; */
int main()
{
     login();
     index();
      list();
     findid();
     del();
    insert();
    update();
    return 0;
}
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
void min(){ //来获得最小值
    int i,j,x,z;
for(j=0;j<N;j++){
    arr2[j]=s[0].score[j];
        for(z=0;z<N;z++){
            if(arr2[z]>s[j].score[z])  arr2[z] = s[j].score[z];
        }
}
puts("-------------------------------");
puts("每门成绩的最低分为");
puts("语文   数学   英语   化学   生物   |   ");
for(i=0;i<N;i++){
printf("%5.2f  ",arr2[i]);
}
putchar('\n');
printf("1 返回主菜单 2 查寻学科最大值 3 查询学科平均值:");
scanf("%d",&x);
if (x==1) index();
if(x==2) max();
if(x==3) ave1();
}
void ave1(){ //来进行求平均值
int i,j,m;
 for(j=0;j<N;j++){
        ave[j]=0;
       for(i=0;i<N;i++){
            ave[j] += s[j].score[i];
         }
    }
    for(i=0;i<N;i++){
        cite_ave[i] = ave[i] / 5;  //将平均的数值传到另外一个新的数组中
    }//现在ave[j] 中储存每位学生的平均值
for(i=0;i<N;i++){
printf("%s的平均:%.2f  \n",s[i].name,cite_ave[i]);
}
putchar('\n');
printf("1 返回主菜单 2 查寻最大值 3 将平均值进行降序:");
scanf("%d",&m);
if (m==1) index();
if(m==2) max();
if(m==3) ave_sort();
}
void sort(){ //某一同学的各科成绩进行排序
    int i,j,z,t;
    float temp;
    printf("按照全部学生高-低分数排序如下所示\n");
     for(z=0;z<N;z++){ //这是五个人
           for(i=0;i<N-1;i++){
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
void login(){  //登录
 char name[20]; //输入用户名
 char pwd[20]; //密码
 int i;
 printf("请输入用户名:");
 gets(name);
 printf("请输入密码:");
 gets(pwd);
 for(i=0;i<5;i++){
 if(strcmp(name,user[i].username)==0&&strcmp(pwd,user[i].passward)==0)
    index();
    break;
     }
  if(i==5){
    printf("登录失败\n");
    login();
}
}
void index(){
    int x;
    printf("*********************************************************\n");
   printf("*\t\t欢迎来到学生成绩管理系统v1.0\t\t*\n");
   printf("*-------------------------------------------------------*\n");
   printf("*\t\t1.查询功能\t\t\t\t*\n");
   printf("*\t\t2.添加信息\t\t\t\t*\n");
   printf("*\t\t3.显示全部的信息\t\t\t*\n");
   printf("*\t\t4.删除学生的信息\t\t\t*\n");
   printf("*\t\t5.修改信息\t\t\t\t*\n");
   printf("*\t\t6.退出系统\t\t\t\t*\n");
   printf("*\t\t7.显示每门科最高成绩\t\t\t*\n");
   printf("*\t\t8.显示每门科最低成绩\t\t\t*\n");
   printf("*\t\t9.显示每门课平均成绩\t\t\t*\n");
   printf("*\t\t10.将某一同学成绩高-低排序\t\t*\n");
    printf("*\t\t11.学生平均成绩排序\t\t\t*\n");
   printf("*********************************************************\n");
    printf("请输入您选择的编号:");
    scanf("%d",&x);
    switch(x){
    case 1:findid(); break;
    case 2: insert();  break;
    case 3: list();  break;
    case 4: del();  break;
    case 5: update();  break;
    case 6: login();  break;
    case 7: max();  break;
    case 8: min(); break;
   case 9: ave1(); break;
   case 10: sort(); break;
   case 11:ave_sort(); break;
    }
}
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
void insert(){
    int x,i;
    int num;
    char name[20];
    float  score[5];
    int classs;
    char sub[20];
    printf("请输入要添加的学号:");
    scanf("%d",&num);
    printf("请输入要添加的姓名:");
    scanf("%s",&name);
    for(i=0;i<5;i++){
        printf("请输入第%d门课成绩：",i+1);
        scanf("%f",&score[i]);
    }
     printf("请输入要添加的班级号:");
    scanf("%d",&classs);
    printf("请输入要添加的专业：");
    scanf("%s",sub);
    s[N].num = num;
    strcpy(s[N].name,name);
    for(i=0;i<5;i++){ //分数的输入
        s[N].score[i]=score[i];
    }
    s[N].classs=classs;
    strcpy(s[N].subject,sub);
    N++;
    printf("1 返回主菜单 ----2 继续添加---3检查是否输入,并打印全部");
    scanf("%d",&x);
    if(x==1) index();
    if(x==2) insert();
    if(x==3) list();
}
 void   list(){ //打印学生的全部成绩
     int x;
    struct stu *p;
      p = s;
    puts("学号    姓名    语文     数学     英语     化学     生物      班级     学院");
    for(;p<s+N;p++){
  printf("%d %8s %8.2f %8.2f %8.2f %8.2f %8.2f %8d %8s\n",p->num,p->name,p->score[0],p->score[1],p->score[2],p->score[3],p->score[4],p->classs,p->subject);
    }
    printf("1 继续查询 2 返回主菜单3 输出均值排列:");
   scanf("%d",&x);
   if(x==1) findid();
   if(x==2) index();
   if(x==3) sort();
 }
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
   printf(" 1 继续删除 2 返回主菜单 3 检查是否删除:");
   scanf("%d",&y);
   if(y==1) del();
   if(y==2)index();
   if(y==3) list();

 }
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
