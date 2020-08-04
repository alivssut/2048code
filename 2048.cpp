#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <stdio.h>
#include <dos.h>
#include <iomanip>
#include <fstream>
using namespace std;

void jadval(int n[][100],int row,int column){
		int ii,jj;
		for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			n[i][j]=0;
		}
	}
	while(1){
	ii=rand()%row;
	jj=rand()%row;
	if(n[ii][jj]==0){
	  n[ii][jj]=2;
	  break;
  }
}
	cout<<"  ";
	for(int i=0;i<row;i++)
	    cout<<" "<<i+1;
	    cout<<endl;
	
	for(int i=0;i<row;i++)
	   if(i==row-1||i==0)
	      cout<<" _";
	      else{
	      	 cout<<"__ ";
		  }
	    cout<<endl;
	
	for(int i=0;i<row;i++){
		cout<<i+1<<"|";
		for(int j=0;j<column;j++){
			cout<<" "<<n[i][j];
		    if(j==row-1)
		       cout<<"|";	
		}
			cout<<endl;
	}
	for(int i=0;i<row;i++)
	   if(i==row-1||i==0)
	      cout<<" _";
	      else{
	      	 cout<<"__ ";
		  }
	
}

int sum(int n_sum[][100],int row){
	int sum=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			sum+=n_sum[i][j];
		}
	}
	return sum;
}


void select(int n[][100],int ro){
	long int cnt=0,count=0;
	int iop=0;
	char get;
	int ii,jj;
while(cnt<10000){
	cout<<"plz enter the direction:"<<endl;
    cout<<endl<<setw(28)<<"score:"<<sum(n,ro)<<endl;

	if( getch()==0 )
     cout<<getch();
     
switch(getch())
{
	
case 72: cout<<"up"<<endl; 
system("cls");
   for(int i=0;i<ro;i++){
   	for(int j=0;j<ro;j++){
   		if(n[i][j]>0){
   		
   			for(int k=i;k>0;k--,iop--){
   				if(n[k-1][j]==0)
   				  swap(n[k][j],n[k-1][j]);
					   
			   if(n[k-1][j]==n[k][j]){
			     n[k-1][j]=n[k-1][j]+n[k][j];
			     n[k][j]=0;
			     break;
			    }
		      }
		   }
	   }
   }
   	while(1){
	ii=rand()%ro;
	jj=rand()%ro;
	if(n[ii][jj]==0){
	  n[ii][jj]=2;
	  break;
  }
}
for(int i=0;i<ro;i++){
	for(int j=0;j<ro;j++)
	cout<<n[i][j]<<"\t";
	cout<<endl<<endl;
}
break;
case 75: cout<<"left"<<endl; 
system("cls");
 for(int i=0;i<ro;i++){
   	for(int j=0;j<ro;j++){
   		if(n[i][j]>0){
   			iop=i;
   			for(int k=j;k>0;k--){
   				if(n[i][k-1]==0)
   				  swap(n[i][k],n[i][k-1]);
					   
			   if(n[i][k-1]==n[i][k]){
			     n[i][k-1]=n[i][k-1]+n[i][k];
			     n[i][k]=0;
			     break;
			    }
		      }
		   }
	   }
   }
   	while(1){
   		
	ii=rand()%ro;
	jj=rand()%ro;
	if(n[ii][jj]==0){
	  n[ii][jj]=2;
	  break;
  }
}
for(int i=0;i<ro;i++){
	for(int j=0;j<ro;j++)
	cout<<n[i][j]<<"\t";
	cout<<endl<<endl;
}
break;
case 77: cout<<"rightt"<<endl;
system("cls");
 for(int i=0;i<=ro;i++){
   	for(int j=ro-1;j>=0;j--){
   		if(n[i][j]>0){
   			for(int k=ro-1;k>=0;k--){
   		      if(n[i][k]>0)
   				for(int q=k;q<ro-1;q++){
   				  if(n[i][q+1]==0)
   				     swap(n[i][q],n[i][q+1]);
   				  
			     if(n[i][q+1]==n[i][q]){
			        n[i][q+1]=n[i][q+1]+n[i][q];
			        n[i][q]=0;
			         break;
			      }
			    }
		      }
		   }
	   }
   }
   	while(1){
	ii=rand()%ro;
	jj=rand()%ro;
	if(n[ii][jj]==0){
	  n[ii][jj]=2;
	  break;
  }
}
for(int i=0;i<ro;i++){
	for(int j=0;j<ro;j++)
	cout<<n[i][j]<<"\t";
	cout<<endl<<endl;
}
break;

case 80: cout<<"down"<<endl; 
system("cls");
 for(int i=ro;i>=0;i--){
   	for(int j=0;j<ro;j++){
   		if(n[i][j]>0){
   	       for(int k=ro-1;k>=0;k--){
   			 if(n[i][k]>0)
   			  for(int p=i;p<ro-1;p++){
   				if(n[p+1][j]==0)
   				  swap(n[p][j],n[p+1][j]);
					   
			   if(n[p][j]==n[p+1][j]){
			     n[p+1][j]=n[p+1][j]+n[p][j];
			     n[p][j]=0;
			     break;
			      }
			    }
		      }
		   }
	   }
   }
   	while(1){
	ii=rand()%ro;
	jj=rand()%ro;
	if(n[ii][jj]==0){
	  n[ii][jj]=2;
	  break;
  }
}
for(int i=0;i<ro;i++){
	for(int j=0;j<ro;j++)
	cout<<n[i][j]<<"\t";
	cout<<endl<<endl;
}

break;
}
cout<<endl;
for(int i=0;i<ro;i++){
	for(int j=0;j<ro;j++)
	if(n[i][j]!=0)count++;
}
if(count==0){
cnt=10000000;
cout<<"game over";
}
cnt++;
  }

}

int main(){
	int n[100][100];
	int row,column;
	cout<<"enter the row and column:";
	cin>>row>>column;
	
	jadval(n,row,column);
	cout<<endl;
    select(n,row);
	
}
