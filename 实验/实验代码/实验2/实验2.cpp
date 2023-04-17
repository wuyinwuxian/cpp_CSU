#include<iostream>
using namespace std;

//�������� 
void MakeArray(int **& a,int row,int col);
void DeleteArray(int **& a,int row);
void Show(int **& a,int row,int col);
void bubblesort(int **& a,int row,int col);
void multiply(int **& a1,int **& a2,int **& a3,int row,int col);

int main()
{
	int** buff1=NULL;
	int** &arr1=buff1;//��������1:N*m����
	
	int** buff2=NULL;
	int** &arr2=buff2;//��������2:m*N����
	
	int** buff3=NULL;
	int** &arr3=buff3;//��������3:��˺������
	
	int N=0,m=0;
	cout<<"����������N��m��ֵ��"<<endl;
	cin>>N>>m;
	
	//Ϊ�������鸳ֵ 
	cout<<"������N*m����Ԫ��:"<<endl; 
	MakeArray(arr1,N,m);
	cout<<"������m*N����Ԫ��:"<<endl; 
	MakeArray(arr2,m,N);
	
	//��ʾԭ���� 
	cout<<"N*m����Ϊ��"<<endl; 
	Show(arr1,N,m);
	cout<<"m*N����Ϊ��"<<endl;
	Show(arr2,m,N);
	
	//������ÿ�н���ð������ 
	bubblesort(arr1,N,m);
	bubblesort(arr2,m,N);
	
	//��ʾ���������� 
	cout<<"�����N*m����Ϊ��"<<endl; 
	Show(arr1,N,m);
	cout<<"�����m*N����Ϊ��"<<endl;
	Show(arr2,m,N);
	
	//����������� 
	multiply(arr1,arr2,arr3,N,m);
	
	//��ʾ��˺������ 
	cout<<"��˺������Ϊ��"<<endl; 
	Show(arr3,N,N);
	
	//�ͷ��ڴ� 
	DeleteArray(arr1,N);
	DeleteArray(arr2,m);
	DeleteArray(arr3,N);
	
	system("pause");
	return 0;
}

void MakeArray(int **& a,int row,int col)
{
	a=new int* [row];//����һ��ָ�����飬�����׵�ַ������a��
	
	//�������ָ�����飬�ֱ�ָ��һ������
	for (int i=0;i<row;i++)
	a[i]=new int[col];
	
	//������ֵ
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
	//���ͷ�ָ��������������� 
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

//��ÿ�н���ð������ 
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

//�������
void multiply(int **& a1,int **& a2,int **& a3,int row,int col) 
{
	a3=new int* [row];//����һ��ָ�����飬�����׵�ַ������a3��
	
	//�������ָ�����飬�ֱ�ָ��һ������
	for (int i=0;i<row;i++)
	a3[i]=new int[row];
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<row;j++)
		{
			int s=0;
			for(int t=0;t<col;t++)
			{
				//���ݾ�����˹�ʽ����ÿ��Ԫ�ص�ֵ 
				s=s+a1[i][t]*a2[t][j];
			}
			a3[i][j]=s;
		}
	}
}



