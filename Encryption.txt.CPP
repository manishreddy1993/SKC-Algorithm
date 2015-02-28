#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
void main()
{
 clrscr();
 const int max=1000;
 char str[max];
 cout<<"Enter plain text: ";
 gets(str);
 int a[1000];
 int key;
 int arr[1000];
 for (int i = 0; i< strlen(str); i++)
 {
 int x = str[i] - 97;
 if (x==-65)
 x = x + 92;
 if (x==-64)
 x = x+92;
 if(x==-34)
 x = x +63;
 if (x== -51)
 x = x+81;
 if (x== -53)
 x = x+84;
 if (x == -52)
 x = x+78;
 if (i==0)
 key = x;
for(int c=0;c<5;c++)
{
int k;
k=x>>4-c;
if(k&1)
arr[5*i+c]=1;
else arr[5*i+c] = 0;

a[5*i+c] = arr[5*i+c];
}
}
    key = key%4;

int y = strlen(str);
y = y*5;

  int p;
  int q;
  int z=0,x;

  while (z< y/5) {

  if (key==0)
	{
	for(i=0; i< y/5;i++)
	{ if (i==z) {
	p= arr[5*i+4];
	arr[5*i+4]=arr[5*i];
	arr[5*i] = p;
	q = arr[5*i+3];
	arr[5*i+3] =arr[5*i+1];
	arr[5*i+1] = q;
		for ( x=0; x<5; x++)
		{

		a[5*i+x] =arr[5*i+x];
		}
	}
	}  }
       for (i=0; i<y/5; i++)
	 { if (i==z){
       for (x=0; x<5; x++) { arr[((x+(5-key))%5)+5*z]  = a[5*i+x];}
       for (int r=0; r<5; r++) {a[5*i+r] = arr[5*i+r];
		     }} }
      if (key ==1)
      {
	for(i=0; i< y/5;i++)
	{ if (i==z) {
	p= arr[5*i+4];
	arr[5*i+4]=arr[5*i];
	arr[5*i] = p;
	q = arr[5*i+3];
	arr[5*i+3] =arr[5*i+1];
	arr[5*i+1] = q;
		for ( x=0; x<5; x++)
		{

		a[5*i+x] =arr[5*i+x];
		}
	}
	}  }

	 for (i=0; i<y/5; i++)
	 {if (i==z){
	 for (int u = 0; u<5; u++)
	 { int e = 5*i+u;
	 if (a[e] == 1)
	{
	a[e] = 0;
	}
	else a[e]=1;


	arr[e] = a[e];
	}           }}

    if (key==2)
	{
	for(i=0; i< y/5;i++)
	{ if (i==z) {
	p= arr[5*i+4];
	arr[5*i+4]=arr[5*i];
	arr[5*i] = p;
	q = arr[5*i+3];
	arr[5*i+3] =arr[5*i+1];
	arr[5*i+1] = q;
		for ( x=0; x<5; x++)
		{

		a[5*i+x] =arr[5*i+x];
		}
	}
	}  }

 for (i=0; i<y/5; i++)
	 { if (i==z){
       for (x=0; x<5; x++) { arr[((x+1)%5)+5*z]  = a[5*i+x];}
       for (int r=0; r<5; r++) { a[5*i+r] = arr[5*i+r];
		     }} }

		     if (key==3)	{
	for(i=0; i< y/5;i++)
	{ if (i==z) {
	p= arr[5*i+4];
	arr[5*i+4]=arr[5*i];
	arr[5*i] = p;
	q = arr[5*i+3];
	arr[5*i+3] =arr[5*i+1];
	arr[5*i+1] = q;
		for ( x=0; x<5; x++)
		{

		a[5*i+x] =arr[5*i+x];
		}
	}
	}  }
key++; z++;    key = key%4;
}

cout<< "The cipher text is: ";
 char word[1000];
	  for (i=0; i<y/5; i++)
	 {           int base =1;q=0;
	  for (int j=4; j>=0; j--)
	   {
	   p = (a[(5*i)+j]*base) +q;
	   q=p;
	   base = base*2;
	   }

if(p<26)
p=p+97;
if (p==27)
p = p+5;//
if (p==28)
p = p+5;//!
if(p==29)
p= p+34;//?
if (p==30)
p = p+16;//.
if (p==31)
p = p+13;//,
if (p ==26)
p = p+19;//-
word[i]=p;
cout<<word[i];
}
cout<<str[0];
getch();
}