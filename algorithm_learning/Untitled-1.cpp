// // // // // // // // //2019 �� 4 �� 6 �� 21:31:21
// // // // // // // // //Author:��� 172 ������
// // // // // // // // #include<iostream>
// // // // // // // // using namespace std;
// // // // // // // // struct List //����ͷ����˫�������Ԫ�صĴ��������ҡ����롢ɾ���Ȼ���������
// // // // // // // // {
// // // // // // // //     int num;
// // // // // // // //     struct List *pre;
// // // // // // // //     struct List *next;
// // // // // // // // };
// // // // // // // // void ListCreat(struct List &list) //��������,һ��ʼ����Ҫָ�������С����Ϊ�Ƕ�̬��
// // // // // // // // {
// // // // // // // //     list.pre=NULL;
// // // // // // // //     list.next=NULL;
// // // // // // // // }
// // // // // // // // int ListSearch(struct List &list,int j) //���ҵ� j ��Ԫ��
// // // // // // // // {
// // // // // // // //     struct List *head=&list;
// // // // // // // //     for(int i=0;i<j;i++) //������Ĭ����Ԫ��Ϊ�������������һ������ѭ�����
// // // // // // // //     head=head->next;
// // // // // // // //     return head->num;
// // // // // // // // }
// // // // // // // // void ListInsert(struct List &list,int n,int j) //����Ԫ�� n Ϊ�� j ��Ԫ��
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
// // // // // // // // void ListDel(struct List &list,int j) //ɾ���� j ��Ԫ��
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
// // // // // // // // void ListPrint(struct List &list) //���
// // // // // // // // {
// // // // // // // //     for(struct List *head=&list;head!=NULL;head=head->next)
// // // // // // // //     cout<<head->num<<" ";
// // // // // // // // }
// // // // // // // // int main() //������
// // // // // // // // {
// // // // // // // //     struct List list;
// // // // // // // //     ListCreat(list);
// // // // // // // //     for(int i=0;i<10;i++)
// // // // // // // //         ListInsert(list,i,i); //Ϊ���Ը�ֵ
// // // // // // // //     cout<<ListSearch(list,5)<<endl; //����
// // // // // // // //     ListInsert(list,100,8); //����
// // // // // // // //     ListDel(list,0); //ɾ��
// // // // // // // //     ListDel(list,3); //ɾ��
// // // // // // // //     ListInsert(list,100,0); //����
// // // // // // // //     ListPrint(list); //���
// // // // // // // //     return 0;
// // // // // // // // }
// // // // // // // // // ���Խ����
// // // // // // // // // 5
// // // // // // // // // 100 1 2 3 5 6 7 100 8 9

// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // struct LinkList  /* ����ṹ����  */
// // // // // {
// // // // //     int num;  /* ������  */
// // // // //     struct LinkList *next;  /* ָ����  */
// // // // // };
// // // // // void ListInsert(struct LinkList &list,int n,int j) //����Ԫ�� n Ϊ�� j ��Ԫ��
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
// // // // // {  //�ϲ����� La �� Lb���ϲ�����±�ʹ��ͷָ�� Lc ָ��
// // // // //     auto pa=&La; auto pb=&Lb;
// // // // //     //pa �� pb �ֱ������� La �� Lb �Ĺ���ָ��,��ʼ��Ϊ��Ӧ����ĵ�һ�����
// // // // //     Lc=La; //�� La ��ͷ�����Ϊ Lc ��ͷ���
// // // // //     auto pc=La;
// // // // //     Lc.next=NULL;
// // // // //     auto q=pb;
// // // // //     while(pa||pb )
// // // // //     {  //ֻҪ����һ���ǿձ��� q ָ���ժȡ��Ԫ��
// // // // //         if(!pa) { q=pb; pb=pb->next;}
// // // // //         //La ��Ϊ�գ��� q ָ�� pb��pb ָ�����
// // // // //         else if(!pb) {q=pa; pa=pa->next;}
// // // // //         //Lb ��Ϊ�գ��� q ָ�� pa��pa ָ�����
// // // // //         else if(pa->num<=pb->num) {q=pa; pa=pa->next;}
// // // // //         //ȡ��С�ߣ�������ȣ�La �е�Ԫ�أ��� q ָ�� pa��pa ָ�����
// // // // //         else {q=pb; pb=pb->next;}
// // // // //         //ȡ��С�� Lb �е�Ԫ�أ��� q ָ�� pb��pb ָ�����
// // // // //         q->next = Lc.next; Lc.next = q;
// // // // //         //�� q ָ��Ľ����� Lc ��ı�ͷ���֮��
// // // // //     }
// // // // //     Lc=*Lc.next;
// // // // // }
// // // // // void ListPrint(struct LinkList &list) //���
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
// // // // //         ListInsert(list1,i,i); //Ϊ���Ը�ֵ
// // // // //     struct LinkList list2;
// // // // //     list2.next=NULL;
// // // // //     for(int i=0;i<10;i++)
// // // // //         ListInsert(list2,i+100,i); //Ϊ���Ը�ֵ
// // // // //     struct LinkList list3;
// // // // //     ListPrint(list1);
// // // // //     ListPrint(list2);
// // // // //     MergeList(list1,list2,list3);
// // // // //     ListPrint(list3);
// // // // //     return 0;
// // // // // }

// // // // // // //2019 �� 4 �� 6 �� 22:21:51
// // // // // // //Author:��� 172 ������
// // // // // // #include <iostream>
// // // // // // using namespace std;
// // // // // // struct List
// // // // // // {
// // // // // //     int *elem;
// // // // // //     int len;
// // // // // // };
// // // // // // void solve(struct List &list) //����
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
// // // // // // // ������
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
// // // // struct llist /* ����ṹ����  */
// // // // {
// // // //     struct student num; /* ������  */
// // // //     struct llist *next; /* ָ����  */
// // // // };
// // // // typedef struct llist node; /* �����ض���  */
// // // // typedef node *llink;       /* �ض���ָ������  */
// // // // /*�D�D�D�D�D�D�D�D�D�D�D�D���������D�D�D�D�D�D�D�D�D�D�D�D*/
// // // // void printllist(llink head)
// // // // {
// // // //     llink ptr;
// // // //     ptr = head->next;   /*  ָ����������ʼ  */
// // // //     while (ptr != NULL) /*  �������ѭ��   */
// // // //     {
// // // //         printf("[%d,%s,%s,%d]", ptr->num.id, ptr->num.name, ptr->num.sex, ptr->num.age); /* 
// // // // ����������  */
// // // //         printf("\n");
// // // //         ptr = ptr->next; /*  ָ����һ���  */
// // // //     }
// // // //     printf("\n"); /*  ����  */
// // // // }
// // // // /*�D�D�D�D�D�D�D�D�D�D�D�D����Ĵ����D�D�D�D�D�D�D�D�D�D�D�D*/
// // // // llink Initllist(llist &L)
// // // // {
// // // //     llink head; /*  ����Ŀ�ʼָ��  */
// // // //     /* ������ͷ��� */
// // // //     head = (llink)malloc(sizeof(node)); /*  �����ڴ�  */
// // // //     if (!head)                          /*  ���ָ��  */
// // // //         return NULL;
// // // //     head->num.id = 0;
// // // //     head->next = NULL;
// // // //     return head;
// // // // }
// // // // /*�D�D�D�D�D�D�D�D�D�D�D�D����Ľ�����D�D�D�D�D�D�D�D�D�D�D*/
// // // // llink insertnode(llink head, student S)
// // // // {
// // // //     int i;
// // // //     int j;
// // // //     llink ptr;
// // // //     llink ptr1;
// // // //     llink mnew;                         /* �½��ָ�����  */
// // // //     mnew = (llink)malloc(sizeof(node)); /* �����½�� */
// // // //     if (!mnew)
// // // //         return NULL;
// // // //     mnew->num = S;     /* �����������  */
// // // //     mnew->next = NULL; /* �趨ָ���ֵ  */
// // // //     /* ��� ptr ���ͷ�ڵ����ǲ����һ����� */
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
// // // // /*�D�D�D�D�D�D�D�D�D�D�D�D����Ľ��ɾ���D�D�D�D�D�D�D�D�D�D�D��*/
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
// // // //         printf("�ձ�\n");
// // // //         return head;
// // // //     };
// // // //     while (ptr->num.id != i)
// // // //     {
// // // //         previous = ptr;
// // // //         ptr = ptr->next;
// // // //         if (!ptr)
// // // //         {
// // // //             printf("�޸�ѧ�ţ�\n");
// // // //             return head;
// // // //         }
// // // //     }
// // // //     delete1ptr = previous->next;
// // // //     previous->next = previous->next->next;
// // // //     free(delete1ptr);
// // // //     head->num.id--;
// // // //     return head;
// // // // }
// // // // /*�D�D�D�D�D�D�D�D�D�D�D�D�D������D�D�D�D�D�D�D�D�D�D�D*/
// // // // void main()
// // // // {
// // // //     char flag,flag1,b[20],c[2];
// // // //     int a,d,delete1id,i;
// // // //     student s1;
// // // //     llist llist1;
// // // //     llink head;               /* ָ������ʼ  */
// // // //     head = Initllist(llist1); /* ��������  */
// // // //     if (!head)
// // // //     {
// // // //         printf("�ڴ����ʧ��! \n");
// // // //         exit(1);
// // // //     }
// // // //     printf("ԭ��������: ");
// // // //     printllist(head); /* ���ԭ������  */
// // // //     printf("�����½��?Y?N?\n");
// // // //     cin >> flag;
// // // //     while (flag == 'Y')
// // // //     {
// // // //         printf("����ѧ����Ϣ:\n");
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
// // // //         head = insertnode(head, s1); /* �����½��  */
// // // //         if (!head)
// // // //         {
// // // //             printf("�ڴ����ʧ��! \n");
// // // //             exit(1);
// // // //         }
// // // //         printf("��ǰ������: ");
// // // //         printllist(head);
// // // //         printf("�����½��?Y?N?\n");
// // // //         cin >> flag;
// // // //     }
// // // //     /* ɾ�����ڽ�� */
// // // //     printf("ɾ�����?Y?N?\n");
// // // //     cin >> flag1;
// // // //     while (flag1 == 'Y')
// // // //     {
// // // //         printf("����ѧ��:");
// // // //         scanf("%d", &delete1id);
// // // //         head = delete1node(head, delete1id);
// // // //         printf("��ǰ������: ");
// // // //         printllist(head);
// // // //         printf("ɾ�����?Y?N?\n");
// // // //         cin >> flag1;
// // // //     }
// // // //     printf("��������: ");
// // // //     printllist(head); /*  ������  */
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