/* this is a program to check whether there exists a pair of values in two arrays ,
which when exchanged make the sum of all elements of both arrays equal */
# include<iostream>
# include<cmath>
using namespace std;
int main(){
	int T1[100],T2[100],i,j,x,y,foundcount=0,M,N,sum1,sum2,diff;
	cout<<"give number of values in first array : ";
	cin>>M;
	cout<<"give values for first array : ";
	for (i=0;i<M;i++){
//Done 
		cin>>T1[i];
	}
	cout<<"give number of values in second array : ";
	cin>>N;
	cout<<"give values for second array : ";
	for(i=0;i<N;i++){
		cin>>T2[i];
	}
	sum1=0;for (i=0;i<M;i++)sum1+=T1[i];
	sum2=0;for (i=0;i<N;i++)sum2+=T2[i];
	diff=abs(sum1-sum2);
	if (diff%2!=0){ 
	cout<<"the difference is not even \n"<<" therefore such a swap is not possible \n";
	return 1;
	}
	for (i=0;i<M;i++){
		y=(sum1-sum2)/2+T1[i];
	   for (j=0;j<N;j++){
	    	if (T2[j]==y){
				foundcount++;
				cout<<T1[i]<<" is to be swapped with "<<T2[j]<<endl;
			}
		}
	}
	if (foundcount=0){cout<<"sorry balancing not possible";
	}
	return 0;
}
