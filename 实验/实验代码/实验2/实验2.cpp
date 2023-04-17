#include<iostream>
using namespace std;

//函数声明 
void MakeArray(int **& a,int row,int col);
void DeleteArray(int **& a,int row);
void Show(int **& a,int row,int col);
void bubblesort(int **& a,int row,int col);
void multiply(int **& a1,int **& a2,int **& a3,int row,int col);

int main()
{
	int** buff1=NULL;
	int** &arr1=buff1;//建立引用1:N*m数组
	
	int** buff2=NULL;
	int** &arr2=buff2;//建立引用2:m*N数组
	
	int** buff3=NULL;
	int** &arr3=buff3;//建立引用3:相乘后的数组
	
	int N=0,m=0;
	cout<<"请依次输入N和m的值："<<endl;
	cin>>N>>m;
	
	//为两个数组赋值 
	cout<<"请输入N*m数组元素:"<<endl; 
	MakeArray(arr1,N,m);
	cout<<"请输入m*N数组元素:"<<endl; 
	MakeArray(arr2,m,N);
	
	//显示原数组 
	cout<<"N*m数组为："<<endl; 
	Show(arr1,N,m);
	cout<<"m*N数组为："<<endl;
	Show(arr2,m,N);
	
	//对数组每行进行冒泡排序 
	bubblesort(arr1,N,m);
	bubblesort(arr2,m,N);
	
	//显示排序后的数组 
	cout<<"排序后N*m数组为："<<endl; 
	Show(arr1,N,m);
	cout<<"排序后m*N数组为："<<endl;
	Show(arr2,m,N);
	
	//计算数组相乘 
	multiply(arr1,arr2,arr3,N,m);
	
	//显示相乘后的数组 
	cout<<"相乘后的数组为："<<endl; 
	Show(arr3,N,N);
	
	//释放内存 
	DeleteArray(arr1,N);
	DeleteArray(arr2,m);
	DeleteArray(arr3,N);
	
	system("pause");
	return 0;
}

void MakeArray(int **& a,int row,int col)
{
	a=new int* [row];//分配一个指针数组，将其首地址保存在a中
	
	//遍历这个指针数组，分别指向一个数组
	for (int i=0;i<row;i++)
	a[i]=new int[col];
	
	//遍历赋值
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)	
		{
			cin>>a[i][j];
		}
	} 
}

void DeleteArray(int **& a,int row)
{
	//先释放指针数组里面的数组 
	for(int i=0;i<row;i++)
	delete[] a[i];
	delete[] a; 
}

void Show(int **& a,int row,int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<a[i][j]<<'\t';
		}
		cout<<endl; 
	}
}

//对每行进行冒泡排序 
void bubblesort(int **& a,int row,int col)
{
	for(int num=0;num<row;num++)
	{
		for(int i=0;i<col-1;i++)
		{
			for(int j=0;j<col-i-1;j++)
			{
				if(a[num][j]>a[num][j+1])
				{
					int temp;
					temp=a[num][j];
					a[num][j]=a[num][j+1];
					a[num][j+1]=temp;
				}
			}
		}
	}
}

//数组相乘
void multiply(int **& a1,int **& a2,int **& a3,int row,int col) 
{
	a3=new int* [row];//分配一个指针数组，将其首地址保存在a3中
	
	//遍历这个指针数组，分别指向一个数组
	for (int i=0;i<row;i++)
	a3[i]=new int[row];
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<row;j++)
		{
			int s=0;
			for(int t=0;t<col;t++)
			{
				//根据矩阵相乘公式计算每个元素的值 
				s=s+a1[i][t]*a2[t][j];
			}
			a3[i][j]=s;
		}
	}
}



