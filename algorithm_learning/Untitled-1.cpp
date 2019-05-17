// // // // // // // // //2019 年 4 月 6 日 21:31:21
// // // // // // // // //Author:软件 172 徐正佳
// // // // // // // // #include<iostream>
// // // // // // // // using namespace std;
// // // // // // // // struct List //不带头结点的双向链表的元素的创建、查找、插入、删除等基本操作。
// // // // // // // // {
// // // // // // // //     int num;
// // // // // // // //     struct List *pre;
// // // // // // // //     struct List *next;
// // // // // // // // };
// // // // // // // // void ListCreat(struct List &list) //创建链表,一开始不需要指明链表大小，因为是动态的
// // // // // // // // {
// // // // // // // //     list.pre=NULL;
// // // // // // // //     list.next=NULL;
// // // // // // // // }
// // // // // // // // int ListSearch(struct List &list,int j) //查找第 j 个元素
// // // // // // // // {
// // // // // // // //     struct List *head=&list;
// // // // // // // //     for(int i=0;i<j;i++) //本链表默认首元素为第零个，和数组一样，故循环如此
// // // // // // // //     head=head->next;
// // // // // // // //     return head->num;
// // // // // // // // }
// // // // // // // // void ListInsert(struct List &list,int n,int j) //插入元素 n 为第 j 个元素
// // // // // // // // {
// // // // // // // //     if(!j)
// // // // // // // //     {
// // // // // // // //         struct List *head=(struct List *)malloc(sizeof(struct List));
// // // // // // // //         if(list.next==NULL)
// // // // // // // //         {
// // // // // // // //             list.num=n;
// // // // // // // //             return;
// // // // // // // //         }
// // // // // // // //         head->num=list.num;
// // // // // // // //         list.num=n;
// // // // // // // //         head->next=list.next;
// // // // // // // //         list.next=head;
// // // // // // // //     }
// // // // // // // //     else
// // // // // // // //     {
// // // // // // // //         struct List *head=&list;
// // // // // // // //         for(int i=1;i<j;i++)
// // // // // // // //             head=head->next;
// // // // // // // //         struct List *insert=(struct List *)malloc(sizeof(struct List));
// // // // // // // //         insert->num=n;
// // // // // // // //         insert->pre=head;
// // // // // // // //         insert->next=head->next;
// // // // // // // //         head->next=insert;
// // // // // // // //     }
// // // // // // // // }
// // // // // // // // void ListDel(struct List &list,int j) //删除第 j 个元素
// // // // // // // // {
// // // // // // // //     struct List *head=&list;
// // // // // // // //     if(!j)
// // // // // // // //     {
// // // // // // // //         head=list.next;
// // // // // // // //         list.num=list.next->num;
// // // // // // // //         list.next=list.next->next;
// // // // // // // //         list.next->pre=&list;
// // // // // // // //         free(head);
// // // // // // // //     }
// // // // // // // //     else
// // // // // // // //     {
// // // // // // // //         for(int i=1;i<j;i++)
// // // // // // // //         head=head->next;
// // // // // // // //         struct List *del=head->next;
// // // // // // // //         head->next=del->next;
// // // // // // // //         head->next->pre=head;
// // // // // // // //         free(del);
// // // // // // // //     }
// // // // // // // // }
// // // // // // // // void ListPrint(struct List &list) //输出
// // // // // // // // {
// // // // // // // //     for(struct List *head=&list;head!=NULL;head=head->next)
// // // // // // // //     cout<<head->num<<" ";
// // // // // // // // }
// // // // // // // // int main() //主程序
// // // // // // // // {
// // // // // // // //     struct List list;
// // // // // // // //     ListCreat(list);
// // // // // // // //     for(int i=0;i<10;i++)
// // // // // // // //         ListInsert(list,i,i); //为测试赋值
// // // // // // // //     cout<<ListSearch(list,5)<<endl; //查找
// // // // // // // //     ListInsert(list,100,8); //插入
// // // // // // // //     ListDel(list,0); //删除
// // // // // // // //     ListDel(list,3); //删除
// // // // // // // //     ListInsert(list,100,0); //插入
// // // // // // // //     ListPrint(list); //输出
// // // // // // // //     return 0;
// // // // // // // // }
// // // // // // // // // 测试结果：
// // // // // // // // // 5
// // // // // // // // // 100 1 2 3 5 6 7 100 8 9

// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // struct LinkList  /* 链表结构声明  */
// // // // // {
// // // // //     int num;  /* 数据域  */
// // // // //     struct LinkList *next;  /* 指针域  */
// // // // // };
// // // // // void ListInsert(struct LinkList &list,int n,int j) //插入元素 n 为第 j 个元素
// // // // // {
// // // // //     if(!j)
// // // // //     {
// // // // //         struct LinkList *head=(struct LinkList *)malloc(sizeof(struct LinkList));
// // // // //         if(list.next==NULL)
// // // // //         {
// // // // //             list.num=n;
// // // // //             return;
// // // // //         }
// // // // //         head->num=list.num;
// // // // //         list.num=n;
// // // // //         head->next=list.next;
// // // // //         list.next=head;
// // // // //     }
// // // // //     else
// // // // //     {
// // // // //         struct LinkList *head=&list;
// // // // //         for(int i=1;i<j;i++)
// // // // //         head=head->next;
// // // // //         struct LinkList *insert=(struct LinkList *)malloc(sizeof(struct LinkList));
// // // // //         insert->num=n;
// // // // //         insert->next=head->next;
// // // // //         head->next=insert;
// // // // //     }
// // // // // }
// // // // // void MergeList(LinkList &La, LinkList &Lb, LinkList &Lc)
// // // // // {  //合并链表 La 和 Lb，合并后的新表使用头指针 Lc 指向
// // // // //     auto pa=&La; auto pb=&Lb;
// // // // //     //pa 和 pb 分别是链表 La 和 Lb 的工作指针,初始化为相应链表的第一个结点
// // // // //     Lc=La; //用 La 的头结点作为 Lc 的头结点
// // // // //     auto pc=La;
// // // // //     Lc.next=NULL;
// // // // //     auto q=pb;
// // // // //     while(pa||pb )
// // // // //     {  //只要存在一个非空表，用 q 指向待摘取的元素
// // // // //         if(!pa) { q=pb; pb=pb->next;}
// // // // //         //La 表为空，用 q 指向 pb，pb 指针后移
// // // // //         else if(!pb) {q=pa; pa=pa->next;}
// // // // //         //Lb 表为空，用 q 指向 pa，pa 指针后移
// // // // //         else if(pa->num<=pb->num) {q=pa; pa=pa->next;}
// // // // //         //取较小者（包括相等）La 中的元素，用 q 指向 pa，pa 指针后移
// // // // //         else {q=pb; pb=pb->next;}
// // // // //         //取较小者 Lb 中的元素，用 q 指向 pb，pb 指针后移
// // // // //         q->next = Lc.next; Lc.next = q;
// // // // //         //将 q 指向的结点插在 Lc 表的表头结点之后
// // // // //     }
// // // // //     Lc=*Lc.next;
// // // // // }
// // // // // void ListPrint(struct LinkList &list) //输出
// // // // // {
// // // // //     for(struct LinkList *head=&list;head!=NULL;head=head->next)
// // // // //     cout<<head->num<<" ";
// // // // //     cout<<endl;
// // // // // }
// // // // // int main()
// // // // // {
// // // // //     struct LinkList list1;
// // // // //     list1.next=NULL;
// // // // //     for(int i=0;i<10;i++)
// // // // //         ListInsert(list1,i,i); //为测试赋值
// // // // //     struct LinkList list2;
// // // // //     list2.next=NULL;
// // // // //     for(int i=0;i<10;i++)
// // // // //         ListInsert(list2,i+100,i); //为测试赋值
// // // // //     struct LinkList list3;
// // // // //     ListPrint(list1);
// // // // //     ListPrint(list2);
// // // // //     MergeList(list1,list2,list3);
// // // // //     ListPrint(list3);
// // // // //     return 0;
// // // // // }

// // // // // // //2019 年 4 月 6 日 22:21:51
// // // // // // //Author:软件 172 徐正佳
// // // // // // #include <iostream>
// // // // // // using namespace std;
// // // // // // struct List
// // // // // // {
// // // // // //     int *elem;
// // // // // //     int len;
// // // // // // };
// // // // // // void solve(struct List &list) //逆置
// // // // // // {
// // // // // //     for (int i = 0; i < list.len / 2; i++)
// // // // // //         swap(list.elem[i], list.elem[list.len - i - 1]);
// // // // // // }
// // // // // // int main()
// // // // // // {
// // // // // //     struct List list;
// // // // // //     int a[] = {1, 2, 3, 4, 5};
// // // // // //     list.elem = a;
// // // // // //     list.len = 5;
// // // // // //     solve(list);
// // // // // //     for (int i = 0; i < list.len; i++) cout << list.elem[i] << " ";
// // // // // //     return 0;
// // // // // // }
// // // // // // // 输出结果
// // // // // // // 5 4 3 2 1

// // // // #include <cstdio>
// // // // #include <cstdlib>
// // // // #include <iostream>
// // // // using namespace std;
// // // // struct student
// // // // {
// // // //     int id;
// // // //     char name[20];
// // // //     char sex[2];
// // // //     int age;
// // // // };
// // // // struct llist /* 链表结构声明  */
// // // // {
// // // //     struct student num; /* 数据域  */
// // // //     struct llist *next; /* 指针域  */
// // // // };
// // // // typedef struct llist node; /* 类型重定义  */
// // // // typedef node *llink;       /* 重定义指针类型  */
// // // // /*――――――――――――链表的输出――――――――――――*/
// // // // void printllist(llink head)
// // // // {
// // // //     llink ptr;
// // // //     ptr = head->next;   /*  指向真正的起始  */
// // // //     while (ptr != NULL) /*  链表遍历循环   */
// // // //     {
// // // //         printf("[%d,%s,%s,%d]", ptr->num.id, ptr->num.name, ptr->num.sex, ptr->num.age); /* 
// // // // 输出结点数据  */
// // // //         printf("\n");
// // // //         ptr = ptr->next; /*  指向下一结点  */
// // // //     }
// // // //     printf("\n"); /*  换行  */
// // // // }
// // // // /*――――――――――――链表的创建――――――――――――*/
// // // // llink Initllist(llist &L)
// // // // {
// // // //     llink head; /*  链表的开始指针  */
// // // //     /* 建立开头结点 */
// // // //     head = (llink)malloc(sizeof(node)); /*  分配内存  */
// // // //     if (!head)                          /*  检查指针  */
// // // //         return NULL;
// // // //     head->num.id = 0;
// // // //     head->next = NULL;
// // // //     return head;
// // // // }
// // // // /*――――――――――――链表的结点插入―――――――――――*/
// // // // llink insertnode(llink head, student S)
// // // // {
// // // //     int i;
// // // //     int j;
// // // //     llink ptr;
// // // //     llink ptr1;
// // // //     llink mnew;                         /* 新结点指针变量  */
// // // //     mnew = (llink)malloc(sizeof(node)); /* 建立新结点 */
// // // //     if (!mnew)
// // // //         return NULL;
// // // //     mnew->num = S;     /* 建立结点内容  */
// // // //     mnew->next = NULL; /* 设定指针初值  */
// // // //     /* 如果 ptr 等於头节点则是插入第一个结点 */
// // // //     i = S.id;
// // // //     ptr1 = head;
// // // //     ptr = head->next;
// // // //     for (j = 1; j <= head->num.id; j++)
// // // //     {
// // // //         if (ptr->num.id < i)
// // // //         {
// // // //             ptr1 = ptr;
// // // //             ptr = ptr->next;
// // // //         }
// // // //     }
// // // //     mnew->next = ptr1->next;
// // // //     ptr1->next = mnew;
// // // //     head->num.id++;
// // // //     return head;
// // // // }
// // // // /*――――――――――――链表的结点删除―――――――――――－*/
// // // // llink delete1node(llink head, int i)
// // // // {
// // // //     llink previous;
// // // //     llink delete1ptr;
// // // //     llink ptr;
// // // //     delete1ptr = head;
// // // //     previous = head;
// // // //     ptr = head->next;
// // // //     if (!ptr)
// // // //     {
// // // //         printf("空表！\n");
// // // //         return head;
// // // //     };
// // // //     while (ptr->num.id != i)
// // // //     {
// // // //         previous = ptr;
// // // //         ptr = ptr->next;
// // // //         if (!ptr)
// // // //         {
// // // //             printf("无该学号！\n");
// // // //             return head;
// // // //         }
// // // //     }
// // // //     delete1ptr = previous->next;
// // // //     previous->next = previous->next->next;
// // // //     free(delete1ptr);
// // // //     head->num.id--;
// // // //     return head;
// // // // }
// // // // /*―――――――――――――主程序―――――――――――*/
// // // // void main()
// // // // {
// // // //     char flag,flag1,b[20],c[2];
// // // //     int a,d,delete1id,i;
// // // //     student s1;
// // // //     llist llist1;
// // // //     llink head;               /* 指向链表开始  */
// // // //     head = Initllist(llist1); /* 建立链表  */
// // // //     if (!head)
// // // //     {
// // // //         printf("内存分配失败! \n");
// // // //         exit(1);
// // // //     }
// // // //     printf("原来的链表: ");
// // // //     printllist(head); /* 输出原来链表  */
// // // //     printf("插入新结点?Y?N?\n");
// // // //     cin >> flag;
// // // //     while (flag == 'Y')
// // // //     {
// // // //         printf("输入学生信息:\n");
// // // //         cin >> a >> b >> c >> d;
// // // //         s1.id = a;
// // // //         for (i = 0; i < 20; i++)
// // // //         {
// // // //             s1.name[i] = b[i];
// // // //         }
// // // //         for (i = 0; i < 2; i++)
// // // //         {
// // // //             s1.sex[i] = c[i];
// // // //         }
// // // //         s1.age = d;
// // // //         head = insertnode(head, s1); /* 插入新结点  */
// // // //         if (!head)
// // // //         {
// // // //             printf("内存分配失败! \n");
// // // //             exit(1);
// // // //         }
// // // //         printf("当前的链表: ");
// // // //         printllist(head);
// // // //         printf("插入新结点?Y?N?\n");
// // // //         cin >> flag;
// // // //     }
// // // //     /* 删除链内结点 */
// // // //     printf("删除结点?Y?N?\n");
// // // //     cin >> flag1;
// // // //     while (flag1 == 'Y')
// // // //     {
// // // //         printf("输入学号:");
// // // //         scanf("%d", &delete1id);
// // // //         head = delete1node(head, delete1id);
// // // //         printf("当前的链表: ");
// // // //         printllist(head);
// // // //         printf("删除结点?Y?N?\n");
// // // //         cin >> flag1;
// // // //     }
// // // //     printf("最后的链表: ");
// // // //     printllist(head); /*  输出结果  */
// // // // }





// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     double sum=0;
// // //     for(double i=1;i<1e10;i++)
// // //     {
// // //         sum+=1;
// // //     }
// // //     cout<<sum;
// // //     return 0;
// // // }



// // #include<iostream>
// // #include<algorithm>
// // #include<cstring>
// // #include<cmath>
// // #include<queue>
// // #include<vector>
// // #include<set>
// // #include<map>
// // #include<cstdio>
// // #define ll long long
// // #define mset(a,x) memset(a,x,sizeof(a))
 
// // using namespace std;




// // const double PI=acos(-1);
// // const int inf=0x3f3f3f3f;
// // const double eps=1e-12;
// // const int maxn=1e6+5;
// // const int mod=1e9+7;




// // // int dir[4][2]={0,1,1,0,0,-1,-1,0};
// // // ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
// // // ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
// // // ll inv(ll b){if(b==1)return 1; return (mod-mod/b)*inv(mod%b)%mod;}
// // // ll fpow(ll n,ll k){ll r=1;for(;k;k>>=1){if(k&1)r=r*n%mod;n=n*n%mod;}return r;}
// // // ll Fpow(ll n,ll k){ll r=1;for(;k;k>>=1){if(k&1)r=r*n;n=n*n;}return r;}
// // // ll upd(ll x,ll v){x=x+v>=mod?x+v-mod:x+v;return x;}



// // int s[maxn],prim[maxn],vis[maxn];
// // int m[maxn];
 
// // int main()
// // {
// // 	ll n,i,j,k;
// // 	k=0;
// // 	for(i=2;i<=100000;i++)
// // 	{
// // 		if(!vis[i])
// // 		{
// // 			prim[k++]=i;
// // 			for(j=i*i;j<=100000;j+=i)
// // 			vis[j]=1;
// // 		}
// // 	}
// //     ll huhiuhi=prim[k-1];
// // 	ll sum=0;
// // 	scanf("%lld",&n);
// // 	for(i=0;i<n;i++)
// // 	{
// // 		scanf("%d",&s[i]);
// // 		sum+=s[i];
// // 	}
// // 	ll minn=1e18;
// // 	for(i=0;i<k;i++)
// // 	{
// // 		if(sum%prim[i])
// // 		continue;
// // 		ll t=0;
// // 		for(j=0;j<n;j++)
// // 		{
// // 			m[j]=s[j]%prim[i];
// // 			t+=m[j];
// // 		}
// // 		t=t/prim[i];
// // 		sort(m,m+n);
// // 		ll sum_1=0,sum_2=0,sum_3=0;
// // 		for(j=n-1;j>=0;j--)
// // 		{
// // 			sum_1+=(m[j]+prim[i]-m[j]%prim[i]);
// // 			sum_2=sum_1/prim[i];
// // 			sum_3+=prim[i]-m[j]%prim[i];
// // 			if(sum_2==t)
// // 			{
// // 				minn=min(minn,sum_3);
// // 				break;
// // 			}
// // 		}
// // 	}
// // 	printf("%lld\n",minn);
// // }



// #include<iostream>
// #include<algorithm>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int a[10];
// 	for(int i=0;i<10;i++)
// 	{
// 		a[i]=rand();
// 	}
// 	sort(a,a+10,greater<int>());
// 	for(auto i:a)
// 	{
// 		cout<<i<<endl;
// 	}
// }



#include<stdio.h>
char *delete1(char *del,char ch){
	char *p=del;
	char *q=p;
	while(*p!='\0')
	{
		q=p;
		if(*q==ch) 
		{
			while(*q!='\0')
			{
				*q=*(q+1);
				q++;
				
			}
		}
		else	p++;
	}
	return (del);
 } 
int main (void)
{
	char str[20]="abcdefghijk";
	char *p=str;
	printf("before delete1 : %s \n",p);
	p=delete1(p,'a');
	printf("after delete1 : %s \n",p);
 } 